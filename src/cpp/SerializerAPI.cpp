#include "cpp/SerializerAPI.h"
#include <iostream>

namespace DynamicFastBuffers
{
	void SerializerAPI::serialize(void *data, Bytecode* bytecode, eProsima::FastCdr *serializer)
	{
		void *val = data;
		vector<CALLBACK>* tc = bytecode->getBytecode();
		vector<int> *jumps = bytecode->getAlignment();
		int jLength = jumps->size();
		int length = tc->size();
		int* size;

		if(jLength != 0){
			for (int i=0; i< length; ++i){
				
				val = static_cast<char*>(val) + (*jumps)[i]; 

				//printf("%d - %p\n", i, val);

				size = bytecode->getSize();

				val = (*tc)[i] (serializer, val, *size);
				
			}
		}else{
			for (int i=0; i< length; ++i){
				size = bytecode->getSize();
				val = (*tc)[i] (serializer, val, *size);
			}
		}

	}

	void SerializerAPI::deserialize(void *data, Bytecode* bytecode, eProsima::FastCdr *serializer)
	{
		void *val = data;
		vector<CALLBACK>* tc = bytecode->getBytecode();
		vector<int> *jumps = bytecode->getAlignment();
		int jLength = jumps->size();
		int length = tc->size();
		int* size;

		if(jLength != 0){
			for (int i=0; i< length; ++i){
				val = static_cast<char*>(val) + (*jumps)[i]; 
				
				size = bytecode->getSize();
				val = (*tc)[i] (serializer, val, *size);
			}
		}else{
			for (int i=0; i< length; ++i){
				size = bytecode->getSize();
				val = (*tc)[i] (serializer, val, *size);
			}
		}
	}

