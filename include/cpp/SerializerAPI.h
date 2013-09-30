/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERIALIZER_API_
#define _SERIALIZER_API_

#include "cpp/DFB_dll.h"
#include "cpp/FastCdr.h"
#include "CommonData.h"

namespace DynamicFastBuffers
{
	/*!
     * @brief This static class offers an interface to serialize/deserialize data types (described by a Typecode) using CDR protocol inside a eProsima::FastBuffer.
     * @ingroup SERIALIZERAPIMODULE
     */
	class Dfb_DllAPI SerializerAPI
	{

	friend class BytecodeAPI;

	private:
		//Primitive data types

		/*!
         * @brief This function serializes an integer type (int32_t).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
		 * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an integer type (int32_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a short type (int16_t).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a short type (int16_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a long type (int32_t).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a long type (int32_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a float type (float).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a float type (float).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a double type (double).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a double type (double).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a string type (std::string).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeString(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a string type (std::string).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeString(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a character type (char).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeCharacter(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a character type (char).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeCharacter(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a boolean type (bool).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeBoolean(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a boolean type (bool).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeBoolean(eProsima::FastCdr *serializer, void *data, int &size);
		
		//Complex data types

		/*!
         * @brief This function serializes a struct type (struct). The program will go through the members of the structure serializing them.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeStruct(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a struct type (struct). The program will go through the members of the structure deserializing them.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeStruct(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayCharacter(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayCharacter(eProsima::FastCdr *serializer, void *data, int &size);
		
		/*!
         * @brief This function serializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceInteger(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceShort(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceLong(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceFloat(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceDouble(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceCharacter(eProsima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceCharacter(eProsima::FastCdr *serializer, void *data, int &size);
	public:

		/*!
         * @brief This function serializes any data defined by user, using the rest of the functions implemented within this API class. User does not have
		 *	to worry about the data type, because it is the bytecode that defines the kind of data the user wants to serialize.
		 * @param data A void pointer to the data type by user from where data will be serialized.
		 * @param bytecode A Bytecode object defining the serialization functions that must be called
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @exception NotEnoughMemoryException This exception is thrown when trying to serialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void serialize(void *data, Bytecode* bytecode, eProsima::FastCdr *serializer);

		/*!
         * @brief This function deserializes any data defined by user into the buffer inside FastCdr object, using the rest of the functions implemented within this API class. 
		 * User does not have to worry about the data type, because it is the bytecode that defines the kind of data the user wants to serialize.
		 * @param data A void pointer to the data type by user where data will be deserialized.
		 * @param bytecode A Bytecode object defining the deserialization functions that must be called
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void deserialize(void *data, Bytecode* bytecode, eProsima::FastCdr *serializer);
	};
};

#endif _SERIALIZER_API_
