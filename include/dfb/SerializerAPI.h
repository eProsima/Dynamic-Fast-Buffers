/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERIALIZER_API_
#define _SERIALIZER_API_

#include "dfb/DFB_dll.h"
#include "fastcdr/FastCdr.h"
#include "dfb/CommonData.h"

namespace DynamicFastBuffers
{
	/*!
     * @brief This static class offers an interface to serialize/deserialize data types (described by a Typecode) using CDR protocol inside an eProsima::FastBuffer.
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
		 * @param data A void pointer to the data type defined by the user.
		 * @param size An integer containing an array size. It will not be used in this function.
		 * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an integer type (int32_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a short type (int16_t).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a short type (int16_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a long type (int32_t).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a long type (int32_t).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a float type (float).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a float type (float).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a double type (double).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a double type (double).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a string type (std::string).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeString(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a string type (std::string).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeString(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a character type (char).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeCharacter(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a character type (char).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeCharacter(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a boolean type (bool).
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeBoolean(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a boolean type (bool).
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeBoolean(eprosima::FastCdr *serializer, void *data, int &size);
		
		//Complex data types

		/*!
         * @brief This function serializes a struct type (struct). The program will go through the members of the structure serializing them.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeStruct(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a struct type (struct). The program will go through the members of the structure deserializing them.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing an array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeStruct(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data type defined by the user
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayCharacter(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the array. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayCharacter(eprosima::FastCdr *serializer, void *data, int &size);
		
		/*!
         * @brief This function serializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceInteger(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceShort(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceLong(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceFloat(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceDouble(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @param data A void pointer to the data vector defined by the user from where data will be serialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceCharacter(eprosima::FastCdr *serializer, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by the user.
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by the user where data will be deserialized.
		 * @param size An integer containing the size of the sequence. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceCharacter(eprosima::FastCdr *serializer, void *data, int &size);
	public:

		/*!
         * This function serializes any data defined by the user, using the rest of the functions implemented within this API class. The user does not have
		 * to worry about the data type, because it is the bytecode the one that defines the kind of data the user wants to serialize.
		 * @param data A void pointer to the data type by user from where data will be serialized.
		 * @param bytecode A Bytecode object defining the serialization functions that must be called
		 * @param serializer A pointer to a Marshalling object containing a Buffer where data will be serialized
		 * @exception NotEnoughMemoryException This exception is thrown when trying to serialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown when trying to serialize in an invalid value.
         */
		static void serialize(void *data, Bytecode* bytecode, eprosima::FastCdr *serializer);

		/*!
         * This function deserializes any data defined by the user into the buffer inside FastCdr object, using the rest of the functions implemented within this API class.
		 * The user does not have to worry about the data type, because it is the bytecode the one that defines the kind of data the user wants to serialize.
		 * @param data A void pointer to the data type by user where data will be deserialized.
		 * @param bytecode A Bytecode object defining the deserialization functions that must be called
		 * @param serializer A pointer to a Marchalling object containing a Buffer from where data will be deserialized.
		 * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown when trying to deserialize in an invalid value.
         */
		static void deserialize(void *data, Bytecode* bytecode, eprosima::FastCdr *serializer);
	};
};

#endif _SERIALIZER_API_
