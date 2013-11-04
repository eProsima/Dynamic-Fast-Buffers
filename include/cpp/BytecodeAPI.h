/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _BYTECODE_API_
#define _BYTECODE_API_

#include "cpp/DFB_dll.h"
#include "cpp/CommonData.h"
#include "cpp/SerializerAPI.h"
#include "cpp/exceptions/WrongParamException.h"
#include "cpp/AlignmentInformation.h"

namespace DynamicFastBuffers
{
	/*!
     * @brief This static class offers an interface to generate a bytecode from a given Typecode object.
     * @ingroup BYTECODEAPIMODULE
     */
	class Dfb_DllAPI BytecodeAPI
	{
	private:

		/*!
         * @brief This function generates a bytecode for data serialization.
		 * @param bytecode A pointer to a Bytecode object where all function pointers for serializing data will be allocated.
		 * @param typecode A pointer to a Typecode object which describes user data types.
		 * @param index A void pointer reference that will act as a memory address to calculate memory alignment of complex data types.
		 * @exception WrongParamException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         */
		static void generateBytecodeSerialization(Bytecode *bytecode, Typecode *typecode, void*&index);

		/*!
         * @brief This function generates a bytecode for data deserialization.
		 * @param bytecode A pointer to a Bytecode object where all function pointers for deserializing data will be allocated.
		 * @param typecode A pointer to a Typecode object which describes user data types.
		 * @param index A void pointer reference that will act as a memory address to calculate memory alignment of complex data types.
		 * @exception WrongParamException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         */
		static void generateBytecodeDeserialization(Bytecode *bytecode, Typecode *typecode, void *&index);

		/*!
         * @brief This function adds an integer representing a memory jump between data into the Bytecode list of memory jumps.
		 * @param typecode A pointer to a Typecode object which describes the kind of data in order to calculate its memory alignment.
		 * @param bytecode A pointer to a Bytecode object where the jump will be added.
		 * @param index A void pointer reference that will act as a memory address to calculate memory alignment of complex data types.
		 */
		static void insertJumps(Typecode *typecode, Bytecode *bytecode, void *&m_currentPosition);

		/*!
         * @brief This function calculates the magnitude of the memory jump depending of the following data lenght specified in dataSize parameter.
		 * @param dataSize Object instance of size_t which indicates the length of the following data allocated in memory.
		 * @param m_currentPosition Current memory position.
		 * @return The number of Bytes of padding inserted by the compiler whan aligning consecutive data types.
		 */
		static inline size_t alignment(size_t dataSize, void *&m_currentPosition);

		static inline size_t calculatePadding (void *&position, DynamicFastBuffers::Typecode *tc);

	public:

		/*!
         * @brief This function generates a bytecode of function pointers depending on the flag specified by user whan calling the function.
		 * @param typecode A pointer to a Typecode object describing the data defined by user.
		 * @param flag An enumerator value that specifies if the bytecode thar must be generated is for data serialization or deserialization.
		 * @return The Bytecode object where all function pointers will be allocated.
		 * @exception WrongParamException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         */
		static Bytecode* generateBytecode(Typecode *typecode, flag flag);
	};
};

#endif _BYTECODE_API_
