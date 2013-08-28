#include <iostream>
#include "cpp/BytecodeAPI.h"

using namespace std;

namespace DynamicFastBuffers
{
	Bytecode* BytecodeAPI::generateBytecode(Typecode *typecode, flag flag)
	{
		if(typecode == NULL){
			throw WrongParamException("Parameter inserted is null. A Typecode object must be specified.");
		}
		void *index = NULL;
		Bytecode *bytecode = new Bytecode();
		if(flag){
			BytecodeAPI::generateBytecodeSerialization(bytecode, typecode, index);
		}else{
			BytecodeAPI::generateBytecodeDeserialization(bytecode, typecode, index);
		}
		for(int i=0; i<bytecode->getAlignment()->size(); ++i){
			//printf("%d, ", bytecode->getAlignment()->at(i));
		}
		//std::cout << endl;
		return bytecode; 
	}

	void BytecodeAPI::generateBytecodeSerialization(Bytecode *bytecode, Typecode *typecode, void *&index)
	{
		switch(typecode->getKind())
		{
		case TC_NOTYPE:
			//Do nothing
			break;
		case TC_INTEGER:
			bytecode->addFunction(SerializerAPI::serializeInteger);
			break;
		case TC_SHORT:
			bytecode->addFunction(SerializerAPI::serializeShort);
			break;
		case TC_LONG:
			bytecode->addFunction(SerializerAPI::serializeLong);
			break;
		case TC_FLOAT:
			bytecode->addFunction(SerializerAPI::serializeFloat);
			break;
		case TC_DOUBLE:
			bytecode->addFunction(SerializerAPI::serializeDouble);
			break;
		case TC_STRING:
			bytecode->addFunction(SerializerAPI::serializeString);
			break;
		case TC_CHARACTER:
			bytecode->addFunction(SerializerAPI::serializeCharacter);
			break;
		case TC_BOOLEAN:
			bytecode->addFunction(SerializerAPI::serializeBoolean);
			break;
		case TC_STRUCT:
			{
				vector<Typecode> members = typecode->getMembers();
				size_t count = members.size();
//#if defined(_M_IX86)
				bool jumped = false; //In Win32, padding is inserted after a internal structure
//#endif
				for(unsigned int i=0; i<count; ++i){
					if(members[i].getKind() == TC_STRUCT){ //Struct
						if(i==0){
							members[i].setStructSize(typecode->getSize());
						}
						generateBytecodeSerialization(bytecode, &members[i], index);
//#if defined(_M_IX86)
						if(i != count-1){ //If struct is not the last member
							insertJumps(&members[i], bytecode, index);
						}
						jumped = true;
//#endif
					}else{ //other kind
						if(i==0){ //First element
							
							
//#if defined(_M_IX86)
							if(jumped){
								alignment(members[i].getSize(), index);
								jumped = false;
							}else{
								insertJumps(typecode, bytecode, index);
							}
#if defined(_M_IX86)							
							if(members[i].getKind() == TC_STRING){
								index = (char*) index + sizeof(string) - sizeof(int32_t);
							}
							
#else
//							insertJumps(typecode, bytecode, index);
#endif
						}else{//Other elements
//#if defined(_M_IX86)
							if(!jumped){
								insertJumps(&members[i], bytecode, index);
							}else{
								jumped = false;
							}
//#else
//							insertJumps(&members[i], bytecode, index);
//#endif
						}



						generateBytecodeSerialization(bytecode, &members[i], index);
						//printf("\t\%s index: %p ->", members[i].getKindStr().c_str(), index);
#if defined(_M_IX86)
						
						if(members[i].getKind() == TC_SEQUENCE){
							index = (char*) index + sizeof(std::vector<void*>);
						}else{
							if(members[i].getKind() == TC_STRING){
								index = (char*) index + (sizeof(std::string));
							}else{
								index = (char*) index + (members[i].getSize()*members[i].getArraySize());
							}
							
						}
#else
						index = (char*) index + (members[i].getSize()*members[i].getArraySize());
#endif
						
						//printf("%p\n", index);
					}
				}
			}
			break;
		//case TC_UNION:
		case TC_ARRAY:
			{
				int nDims = typecode->getConstentSize();
				vector<int> dimensions = typecode->getDimensions();
				int serializations = 1;
				int i=0;
				for(i; i<nDims; ++i){
					int dim = dimensions[i];
					serializations *= dim;
				}
				bytecode->setSize(serializations);
				switch(typecode->getType()->getKind())
				{
				case TC_INTEGER:
					bytecode->addFunction(SerializerAPI::serializeArrayInteger);
					break;
				case TC_SHORT:
					bytecode->addFunction(SerializerAPI::serializeArrayShort);
					break;
				case TC_LONG:
					bytecode->addFunction(SerializerAPI::serializeArrayLong);
					break;
				case TC_FLOAT:
					bytecode->addFunction(SerializerAPI::serializeArrayFloat);
					break;
				case TC_DOUBLE:
					bytecode->addFunction(SerializerAPI::serializeArrayDouble);
					break;
				case TC_STRING:
					// Not supported
					break;
				case TC_CHARACTER:
					bytecode->addFunction(SerializerAPI::serializeArrayCharacter);
					break;
				case TC_BOOLEAN:
					// Not supported
					break;
				}
				break;
			}
		case TC_SEQUENCE:
			{
				switch(typecode->getType()->getKind())
				{
				case TC_INTEGER:
					bytecode->addFunction(SerializerAPI::serializeSequenceInteger);
					break;
				case TC_SHORT:
					bytecode->addFunction(SerializerAPI::serializeSequenceShort);
					break;
				case TC_LONG:
					bytecode->addFunction(SerializerAPI::serializeSequenceLong);
					break;
				case TC_FLOAT:
					bytecode->addFunction(SerializerAPI::serializeSequenceFloat);
					break;
				case TC_DOUBLE:
					bytecode->addFunction(SerializerAPI::serializeSequenceDouble);
					break;
				case TC_STRING:
					//Not supported
					break;
				case TC_CHARACTER:
					bytecode->addFunction(SerializerAPI::serializeSequenceCharacter);
					break;
				case TC_BOOLEAN:
					//Not supported
					break;
				}
			}
		}
	}

