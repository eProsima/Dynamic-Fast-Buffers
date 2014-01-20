/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _COMMON_DATA_
#define _COMMON_DATA_

#include "dfb/DFB_dll.h"
#include <stdint.h>
#include <vector>
#include <array>

#include "fastcdr/FastCdr.h"

using namespace std;

namespace DynamicFastBuffers
{

	/*! 
	 * @enum tc_kind
	 * @brief This enumeration represents the different data types that can be described.
	 * @ingroup COMMONDATAMODULE
	 */
	enum tc_kind 
	{
		//! @brief Type not specified
		TC_NOTYPE = 0, 
		//! @brief Integer data type
		TC_INTEGER,
		//! @brief Short data type
		TC_SHORT,
		//! @brief Long data type
		TC_LONG,
		//! @brief Float data type
		TC_FLOAT,
		//! @brief Double data type
		TC_DOUBLE,
		//! @brief String data type
		TC_STRING,
		//! @brief Character data type
		TC_CHARACTER,
		//! @brief Boolean data type
		TC_BOOLEAN,
		//! @brief Structures
		TC_STRUCT,
		//! @brief Unions (not supported by now)
		TC_UNION,
		//! @brief Arrays
		TC_ARRAY,
		//! @brief Sequences
		TC_SEQUENCE,
		//! @brief Enumerations (not supported by now)
		TC_ENUM
	};

	/*! 
	 * @enum flag
	 * @brief This enumeration is used to specify if the user wants to create a Bytecode for serialization or deserialization.
	 * @ingroup COMMONDATAMODULE
	 */
	enum flag
	{
		//! @brief Indicates thet the Bytecode object is for deserializing native data types.
		DESERIALIZE = 0,
		//! @brief Indicates that the Bytecode object is for serializing native data types.
		SERIALIZE
	};

	/*! 
	* @typedef Function CALLBACK.
	* @brief This CALLBACK type represents pointer to a function defined in SerializerAPI.h.
	* @ingroup COMMONDATAMODULE
	*/
	typedef void* (*CALLBACK) (eprosima::FastCdr* serializer, void* data, int &size);

	/*!
     * @brief This static class stores all the relevant information about a Typecode.
     * @ingroup COMMONDATAMODULE
     */
	class Dfb_DllAPI Typecode
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

		//! @brief Integer holding a value that specifies the maximum size of the data inside it (in case this Typecode is a TC_STRUCT).
		int structSize_;

		//! @brief The size of the string object represented by this Typecode.
		int size_str_;
		
		//! @brief The alignment calculated for a concrete data type.
		size_t align_;
		
		/*!
        * @brief Checks if a Typecode object with his attribute kind_ set to the specified value provided as parameter can be added to this Typecode.
		* @return An integer code that represents if a Typecode objetc can or cannot be added to current one.
        */
		int checkType(tc_kind kind);
	
	public:

		/*!
        * @brief Default constructor.
        */
		Typecode() : kind_(TC_NOTYPE), members_(0), counter_(0), type_(0), dimensions_(1), structSize_(0), size_str_(0), align_(0){};

		/*!
        * @brief Overwritten constructor in which the kind of the data type is specified as parameter.
		* @param kind Enumerator describing the Typecode data type.
        */
		Typecode(tc_kind kind) : kind_(kind), members_(0), counter_(0), type_(0), dimensions_(1), structSize_(0), size_str_(0), align_(0){};

		/*!
        * @brief Copy constructor.
		* @param other A Typecode object from which all data is copied.
        */
		Typecode(const Typecode& other) : kind_(other.kind_), counter_(other.counter_), members_(other.members_),
			content_(other.content_), type_(other.type_), maxLength_(other.maxLength_), dimensions_(other.dimensions_), structSize_(other.structSize_), size_str_(other.size_str_), align_(other.align_)
		{
			if(other.type_ != NULL)
			{
				type_ = new Typecode(*other.type_);
			}
		}

		/*!
        * @brief Default constructor. Frees all memory reserved for being used by its internal data structures.
		*/
		virtual ~Typecode();

		/*!
        * @brief Getter for attribute kind_.
		* @return The enum object used for describing the kind of the data type represented by the Tpecode.
        */
		tc_kind getKind();

		/*!
        * @brief Getter for the data type formatted to an instance of std::string.
		* @return A std::string containing the written description of the attribute kind.
        */
		string getKindStr();

		/*!
        * @brief Getter to obtain the length of the vector named content_.
		* @return The size of the vector content_.
        */
		int getConstentSize();

		/*!
        * @brief Getter to obtain the total size in Bytes, depending on the data type described by the Typecode object.
		* @return The size in Bytes of the represented data type.
        */
		int getSize();

