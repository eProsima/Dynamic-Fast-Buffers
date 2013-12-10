/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TYPECODE_API_
#define _TYPECODE_API_

#include "dfb/DFB_dll.h"
#include <array>
#include "dfb/CommonData.h"
#include "dfb/exceptions/NotEnoughParamsException.h"
#include "dfb/exceptions/WrongTypeException.h"
#include "dfb/exceptions/WrongParamException.h"
#include <iostream>
#include <stdarg.h>
#include <string>

namespace DynamicFastBuffers
{

	/*!
     * @brief This static class offers an interface to create a typecode for describing native data types.
     * @ingroup TYPECODEAPIMODULE
     */
	class Dfb_DllAPI TypecodeAPI
	{
	private:
		
		/*!
        * @brief This function calculates the maximum of the sizes of the data allocated inside a structure.
		* @param tc A struct Typecode which size must be calculated.
		*/
		static size_t calculateStructSize(Typecode *tc)
		{
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getShortAlign();
			
			size_t size = tc->getMembers().size();
			if(size != 0){
				vector<Typecode> members = tc->getMembers();
				for(int i=0; i<size; ++i){ //foreach member in struct
					if(members[i].getKind() != TC_STRUCT){ //NO struct
						tc->setStructSize(members[i].getAlign());
					}else{ //struct
						tc->setStructSize(TypecodeAPI::calculateStructSize(&members[i]));
					}
				}
			}else{
				tc->setStructSize(0); //check this later
			}

			size_t stSize = tc->getSize();

			if (stSize == sizeof(char)){
				tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getCharStructAlign());
			} else if (stSize == sizeof(short)) {
				tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getShortStructAlign());
			} else if (stSize == sizeof(int32_t)) {
				tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getIntegerStructAlign());
			} else if (stSize >= sizeof(int64_t)) {
				tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getLongStructAlign());
			} 

			return tc->getSize();
		}

	public:

		/*!
         * @brief This function creates a Typecode which represents an integer data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createInteger()
		{
			Typecode* tc = new Typecode(TC_INTEGER);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getIntegerAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a short data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createShort()
		{
			Typecode* tc = new Typecode(TC_SHORT);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getShortAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a long data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createLong()
		{
			Typecode* tc = new Typecode(TC_LONG);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getLongAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a float data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createFloat()
		{
			Typecode* tc = new Typecode(TC_FLOAT);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getFloatAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a double precision number data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createDouble()
		{
			Typecode* tc = new Typecode(TC_DOUBLE);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getDoubleAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a string data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createString()
		{
			Typecode* tc = new Typecode(TC_STRING);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getStringAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a string data type.
		 * @param size_str The size in number of characters of the string object
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createString(int size_str)
		{
			Typecode *tc = new Typecode(TC_STRING);
			tc->setStrSize(size_str);
			size_t alignment = processor::AlignmentInfo::getAlignmentInfo().getStringAlign();
			//cout << "ALIGN: " << alignment << endl;
			tc->setAlign(alignment);
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a character data type.
		 * @return A pointer to the Typecode object created.
	     */
		static Typecode* createCharacter()
		{
			Typecode* tc = new Typecode(TC_CHARACTER);
			tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getCharAlign());
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a boolean data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createBoolean()
		{
			Typecode* tc = new Typecode(TC_BOOLEAN);
			tc->setAlign(processor::AlignmentInfo::getAlignmentInfo().getBooleanAlign());
			return tc;
		}

		/*!
         * @brief This function creates a Typecode which represents a struct data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param init A variable number of Typecode objects to be added as members of the structure. At least one has to be specified.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createStruct(Typecode *init, ...)
		{
			if(init == NULL){
				return new Typecode(TC_STRUCT);
			}
			Typecode *ret = new Typecode(TC_STRUCT);
			va_list vl;
			va_start(vl, init);
			ret->addMemberNoCheck(*init);
			Typecode *pTypecode = va_arg(vl, Typecode*);
			while(pTypecode != NULL){
				ret->addMemberNoCheck(*pTypecode);
				delete(pTypecode);
				pTypecode = (Typecode*) va_arg(vl, Typecode*);
			}
			va_end(vl);
			TypecodeAPI::calculateStructSize(ret);
			return ret;
		}

		/*!
         * @brief This function creates a Typecode which represents an array of any data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param type A Typecode object which specifies the kind of data that will be stored inside the array.
		 * @param nDims Number of dimensions of the array.
		 * @param dim1 Variable number of integers specifying the lenght of each array dimension.
		 * @return A pointer to the Typecode object created.
		 * @exception WrongParamException This exception is thrown when any of the numbers indicating a dimension length is not greater than zero.
		 * @exception NotEnoughParamsException This exception is thrown when nDims parameter is not greater than zero, or when user provides a number of dimensions 
		 * not equal to nDims parameter.
		 */
		static Typecode* createArray(Typecode *type, int nDims, int dim1, ...)
		{
			if(nDims < 1 ){
				throw NotEnoughParamsException("Number of dimensions must be a positive integer greater than zero.");
			}
			Typecode *ret = new Typecode(TC_ARRAY);
			ret->setType(type);
			ret->setAlign(type->getAlign());
			va_list vl;
			va_start(vl, dim1);
			vector<int> content;
			int count = 0, number = va_arg(vl, int);
			int totalSize = dim1;
			if(dim1 < 1){
				throw WrongParamException("Dimensions must be positive integers.");
			}else{
				++count;
				content.push_back(dim1);
			}
			while(number){
				if(number < 1 ){
					throw WrongParamException("Dimensions must be positive integers.");
				}
				++count;
				totalSize *= (int)number;
				content.push_back(number);
				number = (int) va_arg(vl, int);
			}
			ret->setArraySize(totalSize);
			if(count != nDims || dim1 == 0){
				delete(ret);
				throw NotEnoughParamsException("Number of dimensions is different than the real dimensions specified.");
			}
			ret->setContent(content);
			va_end(vl);
			return ret;
		}

		/*!
         * @brief This function creates a Typecode which represents a sequence of any data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param type A Typecode object which specifies the kind of data that will be stored inside the sequence.
		 * @param maxLength Maximun length of the sequence. This means the maximun number of objects that can be added.
		 * @return A pointer to the Typecode object created.
		 * @exception WrongParamException This exception is thrown when maximum length specified for creating the sequence is not greater than zero.
		 */
		static Typecode* createSequence(Typecode *type, int maxLength)
		{
			if(maxLength <= 0){
				throw WrongParamException("Maximum length specified for creating the sequence must be a positive integer greater than zero.");
			}
			Typecode *ret = new Typecode(TC_SEQUENCE);
			ret->setType(type);
			ret->setMaxLength(maxLength);
			ret->setAlign(processor::AlignmentInfo::getAlignmentInfo().getSequenceStructAlign());
			return ret;
		}

		/*!
         * @brief This function adds inner members to the Typecode object proportioned as parameter. If no members are specified, an exception will be thrown.
		 * @param dest A Typecode in which members will be added, and a variable number of Typecode objects to add.
		 * @exception WrongParamException This exception is thrown when destination Typecode is NULL.
		 * @exception NotEnoughParamsException This exception is thrown when no inner Typecode objects were specified.
		 * @exception WrongTypeException This exception is thrown when trying to add Typecode objects into a Typecode that is not a structure description.
		 */
		static void addMembers(Typecode *dest, ...)
		{
			if(dest == NULL){
				throw WrongParamException("Destination typecode cannot be null.");
			}
			va_list vl;
			va_start(vl, dest);
			Typecode *pTypecode;
			pTypecode = va_arg(vl, Typecode*);
			switch(dest->getKind())
			{
			case TC_STRUCT:
				if(pTypecode == NULL){
					throw NotEnoughParamsException("No members specified.");
				}
				while(pTypecode != NULL){
					dest->addMember(*pTypecode);
					pTypecode = va_arg(vl, Typecode*);
				}
				va_end(vl);
				break;
			default:
				string msg;
				if(pTypecode == NULL){
					msg = "No members specified.";
					throw NotEnoughParamsException(msg.c_str());
				}else{
					msg = "Only applicable for structures, members cannot be added to kind " + dest->getKindStr();
					delete(pTypecode);
					throw WrongTypeException(msg.c_str());
				}
			}
		}

		/*!
         * @brief This function deletes a Typecode object by calling its default destructor.
		 * @param tc A Typecode object to be deleted.
		 * @exception WrongParamException This exception is thrown when the given Typecode is NULL.
		 */
		static void deleteTypecode(Typecode *tc)
		{
			if(tc == NULL){
				throw WrongParamException("Destination typecode cannot be null.");
			}
			delete tc;
		}

		/*!
         * @brief This function calculates the space needed in the memory buffer for the data to be serialized.
		 * @param tc A Typecode which size must be calculated.
		 * @return The size needed in the buffer.
		 */
		static int checkSerializedDataSize(Typecode *tc)
		{
			switch(tc->getKind()){
			case TC_STRING:
				{
					int returnValue = 0;
					returnValue = sizeof(int32_t)+tc->getStrSize();
					if(returnValue == 4){
						returnValue += 256;
					}
					return returnValue;
					break;
				}
			case TC_STRUCT:
				{
					int returnValue = 0;
					vector<Typecode> tcs = tc->getMembers();
					for(int i=0; i < tcs.size(); ++i){
						returnValue += checkSerializedDataSize(&tcs[i]);
					}
					return returnValue;
					break;
				}
			case TC_ARRAY:
				{
					int returnValue = 0;
					int dims = tc->getArraySize();
					int typeSize = tc->getSize();
					returnValue = dims*typeSize;
					return returnValue;
					break;
				}
			case TC_SEQUENCE:
				{
					int returnValue = 0;
					int dims = tc->getMaxLenght();
					returnValue = dims*tc->getType()->getSize();
					return returnValue;
					break;
				}
			}
			return tc->getSize(); 
		}

	};
};

#endif _TYPECODE_API_
