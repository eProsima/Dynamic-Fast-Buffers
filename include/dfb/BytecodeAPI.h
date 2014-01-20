/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _BYTECODE_API_
#define _BYTECODE_API_

#include "dfb/DFB_dll.h"
#include "dfb/CommonData.h"
#include "dfb/SerializerAPI.h"
#include "dfb/exceptions/WrongParamException.h"

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
		 * @param bytecode A pointer to a Bytecode object where all function pointers for deserializing data will be allocated.
		 * @param typecode A pointer to a Typecode object which describes user data types.
		 * @param index A void pointer reference that will act as a memory address to calculate memory alignment of complex data types.
		 * @param initialPosition Void pointer to the initial memory position of the structure.
		 * @param added Boolean data parameter indicating whether any jump has been added before the one to be added.
		 */
		static void generateBytecodeSerialization(Bytecode *bytecode, Typecode *typecode, void*&index, void *&initialPosition, bool added);

		/*!
         * @brief This function generates a bytecode for data deserialization.
		 * @param bytecode A pointer to a Bytecode object where all function pointers for deserializing data will be allocated.
		 * @param typecode A pointer to a Typecode object which describes user data types.
		 * @param index A void pointer reference that will act as a memory address to calculate memory alignment of complex data types.
		 * @param initialPosition Void pointer to the initial memory position of the structure.
		 * @param added Boolean data parameter indicating whether any jump has been added before the one to be added.
		 */
		static void generateBytecodeDeserialization(Bytecode *bytecode, Typecode *typecode, void*&index, void *&initialPosition, bool added);

		/*!
         * @brief This function adds an integer representing a memory jump between data into the Bytecode list of memory jumps.
		 * @param typecode A pointer to a Typecode object which describes the kind of data in order to calculate its memory alignment.
		 * @param bytecode A pointer to a Bytecode object where the jump will be added.
		 * @param m_currentPosition Void pointer to the current memory position.
		 * @param initialPosition Void pointer to the initial memory position of the structure.
		 * @param added Boolean data parameter indicating whether any jump has been added before the one to be added.
		 */
		static void insertJumps(Typecode *typecode, Bytecode *bytecode, void *&m_currentPosition, void *&initialPosition,  bool added);

		/*!
         * @brief This function calculates the magnitude of the memory jump between structs depending of the actual position, the initial position and the size of the following member.
		 * @param position Void pointer to the initial memory position of the structure.
		 * @param initialPosition Void pointer to the current memory position.
		 * @param tc Typecode object representing the structure whose padding must be calculated.
		 * @return The number of padding Bytes inserted by the compiler whan aligning consecutive data types.
		 */
		static inline size_t calculatePadding (void *&position, void *initialPosition, DynamicFastBuffers::Typecode *tc, bool added);

		/*!
         * @brief This function calculates the magnitude of the memory jump between structs depending of the actual position, the initial position and the maximum data size of the members inside the structure.
		 * @param position Void pointer to the initial memory position of the structure.
		 * @param initialPosition Void pointer to the current memory position.
		 * @param tc Typecode object representing the structure whose padding must be calculated.
		 * @return The number of padding Bytes inserted by the compiler whan aligning consecutive data types.
		 */
		static inline size_t calculateStructPadding (void *&position, void *initialPosition, DynamicFastBuffers::Typecode *tc);

	public:

		/*!
         * @brief This function generates a bytecode of function pointers depending on the flag specified by user whan calling the function.
		 * @param typecode A pointer to a Typecode object describing the data defined by the user.
		 * @param flag An enumerator value that specifies if the bytecode thar must be generated is for data serialization or deserialization.
		 * @return The Bytecode object where all function pointers will be allocated.
		 * @exception WrongParamException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         */
		static Bytecode* generateBytecode(Typecode *typecode, flag flag);
	};
};

#endif _BYTECODE_API_
