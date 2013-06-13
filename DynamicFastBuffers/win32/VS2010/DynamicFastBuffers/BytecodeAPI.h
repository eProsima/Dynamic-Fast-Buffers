#ifndef _BYTECODE_API_
#define _BYTECODE_API_

#include "CommonData.h"
#include "SerializerAPI.h"
#include "WrongParamException.h"

namespace DynamicFastBuffers
{
	class Bytecode;

	class BytecodeAPI
	{
	private:
		static void generateBytecodeSerialization(Bytecode *bytecode, Typecode *typecode, void*&index);
		static void generateBytecodeDeserialization(Bytecode *bytecode, Typecode *typecode, void *&index);
		static void insertJumps(Typecode *typecode, Bytecode *bytecode, void *&m_currentPosition);
		static inline size_t alignment(size_t dataSize, void *&m_currentPosition);
	public:
		static Bytecode* generateBytecode(Typecode *typecode, flag flag);
	};
};

#endif _BYTECODE_API_