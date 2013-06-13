#include <iostream>
#include <stdarg.h>
#include "CommonData.h"
#include "TypecodeAPI.h"
#include <string>

using namespace std;

namespace DynamicFastBuffers
{
	Typecode* TypecodeAPI::createInteger()
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
		Typecode *ret = new Typecode(TC_STRUCT);
		va_list vl;
		va_start(vl, init);
		Typecode *p;
		ret->addMemberNoCheck(*init);
		Typecode *pTypecode = va_arg(vl, Typecode*);
		while(pTypecode != NULL){
			ret->addMemberNoCheck(*pTypecode);
			delete(pTypecode);
			pTypecode = (Typecode*) va_arg(vl, Typecode*);
		}
		va_end(vl);
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
		va_start(vl, nDims);
		vector<int> content;
		int count = 0, number = va_arg(vl, int);
		int totalSize = 1;
		while(number){
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
		delete tc;
	}

}