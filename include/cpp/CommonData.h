#ifndef _COMMON_DATA_
#define _COMMON_DATA_

#include "eProsima_cpp/eProsima_cpp_dll.h"
#include <stdint.h>
#include <vector>
#include <array>

#include "FastCdr.h"
#include "FastBuffer.h"

using namespace std;

namespace DynamicFastBuffers
{

	//! @brief This enumeration represents the different data types that can be described.
	enum tc_kind 
	{
		TC_NOTYPE = 0,
		TC_INTEGER,
		TC_SHORT,
		TC_LONG,
		TC_FLOAT,
		TC_DOUBLE,
		TC_STRING,
		TC_CHARACTER,
		TC_BOOLEAN,
		TC_STRUCT,
		TC_UNION,
		TC_ARRAY,
		TC_SEQUENCE,
		TC_ENUM
	};

	//! @brief This enumeration is used to specify if user wants to create a Bytecode for serialization or deserialization.
	enum flag
	{
		FLAG_FALSE = 0,
		FLAG_TRUE
	};

	/*! 
	* @typedef Function pointer.
	* @brief This CALLBACK type represents pointer to a function defined in SerializerAPI.h.
	*/
	typedef void* (*CALLBACK) (eProsima::FastCdr* cdr, void* data, int &size);

	/*!
     * @brief This static class stores all the relevant information about a Typecode.
     * @ingroup COMMONDATAMODULE
     */
	class eProsima_cpp_DllVariable Typecode
	{
	private:

		//! @brief Enum object which indicated the data type representes by the Typecode.
		tc_kind kind_;

		//! @brief Number of elements of the attribute content_ (in case this Typecode is a TC_STRUCT).
		int counter_;

		//! @brief Vector containing the Typecode object conforming the structure represended (in case this Typecode is a TC_STRUCT).
		vector<Typecode> members_;

		//! @brief Vector containing the dimensions of the array represented (in case this Typecode is a TC_ARRAY).
		vector<int> content_;

		//! @brief Typecode object used to represent which kind of data types are inside the array or sequence (in case this Typecode is a TC_ARRAY or a TC_SEQUENCE).
		Typecode *type_;

		//! @brief Integer representing the maximum length of the sequence (in case this Typecode is a TC_SEQUENCE)
		int maxLength_;

		//! @brief Integer holding a value that specifies the total slots of the array (in case this Typecode es a TC_ARRAY).
		int dimensions_;
		
		/*!
        * @brief Checks if a Typecode object with his attribute kind_ set to the specified value provided as parameter can be added to this Typecode.
		* @return An integer code that represents if a Typecode objetc can or cannot be added to current one.
        */
		int checkType(tc_kind kind);
	
	public:

		/*!
        * @brief Default constructor.
        */
		Typecode();

		/*!
        * @brief Overwritten constructor in which the kind of the data type is specified as parameter.
		* @param kind Enumerator describing the Typecode data type.
        */
		Typecode(tc_kind kind);

		/*!
        * @brief Copy constructor.
		* @param other A Typecode object from which all data is copied.
        */
		Typecode(const Typecode& other);

		/*!
        * @brief Default constructor. Frees all memory reserved for being used by its internal data structures.
		*/
		virtual ~Typecode();

		/*!
        * @brief Getter for attribute kind_.
		* @return The enum onbject used for describing the kind of the data type represented by the Tpecode.
        */
		tc_kind getKind();

		/*!
        * @brief Getter for the data kind formatted to an instance of std::string.
		* @return A std::string containing the written description of the attribute kind.
        */
		string getKindStr();

		/*!
        * @brief Getter to obtain the length of the vector named content_.
		* @return The size of the vector content_.
        */
		int getConstentSize();

		/*!
        * @brief Getter to obtain the size in Bytes depending on the data type described by Typecode object.
		* @return The size in Bytes of the represented data type.
        */
		int getSize();

		/*!
        * @brief Return the number of slots of the array (in case this Typecode represents such data type).
		* @return The number of slots of the array.
        */
		int getArraySize();

		/*!
        * @brief Getter to obtain vector of Typecode objects inside a struct Typecode (in case this Typecode represents such data type).
		* @return The vector containing the Typecode objects.
        */
		vector<Typecode> getMembers();

		/*!
        * @brief Getter to obtain the vector in which the array dimensions are stored (in case this Typecode represents such data type).
		* @return vector containing the dimensions of the array.
        */
		vector<int> getDimensions();

		/*!
        * @brief Getter to obtain Typecode representing the data type inside an array or sequence (in case this Typecode represents one of those two data types).
		* @return Pointer to a Typecode object representing the data kind.
        */
		Typecode* getType();

		/*!
        * @brief Functon to set attribute named dimentions_ (or counter_ in case the Typecode object has a type_ attribute set to TC_STRUCT).
		* @param size The size which value has to be copied into one of the two attributes.
		*/
		void setArraySize(int size);

		/*!
        * @brief Sets the content vector.
		* @param A vector containing the inner Typecode objects.
        */
		void setContent(vector<int> &content);

		/*!
        * @brief Sets the type_ attribute.
		* @param A Typecode object to be set on type_ attribute.
        */
		void setType(Typecode *type);

		/*!
        * @brief Sets the maximum length of a sequence Typecode.
		* @param The maximum length represented an an integer.
        */
		void setMaxLength(int maxLength);

		/*!
        * @brief Adds a Typecode in the content_ vector, checking first if it can be added depending on the attribute kind_.
		* @param The Typecode object to be added.
        */
		int addMember(Typecode &member);

		/*!
        * @brief Adds a Typecode in the content_ vector, without checking first if it can be added.
		* @param The Typecode object to be added.
        */
		int addMemberNoCheck(Typecode &member);
		
	};

	/*!
     * @brief This static class represents the operations that odd to be done to serialize a determined data type.
     * @ingroup COMMONDATAMODULE
     */
	class eProsima_cpp_DllVariable Bytecode
	{
	private:

		//! @brief This attribute stores references to the functions that must be executed to serialize or deserialize some data type defined by user.
		vector<CALLBACK>* bytecode_;

		//! @brief This attribute holds the memory padding added between data in a complex data type allocation.
		vector<int> *pAlignment_;

		//! @brief This attribute represents the number of slots of the array (in case this Bytecode is for serializing an array).
		int* size_;
	
	public:

		/*!
        * @brief Default constructor.
        */
		Bytecode();

		/*!
        * @brief Default constructor.
        */
		~Bytecode();

		/*!
        * @brief Getter for the integer representing the array number of slots.
		* @return The number of slots of the array.
        */
		inline int* getSize()
		{
			return size_;
		}

		/*!
        * @brief Getter for returning the vector holding the memory jumps measured in Bytes (padding) for a complex data type representation.
		* @return Vetcor containing the padding in bytes inserted for each data type.
        */
		vector<int>* getAlignment();

		/*!
        * @brief Getter for the vector containing the pointer to the functions that must be executed to serialize o deserialize some data type.
		* @return A vector composed by function pointers (attribute bytecode_).
        */
		vector<CALLBACK>* getBytecode();
		
		/*!
        * @brief Function used to set the attribute size_ to the specified value given as parameter.
		* @param size The size to set.
        */
		void setSize(int &size);

		/*!
        * @brief Function used to add a function pointer to the bytecode_vector.
		* @param function The function pointer to be added.
        */
		void addFunction(CALLBACK function);

		/*!
        * @brief Function used to add a padding (measured in Bytes) to the pAlignment_ vector.
		* @param The padding (in Bytes) to be added.
        */
		void addAlignment(int value);
		
		
	};
};

#endif //_COMMON_DATA_