#ifndef _SERIALIZER_API_
#define _SERIALIZER_API_

#include "FastCdr.h"
#include "FastBuffer.h"
#include "CommonData.h"

namespace DynamicFastBuffers
{
	class SerializerAPI
	{

	friend class BytecodeAPI;

	private:
		//No attributes or private functions 
		//Primitive data types
		static void* serializeInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeString(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeString(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeBoolean(eProsima::FastCdr *cdr, void *data, int &size);
		static void* SerializerAPI::deserializeBoolean(eProsima::FastCdr *cdr, void *data, int &size);
		
		//Complex data types
		static void* serializeStruct(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeStruct(eProsima::FastCdr *cdr, void *data, int &size);

		static void* serializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		
		static void* serializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size);
		static void* serializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		static void* deserializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size);
	public:
		static void serialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr);
		static void deserialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr);
	};
};

#endif _SERIALIZER_API_