	void BytecodeAPI::generateBytecodeDeserialization(Bytecode *bytecode, Typecode *typecode, void *&index)
	{
		switch(typecode->getKind())
		{
		case TC_NOTYPE:
			//Do nothing
			break;
		case TC_INTEGER:
			bytecode->addFunction(SerializerAPI::deserializeInteger);
			break;
		case TC_SHORT:
			bytecode->addFunction(SerializerAPI::deserializeShort);
			break;
		case TC_LONG:
			bytecode->addFunction(SerializerAPI::deserializeLong);
			break;
		case TC_FLOAT:
			bytecode->addFunction(SerializerAPI::deserializeFloat);
			break;
		case TC_DOUBLE:
			bytecode->addFunction(SerializerAPI::deserializeDouble);
			break;
		case TC_STRING:
			bytecode->addFunction(SerializerAPI::deserializeString);
			break;
		case TC_CHARACTER:
			bytecode->addFunction(SerializerAPI::deserializeCharacter);
			break;
		case TC_BOOLEAN:
			bytecode->addFunction(SerializerAPI::deserializeBoolean);
			break;
		case TC_STRUCT:
			{
				vector<Typecode> members = typecode->getMembers();
				size_t count = members.size();
//#if defined(_M_IX86)
				bool jumped = false; //In Win32, padding is inserted after a internal structure
//#endif
				for(unsigned int i=0; i<count; ++i){
					if(members[i].getKind() == TC_STRUCT){ //Struct
						if(i==0){
							members[i].setStructSize(typecode->getSize());
						}
						generateBytecodeDeserialization(bytecode, &members[i], index);
//#if defined(_M_IX86)
						if(i != count-1){ //If struct is not the last member
							insertJumps(&members[i], bytecode, index);
						}
						jumped = true;
//#endif
					}else{ //other kind
						if(i==0){ //First element
							
							
//#if defined(_M_IX86)
							if(jumped){
								alignment(members[i].getSize(), index);
								jumped = false;
							}else{
								insertJumps(typecode, bytecode, index);
							}
#if defined(_M_IX86)							
							if(members[i].getKind() == TC_STRING){
								index = (char*) index + sizeof(string) - sizeof(int32_t);
							}
							
#else
//							insertJumps(typecode, bytecode, index);
#endif
						}else{//Other elements
//#if defined(_M_IX86)
							if(!jumped){
								insertJumps(&members[i], bytecode, index);
							}else{
								jumped = false;
							}
//#else
//							insertJumps(&members[i], bytecode, index);
//#endif
						}



						generateBytecodeDeserialization(bytecode, &members[i], index);
						//printf("\t\%s index: %p ->", members[i].getKindStr().c_str(), index);
#if defined(_M_IX86)
						
						if(members[i].getKind() == TC_SEQUENCE){
							index = (char*) index + sizeof(std::vector<void*>);
						}else{
							if(members[i].getKind() == TC_STRING){
								index = (char*) index + (sizeof(std::string));
							}else{
								index = (char*) index + (members[i].getSize()*members[i].getArraySize());
							}
							
						}
#else
						index = (char*) index + (members[i].getSize()*members[i].getArraySize());
#endif
						
						//printf("%p\n", index);
					}
				}
			}
			break;
		case TC_ARRAY:
			{
				int nDims = typecode->getConstentSize();
				vector<int> dimensions = typecode->getDimensions();
				int serializations = 1;
				int i=0;
				for(i; i<nDims; ++i){
					int dim = dimensions[i];
					serializations *= dim;
				}
				bytecode->setSize(serializations);
				switch(typecode->getType()->getKind())
				{
				case TC_INTEGER:
					bytecode->addFunction(SerializerAPI::deserializeArrayInteger);
					break;
				case TC_SHORT:
					bytecode->addFunction(SerializerAPI::deserializeArrayShort);
					break;
				case TC_LONG:
					bytecode->addFunction(SerializerAPI::deserializeArrayLong);
					break;
				case TC_FLOAT:
					bytecode->addFunction(SerializerAPI::deserializeArrayFloat);
					break;
				case TC_DOUBLE:
					bytecode->addFunction(SerializerAPI::deserializeArrayDouble);
					break;
				case TC_STRING:
					//Not supported
					break;
				case TC_CHARACTER:
					bytecode->addFunction(SerializerAPI::deserializeArrayCharacter);
					break;
				case TC_BOOLEAN:
					//Not supported
					break;
				}
				break;
			}
		case TC_SEQUENCE:
			{
				switch(typecode->getType()->getKind())
				{
				case TC_INTEGER:
					bytecode->addFunction(SerializerAPI::deserializeSequenceInteger);
					break;
				case TC_SHORT:
					bytecode->addFunction(SerializerAPI::deserializeSequenceShort);
					break;
				case TC_LONG:
					bytecode->addFunction(SerializerAPI::deserializeSequenceLong);
					break;
				case TC_FLOAT:
					bytecode->addFunction(SerializerAPI::deserializeSequenceFloat);
					break;
				case TC_DOUBLE:
					bytecode->addFunction(SerializerAPI::deserializeSequenceDouble);
					break;
				case TC_STRING:
					//Not supported
					break;
				case TC_CHARACTER:
					bytecode->addFunction(SerializerAPI::deserializeSequenceCharacter);
					break;
				case TC_BOOLEAN:
					//Not supported
					break;
				}
			}
		}
	}

