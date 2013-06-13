#ifndef _TYPECODE_API_
#define _TYPECODE_API_

#include <array>
#include "NotEnoughParamsException.h"
#include "WrongTypeException.h"
#include "WrongParamException.h"

namespace DynamicFastBuffers
{
	class Typecode;

	class TypecodeAPI
	{
	private:
		//No private atributes or functions
	public:
		static Typecode* createInteger();
		static Typecode* createShort();
		static Typecode* createLong();
		static Typecode* createFloat();
		static Typecode* createDouble();
		static Typecode* createString();
		static Typecode* createCharacter();
		static Typecode* createBoolean();
		static Typecode* createStruct(Typecode *init, ...);
		static Typecode* createUnion(Typecode *init, ...);
		static Typecode* createArray(Typecode *type, int nDims, int dim1, ...);
		static Typecode* createSequence(Typecode *type, int maxLength);
		static void addMembers(Typecode *dest, ...);
		static void deleteTypecode(Typecode *tc);
	};
};

#endif _TYPECODE_API_