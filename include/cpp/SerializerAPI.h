#ifndef _SERIALIZER_API_
#define _SERIALIZER_API_

#include "FastCdr.h"
#include "FastBuffer.h"
#include "CommonData.h"

namespace DynamicFastBuffers
{
	/*!
     * @brief This static class offers an interface to serialize/deserialize data types (described by a Typecode) using CDR protocol inside a eProsima::FastBuffer.
     * @ingroup SERIALIZERAPIMODULE
     */
	class eProsima_cpp_DllVariable SerializerAPI
	{

	friend class BytecodeAPI;

	private:
		//Primitive data types

		/*!
         * @brief This function serializes an integer type (int32_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
		 * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an integer type (int32_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a short type (int16_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a short type (int16_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a long type (int32_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a long type (int32_t).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a float type (float).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a float type (float).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a double type (double).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a double type (double).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a string type (std::string).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeString(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a string type (std::string).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeString(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a character type (char).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeCharacter(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a character type (char).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeCharacter(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a boolean type (bool).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeBoolean(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a boolean type (bool).
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeBoolean(eProsima::FastCdr *cdr, void *data, int &size);
		
		//Complex data types

		/*!
         * @brief This function serializes a struct type (struct). The program will go through the members of the structure serializing them.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeStruct(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a struct type (struct). The program will go through the members of the structure deserializing them.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. It will not be used in this function.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeStruct(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of integers. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of short data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of long data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of float data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of double data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type defined by user
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes an array of character data types. This function will use "serializeArray" function defined in FastCdr class.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the object defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeArrayCharacter(eProsima::FastCdr *cdr, void *data, int &size);
		
		/*!
         * @brief This function serializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of integer data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceInteger(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of short data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceShort(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of long data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceLong(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of float data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceFloat(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of double data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceDouble(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function serializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data vector defined by user from where data will be serialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void* serializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size);

		/*!
         * @brief This function deserializes a sequence of character data types. This function will use "serializeArray" function defined in FastCdr class. The sequence
		 *		represents a vector defined by user.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized.
		 * @param data A void pointer to the data vector defined by user where data will be deserialized.
		 * @param size An integer containing array size. This parameter will be proportioned to "serializeArray" function representing the size of the array.
         * @return A void pointer to the next memory position right after the data.
         * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void* deserializeSequenceCharacter(eProsima::FastCdr *cdr, void *data, int &size);
	public:

		/*!
         * @brief This function serializes any data defined by user, using the rest of the functions implemented within this API class. User does not have
		 *	to worry about the data type, because it is the bytecode that defines the kind of data the user wants to serialize.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer where data will be serialized
		 * @param data A void pointer to the data type by user from where data will be serialized.
		 * @exception NotEnoughMemoryException This exception is thrown when trying to serialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
         */
		static void serialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr);

		/*!
         * @brief This function deserializes any data defined by user into the buffer inside FastCdr object, using the rest of the functions implemented within this API class. 
		 * User does not have to worry about the data type, because it is the bytecode that defines the kind of data the user wants to serialize.
		 * @param cdr A pointer to a FastCdr object containing a FastBuffer from where data will be deserialized
		 * @param data A void pointer to the data type by user where data will be deserialized.
		 * @exception NotEnoughMemoryException This exception is thrown when trying to deserialize in a position that exceed the internal memory size.
         * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
         */
		static void deserialize(void *data, Bytecode* bytecode, eProsima::FastCdr *cdr);
	};
};

#endif _SERIALIZER_API_