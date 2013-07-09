#include "cpp/SerializerAPI.h"
#include <iostream>

namespace DynamicFastBuffers
{
	void SerializerAPI::serialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr)
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

				//test

				//cout << val << endl;

				//end test


				size = bytecode->getSize();
				val = (*tc)[i] (cdr, val, *size);
			}
		}else{
			for (int i=0; i< length; ++i){
				size = bytecode->getSize();
				val = (*tc)[i] (cdr, val, *size);
			}
		}

	}

	void SerializerAPI::deserialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr)
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
				val = (*tc)[i] (cdr, val, *size);
			}
		}else{
			for (int i=0; i< length; ++i){
				size = bytecode->getSize();
				val = (*tc)[i] (cdr, val, *size);
			}
		}
	}

	/*
	* INTEGER
	*/
	void* SerializerAPI::serializeInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int32_t *p = (int32_t *) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int32_t* pInteger = (int32_t *) data;
		cdr->deserialize(*pInteger);
		++pInteger;
		return (void*) pInteger;
	}

	/*
	* SHORT
	*/
	void* SerializerAPI::serializeShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int16_t *p = (int16_t *) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int16_t* pShort = (int16_t *) data;
		cdr->deserialize(*pShort);
		++pShort;
		return (void*) pShort;
	}

	/*
	* LONG
	*/
	void* SerializerAPI::serializeLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int64_t *p = (int64_t *) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int64_t* pLong = (int64_t *) data;
		cdr->deserialize(*pLong);
		++pLong;
		return (void*) pLong;
	}

	/*
	* FLOAT
	*/
	void* SerializerAPI::serializeFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		float *p = (float*) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		float* pFloat = (float *) data;
		cdr->deserialize(*pFloat);
		++pFloat;
		return (void*) pFloat;
	}

	/*
	* DOUBLE
	*/
	void* SerializerAPI::serializeDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		double *p = (double*) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		double* pDouble = (double*) data;
		cdr->deserialize(*pDouble);
		++pDouble;
		return (void*) pDouble;
	}

	/*
	* STRING
	*/
	void* SerializerAPI::serializeString(eProsima::FastCdr *cdr, void *data, int &size)
	{
		string &s = *static_cast<std::string*>(data);

		//test
		//cout << s << endl;
		//end test

		cdr->serialize(s);

		//test
		//cout << "\t" << data << endl;
		//endtest
		void* ret = data;
		
		ret = static_cast<char*>(ret) + sizeof(std::string);
		//test
		//cout << "\t" << ret << endl;
		//end test
		return ret;
	}

	void* SerializerAPI::deserializeString(eProsima::FastCdr *cdr, void *data, int &size)
	{
		string &pString = *static_cast<std::string*>(data);
		cdr->deserialize(pString);
		void* ret = data;
		ret = static_cast<char*>(ret) + sizeof(std::string);
		return ret;
	}

	/*
	* CHARACTER
	*/
	void* SerializerAPI::serializeCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		char *p = (char*) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		char* pChar = (char*) data;
		cdr->deserialize(*pChar);
		++pChar;
		return (void*) pChar;
	}

	/*
	* BOOLEAN
	*/
	void* SerializerAPI::serializeBoolean(eProsima::FastCdr *cdr, void *data, int &size)
	{
		bool *p = (bool*) data;
		cdr->serialize(*p);
		++p;
		return (void *) p;
	}

	void* SerializerAPI::deserializeBoolean(eProsima::FastCdr *cdr, void *data, int &size)
	{
		bool* pBool = (bool*) data;
		cdr->deserialize(*pBool);
		++pBool;
		return (void*) pBool;
	}

	/*
	* ARRAY INT
	*/
	void* SerializerAPI::serializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int *arrayInt = (int*) data;
		cdr->serializeArray(arrayInt, size);
		arrayInt += size;
		return (void*) arrayInt;
	}
	
	void* SerializerAPI::deserializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int *arrayInt = (int*) data;
		cdr->deserializeArray(arrayInt, size);
		arrayInt += size;
		return (void*) arrayInt;
	}

	/*
	* ARRAY SHORT
	*/
	void* SerializerAPI::serializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		short *arrayShort = (short*) data;
		cdr->serializeArray(arrayShort, size);
		arrayShort += size;
		return (void*) arrayShort;
	}
	
	void* SerializerAPI::deserializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		short *arrayShort = (short*) data;
		cdr->deserializeArray(arrayShort, size);
		arrayShort += size;
		return (void*) arrayShort;
	}

	/*
	* ARRAY LONG
	*/
	void* SerializerAPI::serializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int32_t *arrayLong = (int32_t*) data;
		cdr->serializeArray(arrayLong, size);
		arrayLong += size;
		return (void*) arrayLong;
	}
	
	void* SerializerAPI::deserializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		int32_t *arrayLong = (int32_t*) data;
		cdr->deserializeArray(arrayLong, size);
		arrayLong += size;
		return (void*) arrayLong;
	}

	/*
	* ARRAY FLOAT
	*/
	void* SerializerAPI::serializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		float *arrayFloat = (float*) data;
		cdr->serializeArray(arrayFloat, size);
		arrayFloat += size;
		return (void*) arrayFloat;
	}
	
	void* SerializerAPI::deserializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		float *arrayFloat = (float*) data;
		cdr->deserializeArray(arrayFloat, size);
		arrayFloat += size;
		return (void*) arrayFloat;
	}

	/*
	* ARRAY DOUBLE
	*/
	void* SerializerAPI::serializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		double *arrayDouble = (double*) data;
		cdr->serializeArray(arrayDouble, size);
		arrayDouble += size;
		return (void*) arrayDouble;
	}
	
	void* SerializerAPI::deserializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		double *arrayDouble = (double*) data;
		cdr->deserializeArray(arrayDouble, size);
		arrayDouble += size;
		return (void*) arrayDouble;
	}

	/*
	* ARRAY CHARACTER
	*/
	void* SerializerAPI::serializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		char *arrayCharacter = (char*) data;
		cdr->serializeArray(arrayCharacter, size);
		arrayCharacter += size;
		return (void*) arrayCharacter;
	}
	
	void* SerializerAPI::deserializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		char *arrayCharacter = (char*) data;
		cdr->deserializeArray(arrayCharacter, size);
		arrayCharacter += size;
		return (void*) arrayCharacter;
	}

	/*
	* VECTOR INT
	*/
	void* SerializerAPI::serializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<int> *vInt = (vector<int>*) data;
		cdr->serialize(*vInt);
		vInt ++;
		return (void*) vInt;
	}
	
	void* SerializerAPI::deserializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<int> *vInt = (vector<int>*) data;
		cdr->deserialize(*vInt);
		vInt ++;
		return (void*) vInt;
	}

	/*
	* VECTOR SHORT
	*/
	void* SerializerAPI::serializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<short> *vShort = (vector<short>*) data;
		cdr->serialize(*vShort);
		vShort ++;
		return (void*) vShort;
	}
	
	void* SerializerAPI::deserializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<short> *vShort = (vector<short>*) data;
		cdr->deserialize(*vShort);
		vShort ++;
		return (void*) vShort;
	}

	/*
	* VECTOR LONG
	*/
	void* SerializerAPI::serializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<int32_t> *vLong = (vector<int32_t>*) data;
		cdr->serialize(*vLong);
		++vLong;
		return (void*) vLong;
	}
	
	void* SerializerAPI::deserializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<int32_t> *vLong = (vector<int32_t>*) data;
		cdr->deserialize(*vLong);
		vLong ++;
		return (void*) vLong;
	}

	/*
	* VECTOR FLOAT
	*/
	void* SerializerAPI::serializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<float> *vFloat = (vector<float>*) data;
		cdr->serialize(*vFloat);
		vFloat ++;
		return (void*) vFloat;
	}
	
	void* SerializerAPI::deserializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<float> *vFloat = (vector<float>*) data;
		cdr->deserialize(*vFloat);
		vFloat ++;
		return (void*) vFloat;
	}

	/*
	* VECTOR DOUBLE
	*/
	void* SerializerAPI::serializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<double> *vDouble = (vector<double>*) data;
		cdr->serialize(*vDouble);
		vDouble ++;
		return (void*) vDouble;
	}
	
	void* SerializerAPI::deserializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<double> *vDouble = (vector<double>*) data;
		cdr->deserialize(*vDouble);
		vDouble ++;
		return (void*) vDouble;
	}

	/*
	* VECTOR CHARACTER
	*/
	void* SerializerAPI::serializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<char> *vChar = (vector<char>*) data;
		cdr->serialize(*vChar);
		vChar ++;
		return (void*) vChar;
	}
	
	void* SerializerAPI::deserializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size)
	{
		vector<char> *vChar = (vector<char>*) data;
		cdr->deserialize(*vChar);
		vChar ++;
		return (void*) vChar;
	}

};