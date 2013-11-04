#include <iostream>
#include <stdarg.h>
#include "cpp/CommonData.h"
#include "cpp/TypecodeAPI.h"
#include <string>

using namespace std;

namespace DynamicFastBuffers
{
	/*Typecode* TypecodeAPI::createInteger()
	{
		return new Typecode(TC_INTEGER);
	}

	Typecode* TypecodeAPI::createShort()
	{
		return new Typecode(TC_SHORT);
	}

	Typecode* TypecodeAPI::createLong()
	{
		return new Typecode(TC_LONG);
	}

	Typecode* TypecodeAPI::createFloat()
	{
		return new Typecode(TC_FLOAT);
	}

	Typecode* TypecodeAPI::createDouble()
	{
		return new Typecode(TC_DOUBLE);
	}

	Typecode* TypecodeAPI::createString()
	{
		return new Typecode(TC_STRING);
	}

	Typecode* TypecodeAPI::createString(int size_str)
	{
		Typecode *tc = new Typecode(TC_STRING);
		tc->setStrSize(size_str);
		return tc;
	}

	Typecode* TypecodeAPI::createCharacter()
	{
		return new Typecode(TC_CHARACTER);
	}

	Typecode* TypecodeAPI::createBoolean()
	{
		return new Typecode(TC_BOOLEAN);
	}

	Typecode* TypecodeAPI::createStruct(Typecode *init, ...)
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

	Typecode* TypecodeAPI::createArray(Typecode *type, int nDims, int dim1, ...)
	{
		if(nDims < 1 ){
			throw NotEnoughParamsException("Number of dimensions must be a positive integer greater than zero.");
		}
		Typecode *ret = new Typecode(TC_ARRAY);
		ret->setType(type);
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

	Typecode* TypecodeAPI::createSequence(Typecode *type, int maxLength)
	{
		if(maxLength <= 0){
			throw WrongParamException("Maximum length specified for creating the sequence must be a positive integer greater than zero.");
		}
		Typecode *ret = new Typecode(TC_SEQUENCE);
		ret->setType(type);
		ret->setMaxLength(maxLength);
		return ret;
	}

	void TypecodeAPI::addMembers(Typecode *dest, ...)
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

	void TypecodeAPI::deleteTypecode(Typecode *tc)
	{
		if(tc == NULL){
			throw WrongParamException("Destination typecode cannot be null.");
		}
		delete tc;
	}

	int TypecodeAPI::checkSerializedDataSize(Typecode *tc)
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

	size_t TypecodeAPI::calculateStructSize(Typecode *tc)
	{
		size_t size = tc->getMembers().size();
		if(size != 0){
			vector<Typecode> members = tc->getMembers();
			for(int i=0; i<size; ++i){ //foreach member in struct
				if(members[i].getKind() != TC_STRUCT){ //NO struct
					tc->setStructSize(members[i].getSize());
				}else{ //struct
					tc->setStructSize(TypecodeAPI::calculateStructSize(&members[i]));
				}
			}
		}else{
			tc->setStructSize(0); //check this later
		}

		return tc->getSize();
	}*/

}