	void BytecodeAPI::insertJumps(Typecode *typecode, Bytecode *bytecode, void *&m_currentPosition)
	{

		bytecode->addAlignment(alignment(typecode->getSize(), m_currentPosition));
#if defined(_M_IX86)
		if(typecode->getKind() == TC_STRING){
			//printf("\t\tENTRA STRING: %p - ", m_currentPosition);
			//m_currentPosition = (char*) m_currentPosition + (sizeof(string)-sizeof(int32_t));
			//printf("%p\n", m_currentPosition);
		}
#endif
		//printf("%s - %d\n", typecode->getKindStr().c_str(), bytecode->getAlignment()->size());
	}

	inline size_t BytecodeAPI::alignment(size_t dataSize, void *&m_currentPosition)
	{
		size_t align;
		if(dataSize != 0){
			align = (dataSize - ((size_t) m_currentPosition % dataSize)) & (dataSize-1);
			//test
			//printf("\tData Size:  %d , Pos:  %p, SALTO:  %d", dataSize, m_currentPosition, align);
			//end test
			
		}else{
			align = 0;
		}
		m_currentPosition = (char*) m_currentPosition + align;
		//printf(" -> %p\n", m_currentPosition);
		if(dataSize == 8 && (((size_t) m_currentPosition % 8) != 0)){
		
			//test
			//printf("\t\tENTRA: \n");
			//end test
		
			m_currentPosition = (char*) m_currentPosition + sizeof(int);
			align += sizeof(int);
		}
		return align;
	}
};