		/*!
        * @brief Getter to obtain the size in positions of a sequence Typecode.
		* @return The size in Bytes of the represented data type.
        */
		int getMaxLenght();

		/*!
        * @brief Returns the total number of slots of the array (in case this Typecode represents such data type).
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
        * @brief Getter to obtain a Typecode object representing the data type inside an array or sequence (in case this Typecode represents one of those two data types).
		* @return Pointer to a Typecode object representing the data kind.
        */
		Typecode* getType();

		/*!
        * @brief Function to set attribute named dimentions_ (or counter_ in case the Typecode object has a type_ attribute set to TC_STRUCT).
		* @param size The size which value has to be copied into one of the two attributes.
		*/
		void setArraySize(int size);

		/*!
        * @brief Sets the content vector.
		* @param content A vector containing the inner Typecode objects.
        */
		void setContent(vector<int> &content);

		/*!
        * @brief Sets the type_ attribute.
		* @param type A Typecode object to be set on type_ attribute.
        */
		void setType(Typecode *type);

		/*!
        * @brief Sets the maximum length of a sequence Typecode.
		* @param maxLength The maximum length represented as an integer.
        */
		void setMaxLength(int maxLength);

		/*!
        * @brief Adds a Typecode in the content_ vector, checking first if it can be added depending on the attribute kind_.
		* @param member The Typecode object to be added.
        */
		int addMember(Typecode &member);

		/*!
        * @brief Adds a Typecode in the content_ vector, without checking first if it can be added.
		* @param member The Typecode object to be added.
        */
		int addMemberNoCheck(Typecode &member);

		/*!
        * @brief In case of a string typecode, sets the length of the string.
		* @param size_str The size to be set.
        */
		void setStrSize(int size_str);

		/*!
        * @brief In case of a string typecode, returns the length of the string.
		* @return The size the string.
        */
		int getStrSize();

		/*!
        * @brief Sets the size of a structure.
		* @param structSize The size of the struct to be set.
		* @return The size the string.
        */
		void setStructSize(int structSize);

		/*!
		* @brief Sets the boundary for a concrete object.
		* @param align The number of bytes representing the boundary.
		*/
		void setAlign(size_t align)
		{
			align_ = align;
		}

