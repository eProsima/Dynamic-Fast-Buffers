#include <iostream>
#include "dfb/BytecodeAPI.h"

using namespace std;

namespace DynamicFastBuffers
{
	Bytecode* BytecodeAPI::generateBytecode(Typecode *typecode, flag flag)
	{
		if(typecode == NULL){
			throw WrongParamException("Parameter inserted is null. A Typecode object must be specified.");
		}
		
		void *index = NULL;
		void *initialPosition = NULL;
		bool added = false;
		Bytecode *bytecode = new Bytecode();
		if(flag){
			BytecodeAPI::generateBytecodeSerialization(bytecode, typecode, index, initialPosition, added);
		}else{
			BytecodeAPI::generateBytecodeDeserialization(bytecode, typecode, index, initialPosition, added);
		}
		
		return bytecode; 
	}

	void BytecodeAPI::generateBytecodeSerialization(Bytecode *bytecode, Typecode *typecode, void *&index, void *&initialPosition, bool added)
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
				for(unsigned int i=0; i<count; ++i){
					if(members[i].getKind() == TC_STRUCT){ //Struct

						insertJumps(&members[i], bytecode, index, initialPosition, added);
						added = true;
						generateBytecodeSerialization(bytecode, &members[i], index, initialPosition, added);
						//added = false;
						if(i + 1 < count){
							if(members[i+1].getAlign() > members[i].getAlign()) {
								added = false;
							} else {
								added = false;
								insertJumps(&members[i], bytecode, index, initialPosition, added);
								added = true;
							}
						}

					}else{ //other kind
						
						insertJumps(&members[i], bytecode, index, initialPosition, added);
						added = false;
						generateBytecodeSerialization(bytecode, &members[i], index, initialPosition, added);
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

	void BytecodeAPI::generateBytecodeDeserialization(Bytecode *bytecode, Typecode *typecode, void *&index, void *&initialPosition, bool added)
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
				for(unsigned int i=0; i<count; ++i){
					if(members[i].getKind() == TC_STRUCT){ //Struct

						insertJumps(&members[i], bytecode, index, initialPosition, added);
						added = true;
						generateBytecodeDeserialization(bytecode, &members[i], index, initialPosition, added);
						//added = false;
						if(i + 1 < count){
							if(members[i+1].getAlign() > members[i].getAlign()) {
								added = false;
							} else {
								added = false;
								insertJumps(&members[i], bytecode, index, initialPosition, added);
								added = true;
							}
						}

					}else{ //other kind
						
						insertJumps(&members[i], bytecode, index, initialPosition, added);
						added = false;
						generateBytecodeDeserialization(bytecode, &members[i], index, initialPosition, added);
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

	void BytecodeAPI::insertJumps(Typecode *typecode, Bytecode *bytecode, void *&m_currentPosition, void *&initialPosition, bool added)
	{
		if (typecode->getKind() == TC_STRUCT){
			if (added) {
				calculateStructPadding(m_currentPosition, initialPosition, typecode);
			} else {
				bytecode->addAlignment(calculateStructPadding(m_currentPosition, initialPosition, typecode));
			}
		} else {
			if (added) {
				calculatePadding(m_currentPosition, initialPosition, typecode, added);
			} else {
				bytecode->addAlignment(calculatePadding(m_currentPosition, initialPosition, typecode, added));
			}
		}
	}

	inline size_t BytecodeAPI::calculatePadding (void *&position, void* initialPosition, DynamicFastBuffers::Typecode *tc, bool added)
	{
		size_t padding = 0;
		size_t alignment = tc->getAlign();
		ptrdiff_t rawPosition = (char*)position - (char*)initialPosition;
		size_t calc = 0;
		if(alignment != 0){
			calc = ((size_t) rawPosition % alignment);
			padding = (alignment - (calc)) % alignment;
		}
		
		position = (char*) position + padding + (tc->getSize()*tc->getArraySize());

		return padding;
	}

	inline size_t BytecodeAPI::calculateStructPadding (void *&position, void* initialPosition, DynamicFastBuffers::Typecode *tc)
	{
		size_t padding = 0;
		size_t alignment = tc->getAlign();
		ptrdiff_t rawPosition = (char*)position - (char*)initialPosition;
		size_t calc = 0;
		if(alignment != 0){
			calc = ((size_t) rawPosition % alignment);
			padding = (alignment - (calc)) % alignment;
		}
		
		position = (char*) position + padding;

		return padding;
	}
};