	/*
	* INTEGER
	*/
	void* SerializerAPI::serializeInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "int" << std::endl;
		int32_t *p = (int32_t *) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//printf("entra\n");
		int32_t* pInteger = (int32_t *) data;
		serializer->deserialize(*pInteger);
		++pInteger;
		//printf("sale\n");
		return (void*) pInteger;
	}

	/*
	* SHORT
	*/
	void* SerializerAPI::serializeShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "short" << std::endl;
		int16_t *p = (int16_t *) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		int16_t* pShort = (int16_t *) data;
		serializer->deserialize(*pShort);
		++pShort;
		return (void*) pShort;
	}

	/*
	* LONG
	*/
	void* SerializerAPI::serializeLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "long" << std::endl;
		int64_t *p = (int64_t *) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		int64_t *pLong = (int64_t *) data;
		serializer->deserialize(*pLong);
		++pLong;
		return (void*) pLong;
	}

	/*
	* FLOAT
	*/
	void* SerializerAPI::serializeFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "float" << std::endl;
		float *p = (float*) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		float* pFloat = (float *) data;
		serializer->deserialize(*pFloat);
		++pFloat;
		return (void*) pFloat;
	}

	/*
	* DOUBLE
	*/
	void* SerializerAPI::serializeDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "double" << std::endl;
		double *p = (double*) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		double* pDouble = (double*) data;
		serializer->deserialize(*pDouble);
		++pDouble;
		return (void*) pDouble;
	}

	/*
	* STRING
	*/
	void* SerializerAPI::serializeString(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "string" << std::endl;
		string &s = *static_cast<std::string*>(data);
		//printf("%s\n", &s);
		serializer->serialize(s);
		void* ret = data;
		ret = static_cast<char*>(ret) + sizeof(std::string);
		return ret;
	}

	void* SerializerAPI::deserializeString(eProsima::FastCdr *serializer, void *data, int &size)
	{
		string &pString = *static_cast<std::string*>(data);
		//printf("%s\n", &pString);
		serializer->deserialize(pString);
		void* ret = data;
		ret = static_cast<char*>(ret) + sizeof(std::string);
		return ret;
	}

	/*
	* CHARACTER
	*/
	void* SerializerAPI::serializeCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "char" << std::endl;
		char *p = (char*) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		char* pChar = (char*) data;
		serializer->deserialize(*pChar);
		++pChar;
		return (void*) pChar;
	}

	/*
	* BOOLEAN
	*/
	void* SerializerAPI::serializeBoolean(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "bool" << std::endl;
		bool *p = (bool*) data;
		serializer->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeBoolean(eProsima::FastCdr *serializer, void *data, int &size)
	{
		bool* pBool = (bool*) data;
		serializer->deserialize(*pBool);
		++pBool;
		return (void*) pBool;
	}

	/*
	* ARRAY INT
	*/
	void* SerializerAPI::serializeArrayInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "intArray" << std::endl;
		int32_t *arrayInt = (int32_t*) data;
		serializer->serializeArray(arrayInt, size);
		arrayInt += size;
		return (void*) arrayInt;
	}
	
	void* SerializerAPI::deserializeArrayInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		int32_t *arrayInt = (int32_t*) data;
		serializer->deserializeArray(arrayInt, size);
		arrayInt += size;
		return (void*) arrayInt;
	}

	/*
	* ARRAY SHORT
	*/
	void* SerializerAPI::serializeArrayShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "shortArray" << std::endl;
		short *arrayShort = (short*) data;
		serializer->serializeArray(arrayShort, size);
		arrayShort += size;
		return (void*) arrayShort;
	}
	
	void* SerializerAPI::deserializeArrayShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		short *arrayShort = (short*) data;
		serializer->deserializeArray(arrayShort, size);
		arrayShort += size;
		return (void*) arrayShort;
	}

	/*
	* ARRAY LONG
	*/
	void* SerializerAPI::serializeArrayLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		int64_t *arrayLong = (int64_t*) data;
		serializer->serializeArray(arrayLong, size);
		arrayLong += size;
		return (void*) arrayLong;
	}
	
	void* SerializerAPI::deserializeArrayLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		int64_t *arrayLong = (int64_t*) data;
		serializer->deserializeArray(arrayLong, size);
		arrayLong += size;
		return (void*) arrayLong;
	}

	/*
	* ARRAY FLOAT
	*/
	void* SerializerAPI::serializeArrayFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		float *arrayFloat = (float*) data;
		serializer->serializeArray(arrayFloat, size);
		arrayFloat += size;
		return (void*) arrayFloat;
	}
	
	void* SerializerAPI::deserializeArrayFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		float *arrayFloat = (float*) data;
		serializer->deserializeArray(arrayFloat, size);
		arrayFloat += size;
		return (void*) arrayFloat;
	}

	/*
	* ARRAY DOUBLE
	*/
	void* SerializerAPI::serializeArrayDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		double *arrayDouble = (double*) data;
		serializer->serializeArray(arrayDouble, size);
		arrayDouble += size;
		return (void*) arrayDouble;
	}
	
	void* SerializerAPI::deserializeArrayDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		double *arrayDouble = (double*) data;
		serializer->deserializeArray(arrayDouble, size);
		arrayDouble += size;
		return (void*) arrayDouble;
	}

	/*
	* ARRAY CHARACTER
	*/
	void* SerializerAPI::serializeArrayCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		char *arrayCharacter = (char*) data;
		serializer->serializeArray(arrayCharacter, size);
		arrayCharacter += size;
		return (void*) arrayCharacter;
	}
	
	void* SerializerAPI::deserializeArrayCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		char *arrayCharacter = (char*) data;
		serializer->deserializeArray(arrayCharacter, size);
		arrayCharacter += size;
		return (void*) arrayCharacter;
	}

	/*
	* VECTOR INT
	*/
	void* SerializerAPI::serializeSequenceInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<int32_t> *vInt = (vector<int32_t>*) data;
		serializer->serialize(*vInt);
		vInt ++;
		return (void*) vInt;
	}
	
	void* SerializerAPI::deserializeSequenceInteger(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<int32_t> *vInt = (vector<int32_t>*) data;
		serializer->deserialize(*vInt);
		vInt ++;
		return (void*) vInt;
	}

	/*
	* VECTOR SHORT
	*/
	void* SerializerAPI::serializeSequenceShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<short> *vShort = (vector<short>*) data;
		serializer->serialize(*vShort);
		vShort ++;
		return (void*) vShort;
	}
	
	void* SerializerAPI::deserializeSequenceShort(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<short> *vShort = (vector<short>*) data;
		serializer->deserialize(*vShort);
		vShort ++;
		return (void*) vShort;
	}

	/*
	* VECTOR LONG
	*/
	void* SerializerAPI::serializeSequenceLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		//std::cout << "longSequence" << std::endl;
		vector<int64_t> *vLong = (vector<int64_t>*) data;
		serializer->serialize(*vLong);
		++vLong;
		return (void*) vLong;
	}
	
	void* SerializerAPI::deserializeSequenceLong(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<int64_t> *vLong = (vector<int64_t>*) data;
		serializer->deserialize(*vLong);
		vLong ++;
		return (void*) vLong;
	}

	/*
	* VECTOR FLOAT
	*/
	void* SerializerAPI::serializeSequenceFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<float> *vFloat = (vector<float>*) data;
		serializer->serialize(*vFloat);
		vFloat ++;
		return (void*) vFloat;
	}
	
	void* SerializerAPI::deserializeSequenceFloat(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<float> *vFloat = (vector<float>*) data;
		serializer->deserialize(*vFloat);
		vFloat ++;
		return (void*) vFloat;
	}

	/*
	* VECTOR DOUBLE
	*/
	void* SerializerAPI::serializeSequenceDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<double> *vDouble = (vector<double>*) data;
		serializer->serialize(*vDouble);
		vDouble ++;
		return (void*) vDouble;
	}
	
	void* SerializerAPI::deserializeSequenceDouble(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<double> *vDouble = (vector<double>*) data;
		serializer->deserialize(*vDouble);
		vDouble ++;
		return (void*) vDouble;
	}

	/*
	* VECTOR CHARACTER
	*/
	void* SerializerAPI::serializeSequenceCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<char> *vChar = (vector<char>*) data;
		serializer->serialize(*vChar);
		vChar ++;
		return (void*) vChar;
	}
	
	void* SerializerAPI::deserializeSequenceCharacter(eProsima::FastCdr *serializer, void *data, int &size)
	{
		vector<char> *vChar = (vector<char>*) data;
		serializer->deserialize(*vChar);
		vChar ++;
		return (void*) vChar;
	}

};