		/*!
		* @brief Returns the alignment of the concrete object.
		* @return The number of bytes representing the boundary.
		*/
		size_t getAlign()
		{
			return align_;
		}
	};

	/*!
     * @brief This static class represents the operations that odd to be done to serialize a determined data type.
     * @ingroup COMMONDATAMODULE
     */
	class Dfb_DllAPI Bytecode
	{
	private:

		//! @brief This attribute stores references to the functions that must be executed to serialize or deserialize some data type defined by the user.
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
        * @brief Getter for the integer which represents the array's slots.
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
		* @param value The padding (in Bytes) to be added.
        */
		void addAlignment(size_t value);

	};

	namespace processor
	{
		/*!
		 * @brief This static class stores all the relevant information about the alignment.
		 * @ingroup COMMONDATAMODULE
		 */
		class AlignmentInfo
		{

		private:

			//! @brief Atribute used to fulfill Singleton design pattern.
			static AlignmentInfo *alignmentInfo_;
		
			//! @brief Attribute used to store a char boundary.
			struct charAlignment_st
			{
				char att1;
				char att2;
			};
			//! @brief Attribute used to store a char boundary.
			ptrdiff_t charAlign;

			//! @brief Structure used to know a short boundary.
			struct shortAlignment_st
			{
				char att1;
				short att2;
			};
			//! @brief Attribute used to store a short boundary.
			ptrdiff_t shortAlign;

			//! @brief Structure used to know an int32_t boundary.
			struct intAlignment_st
			{
				char att1;
				int32_t att2;
			};
			//! @brief Attribute used to store an int32_t boundary.
			ptrdiff_t intAlign;

			//! @brief Structure used to know an int64_t boundary.
			struct longAlignment_st
			{
				char att1;
				int64_t att2;
			};
			//! @brief Attribute used to store an int64_t boundary.
			ptrdiff_t longAlign;

			//! @brief Structure used to know a float boundary.
			struct floatAlignment_st
			{
				char att1;
				float att2;
			};
			//! @brief Attribute used to store a float boundary.
			ptrdiff_t floatAlign;

			//! @brief Structure used to know a double boundary.
			struct doubleAlignment_st
			{
				char att1;
				double att2;
			};
			//! @brief Attribute used to store a double boundary.
			ptrdiff_t doubleAlign;

			//! @brief Structure used to know a string boundary.
			struct stringAlignment_st
			{
				char att1;
				std::string att2;
			};
			//! @brief Attribute used to store a string boundary.
			ptrdiff_t stringAlign;

			//! @brief Structure used to know a bool boundary.
			struct booleanAlignment_st
			{
				char att1;
				bool att2;
			};
			//! @brief Attribute used to store a bool boundary.
			ptrdiff_t booleanAlign;

			//! @brief Structure used to know a vector boundary.
			struct sequenceAlignment_st
			{
				char att1;
				vector<void*> att2;
			};
			//! @brief Attribute used to store a vector boundary.
			ptrdiff_t sequenceAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a char data type.
			struct charStructAlignment_st
			{
				char att1;
				struct st{
					char att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a char data type.
			ptrdiff_t charStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a short data type.
			struct shortStructAlignment_st
			{
				char att1;
				struct st{
					short att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a short data type.
			ptrdiff_t shortStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of an int32_t data type.
			struct intStructAlignment_st
			{
				char att1;
				struct st{
					int32_t att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of an int32_t data type.
			ptrdiff_t intStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of an int64_t data type.
			struct longStructAlignment_st
			{
				char att1;
				struct st{
					int64_t att1;
				} att2;
			};
			//! @brief Attribute used to store the the boundary of a structure when its maximum size is the one of an int64_t data type.
			ptrdiff_t longStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a float data type.
			struct floatStructAlignment_st
			{
				char att1;
				struct st{
					float att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a float data type.
			ptrdiff_t floatStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a double data type.
			struct doubleStructAlignment_st
			{
				char att1;
				struct st{
					double att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a double data type.
			ptrdiff_t doubleStructAlign;
			
			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a string data type.
			struct stringStructAlignment_st
			{
				char att1;
				struct st{
					std::string att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a string data type.
			ptrdiff_t stringStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a boolean data type.
			struct booleanStructAlignment_st
			{
				char att1;
				struct st{
					bool att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a boolean data type.
			ptrdiff_t booleanStructAlign;

			//! @brief Structure used to know the boundary of a structure when its maximum size is the one of a vector data type.
			struct sequenceStructAlignment_st
			{
				char att1;
				struct st{
					vector<void*> att1;
				} att2;
			};
			//! @brief Attribute used to store the boundary of a structure when its maximum size is the one of a vector data type.
			ptrdiff_t sequenceStructAlign;

			//! @brief Structure used to know the padding inserted behind a structure.
			struct paddingBehindStructure1
			{
				char att1;
				struct innerSt{
					short att1;
					char att2;
				} att2;
				char att3;
			};
			//! @brief Attribute used to store the padding inserted behind a structure.
			ptrdiff_t paddingBehindStructure1Align;

			//! @brief Attribute that holds a value indicating if padding is inserted behind a structure.
			bool paddingBehindStructures;

			/*!
			* @brief This function calculates the alignment of all the different data types that could be allocated inside a structure.
			*/
			inline void initialize()
			{
				charAlignment_st charst;
				charAlign = (char*) &charst.att2 - (char*) &charst.att1;

				shortAlignment_st shortst;
				shortAlign = (char*) &shortst.att2 - (char*) &shortst.att1;

				intAlignment_st intst;
				intAlign = (char*) &intst.att2 - (char*) &intst.att1;

				longAlignment_st longst;
				longAlign = (char*) &longst.att2 - (char*) &longst.att1;

				floatAlignment_st floatst;
				floatAlign = (char*) &floatst.att2 - (char*) &floatst.att1;

				doubleAlignment_st doublest;
				doubleAlign = (char*) &doublest.att2 - (char*) &doublest.att1;

				stringAlignment_st stringst;
				stringAlign = (char*) &stringst.att2 - (char*) &stringst.att1;

				booleanAlignment_st booleanst;
				booleanAlign = (char*) &booleanst.att2 - (char*) &booleanst.att1;

				sequenceAlignment_st sequencest;
				sequenceAlign = (char*) &sequencest.att2 - (char*) &sequencest.att1;

				charStructAlignment_st charstructst;
				charStructAlign = (char*) &charstructst.att2.att1 - (char*) &charstructst.att1;

				shortStructAlignment_st shortstructst;
				shortStructAlign = (char*) &shortstructst.att2.att1 - (char*) &shortstructst.att1;

				intStructAlignment_st intstructst;
				intStructAlign = (char*) &intstructst.att2.att1 - (char*) &intstructst.att1;

				longStructAlignment_st longstructst;
				longStructAlign = (char*) &longstructst.att2.att1 - (char*) &longstructst.att1;

				floatStructAlignment_st floatstructst;
				floatStructAlign = (char*) &floatstructst.att2.att1 - (char*) &floatstructst.att1;

				doubleStructAlignment_st doublestructst;
				doubleStructAlign = (char*) &doublestructst.att2.att1 - (char*) &doublestructst.att1;

				stringStructAlignment_st stringstructst;
				stringStructAlign = (char*) &stringstructst.att2.att1 - (char*) &stringstructst.att1;

				booleanStructAlignment_st booleanstructst;
				booleanStructAlign = (char*) &booleanstructst.att2.att1 - (char*) &booleanstructst.att1;

				sequenceStructAlignment_st sequencestructst;
				sequenceStructAlign = (char*) &sequencestructst.att2.att1 - (char*) &sequencestructst.att1;

				paddingBehindStructure1 pbs1;
				paddingBehindStructure1Align = (char*) &pbs1.att3 - (char*) &pbs1.att2.att2;
				if (paddingBehindStructure1Align > charAlign) {
					paddingBehindStructures = true;
				} else {
					paddingBehindStructures = false;
				}

			}

			/*!
			* @brief Private constructor used for the Singletodn design pattern.
			*/
			AlignmentInfo()
			{
				initialize();
			}

			/*!
			* @brief Copy constructor.
			* @param A reference to an AlignmentInfo object.
			*/
			AlignmentInfo(AlignmentInfo const&); 
				

		public:

			/*!
			* @brief Function used to allow a unique entry point to this class.
			* @return A reference to an AlignmentInfo unique instantiation.
			*/
			static AlignmentInfo& getAlignmentInfo()
			{
				if(alignmentInfo_ == NULL){
					alignmentInfo_ = new AlignmentInfo(); // Guaranteed to be destroyed. Instantiated on first use.
				}
				return *alignmentInfo_;
			}

			/*!
			* @brief Getter for charAlign
			* @return size_t The charAlign attribute
			*/
			size_t getCharAlign()
			{
				return charAlign;
			}
			
			/*!
			* @brief Getter for intAlign
			* @return size_t The intAlign attribute
			*/
			size_t getIntegerAlign()
			{
				return intAlign;
			}

			/*!
			* @brief Getter for shortAlign
			* @return size_t The shortAlign attribute
			*/
			size_t getShortAlign()
			{
				return shortAlign;
			}

			/*!
			* @brief Getter for longAlign
			* @return size_t The longAlign attribute
			*/
			size_t getLongAlign()
			{
				return longAlign;
			}

			/*!
			* @brief Getter for floatAlign
			* @return size_t The floatAlign attribute
			*/
			size_t getFloatAlign()
			{
				return floatAlign;
			}

			/*!
			* @brief Getter for doubleAlign
			* @return size_t The doubleAlign attribute
			*/
			size_t getDoubleAlign()
			{
				return doubleAlign;
			}

			/*!
			* @brief Getter for stringAlign
			* @return size_t The stringAlign attribute
			*/
			size_t getStringAlign()
			{
				return stringAlign;
			}

			/*!
			* @brief Getter for booleanAlign
			* @return size_t The booleanAlign attribute
			*/
			size_t getBooleanAlign()
			{
				return booleanAlign;
			}

			/*!
			* @brief Getter for charStructAlign
			* @return size_t The charStructAlign attribute
			*/
			size_t getCharStructAlign()
			{
				return charStructAlign;
			}

			/*!
			* @brief Getter for shortStructAlign
			* @return size_t The shortStructAlign attribute
			*/
			size_t getShortStructAlign()
			{
				return shortStructAlign;
			}

			/*!
			* @brief Getter for intStructAlign
			* @return size_t The intStructAlign attribute
			*/
			size_t getIntegerStructAlign()
			{
				return intStructAlign;
			}

			/*!
			* @brief Getter for longStructAlign
			* @return size_t The longStructAlign attribute
			*/
			size_t getLongStructAlign()
			{
				return longStructAlign;
			}

			/*!
			* @brief Getter for floatStructAlign
			* @return size_t The floatStructAlign attribute
			*/
			size_t getFloatStructAlign()
			{
				return floatStructAlign;
			}

			/*!
			* @brief Getter for doubleStructAlign
			* @return size_t The doubleStructAlign attribute
			*/
			size_t getDoubleStructAlign()
			{
				return doubleStructAlign;
			}
			
			/*!
			* @brief Getter for booleanStructAlign
			* @return size_t The booleanStructAlign attribute
			*/
			size_t getBooleanStructAlign()
			{
				return booleanStructAlign;
			}

			/*!
			* @brief Getter for sequenceStructAlign
			* @return size_t The sequenceStructAlign attribute
			*/
			size_t getSequenceStructAlign()
			{
				return sequenceStructAlign;
			}
	
			/*!
			* @brief Getter for stringStructAlign
			* @return size_t The stringStructAlign attribute
			*/
			size_t getStringStructAlign()
			{
				return stringStructAlign;
			}

			/*!
			* @brief Getter for paddingBehindStructures
			* @return size_t The paddingBehindStructures attribute
			*/
			bool getPaddingBehindStructures()
			{
				return paddingBehindStructures;
			}
			
		};
	};
	
};

#endif 
