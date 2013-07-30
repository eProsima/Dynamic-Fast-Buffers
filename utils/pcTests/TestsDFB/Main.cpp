#include "cpp\TypecodeAPI.h"
#include "cpp\BytecodeAPI.h"
#include "cpp\SerializerAPI.h"
#include "cpp\CommonData.h"
#include "cpp\FastCdr.h"
#include <iostream>

bool testPrimitiveData()
{

	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);
	
	//
	// Data creation
	//
	int32_t i1 = 5, i2;
	short s1 = 2, s2;
	int64_t l1 = 7, l2;
	float f1 = 15.5, f2;
	double d1 = 23.625, d2;
	string str1 = "HELLO WORLD", str2;
	char c1 = 'A', c2;
	bool b1 = true, b2;

	//
	// Typecode creation
	//
	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* short1 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* long1 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* float1 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* double1 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* string1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode* char1 = DynamicFastBuffers::TypecodeAPI::createCharacter();
	DynamicFastBuffers::Typecode* bool1 = DynamicFastBuffers::TypecodeAPI::createBoolean();

	//
	// Bytecode for serialization
	//
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_TRUE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &i1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &l1, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &f1, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &d1, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str1, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &c1, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &b1, bc8, &cdr);
	
	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode for deserialization
	//
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_FALSE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_FALSE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_FALSE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_FALSE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_FALSE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_FALSE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_FALSE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &i2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &s2, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &l2, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &f2, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &d2, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str2, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &c2, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &b2, bc8, &cdr);

	//
	// Typecode deletes
	//
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(int1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(short1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(long1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(float1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(double1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(string1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(char1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(bool1);

	//
	// Check data
	//
	bool returnValue = true;
	returnValue &= (i1 == i2);
	returnValue &= (s1 == s2);
	returnValue &= (l1 == l2);
	returnValue &= (f1 == f2);
	returnValue &= (d1 == d2);
	returnValue &= (str1 == str2);
	returnValue &= (c1 == c2);
	returnValue &= (b1 == b2);

	return returnValue;
}

//
// Structures for testStructData
//
struct inner
{
	char att1;
	char att2;
	short att3;
};

struct outer
{
	float att1;
	string att2;
	int32_t att3;
	inner att4;
};

bool testStructData()
{

	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	outer inputStruct, outputStruct;
	inner in1;
	
	in1.att1 = 'A';
	in1.att2 = 'B';
	in1.att3 = 1000;

	inputStruct.att1 = 10;
	inputStruct.att2 = "OUTER";
	inputStruct.att3 = 20;
	inputStruct.att4 =  in1;

	//
	// Typecode creation
	//
	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createCharacter(),
			DynamicFastBuffers::TypecodeAPI::createCharacter(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			NULL
		),
		NULL
	);

	//
	// Bytecode generation
	//
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &inputStruct, bytecodeSerialization, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &outputStruct, bytecodeDeserialization, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	returnValue &= (inputStruct.att1 == outputStruct.att1);
	returnValue &= (inputStruct.att2 == outputStruct.att2);
	returnValue &= (inputStruct.att3 == outputStruct.att3);
	returnValue &= (inputStruct.att4.att1 == outputStruct.att4.att1);
	returnValue &= (inputStruct.att4.att2 == outputStruct.att4.att2);
	returnValue &= (inputStruct.att4.att3 == outputStruct.att4.att3);

	return returnValue;

}

bool testArrayData()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	short array1[4] = {1, 2, 3, 4};
	short array2[4];
	double array3[4][6][2] = {{{1,2},{3,4},{5,6},{7,8},{9,10},{11,12}}, {{13,14},{15,16},{17,18},{19,20},{21,22},{23,24}}, {{25,26},{27,28},{29,30},{31,32},{33,34},{35,36}}, {{37,38},{39,40},{41,42},{43,44},{45,46},{47,48}}}; 
	double array4[4][6][2];
	
	//
	// Typecode definition
	//
	DynamicFastBuffers::Typecode* array01 = DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createShort(), 1, 4, 0);
	DynamicFastBuffers::Typecode* array02 = DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createDouble(), 3, 4, 6 ,2, 0);

	//
	// Bytecode generation for serialization
	//
	DynamicFastBuffers::Bytecode *bytecodeArr01 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array01, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeArr02 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array02, DynamicFastBuffers::FLAG_TRUE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &array1, bytecodeArr01, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &array3, bytecodeArr02, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode generation for deserialization
	//
	bytecodeArr01 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array01, DynamicFastBuffers::FLAG_FALSE);
	bytecodeArr02 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array02, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &array2, bytecodeArr01, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &array4, bytecodeArr02, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	for(int i = 0; i < 4; ++i){
		returnValue &= (array1[i] == array2[i]);
	}
	for (int i = 0; i < 4; ++i){
		for(int j = 0; j < 6; ++j){
			for(int k = 0; k < 2; ++k){
				returnValue &= (array3[i][j][k] == array4[i][j][k]);
			}
		}
	}

	return returnValue;
}

bool testSequenceData()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	vector<int32_t> integerVector = vector<int32_t>(10, 3);
	vector<int32_t> outputIntegerVector = vector<int32_t>(10);
	vector<float> floatVector = vector<float>(5, 8);
	vector<float> outputFloatVector = vector<float>(5);
	
	//
	// Typecode definition
	//
	DynamicFastBuffers::Typecode* intVecTypecode = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createInteger(), 10);
	DynamicFastBuffers::Typecode* floatVecTypecode = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createFloat(), 5);

	//
	// Bytecode generation for serialization
	//
	DynamicFastBuffers::Bytecode *intVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(intVecTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *floatVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(floatVecTypecode, DynamicFastBuffers::FLAG_TRUE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &integerVector, intVecBytecode, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &floatVector, floatVecBytecode, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode generation for deserialization
	//
	intVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(intVecTypecode, DynamicFastBuffers::FLAG_FALSE);
	floatVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(floatVecTypecode, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &outputIntegerVector, intVecBytecode, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &outputFloatVector, floatVecBytecode, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	for(unsigned int i = 0; i < integerVector.size(); ++i){
		returnValue &= (integerVector[i] == outputIntegerVector[i]);
	}
	for(unsigned int i = 0; i < floatVector.size(); ++i){
		returnValue &= (floatVector[i] == outputFloatVector[i]);
	}

	return returnValue;
}

//
// Structures for testComplexStruct
//
struct InnerStruct
{
	short s1;
	int32_t i1;
	char c1;
	std::string str1;
	short s2;
	int64_t l1;
};

struct MediumStruct
{
	short i1;
	char s1;
	short arr1[2][4];
	vector<int64_t> members1;
	int32_t i2;
	short s2;
	InnerStruct st3;
	std::string str1;
};

struct OuterStruct
{
	short s1;
	int32_t i1;
	MediumStruct st1;
	short arr1[2][4];
	short i2;
	int64_t s2;
	InnerStruct st3;
	string str1;
};

bool testComplexStruct()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	short arr1[2][4] = {{100,101,102,103},{104,105,106,107}};
	short arr2[2][4] = {{200,201,202,203},{204,205,206,207}};

	InnerStruct innerTest;
	innerTest.s1 = 1;
	innerTest.i1 = 2;
	innerTest.c1 = 'T';
	innerTest.str1 = "CUATRO";
	innerTest.s2 = 5;
	innerTest.l1 = 6;

	MediumStruct mediumTest;
	mediumTest.i1 = 5;
	mediumTest.s1 = 'C';
	memcpy(mediumTest.arr1, arr1, sizeof(arr1));
	mediumTest.members1 = vector<int64_t>(5, 50);
	mediumTest.i2 = 10;
	mediumTest.s2 = 4;
	mediumTest.st3 = innerTest;
	mediumTest.str1 = "INNER STRUCT";
	
	OuterStruct inputStruct, outputStruct;
	inputStruct.s1 = 6;
	inputStruct.i1 = 15;
	inputStruct.st1 = mediumTest;
	memcpy(inputStruct.arr1, arr2, sizeof(arr2));
	inputStruct.i2 = 20;
	inputStruct.s2 = 8;
	inputStruct.st3 = innerTest;
	inputStruct.str1 = "OUTER STRUCT";

	//
	// Typecode definition
	//
	DynamicFastBuffers::Typecode* typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			DynamicFastBuffers::TypecodeAPI::createCharacter(),
			DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createShort(), 2, 2, 4, 0),
			DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createLong(), 5),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			DynamicFastBuffers::TypecodeAPI::createStruct(
				DynamicFastBuffers::TypecodeAPI::createShort(),
				DynamicFastBuffers::TypecodeAPI::createInteger(),
				DynamicFastBuffers::TypecodeAPI::createCharacter(),
				DynamicFastBuffers::TypecodeAPI::createString(),
				DynamicFastBuffers::TypecodeAPI::createShort(),
				DynamicFastBuffers::TypecodeAPI::createLong(),
				NULL
			),
			DynamicFastBuffers::TypecodeAPI::createString(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createShort(), 2, 2, 4, 0),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createCharacter(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createString(),
		NULL
	);

	//
	// Bytecode generation 
	//
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &inputStruct, bytecodeSerialization, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &outputStruct, bytecodeDeserialization, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	returnValue &= (inputStruct.s1 == outputStruct.s1);
	returnValue &= (inputStruct.i1 == outputStruct.i1);
		returnValue &= (inputStruct.st1.i1 == outputStruct.st1.i1);
		returnValue &= (inputStruct.st1.s1 == outputStruct.st1.s1);
		for(unsigned int i = 0; i < 2; ++i){
			for(unsigned int j=0; j < 4; ++j){
				returnValue &= (inputStruct.st1.arr1[i][j] == outputStruct.st1.arr1[i][j]);
			}
		}
		for(unsigned int i = 0; i < 5; ++i){
			returnValue &= (inputStruct.st1.members1[i] == outputStruct.st1.members1[i]);
		}
		returnValue &= (inputStruct.st1.i2 == outputStruct.st1.i2);
		returnValue &= (inputStruct.st1.s1 == outputStruct.st1.s1);
			returnValue &= (inputStruct.st1.st3.s1 == outputStruct.st1.st3.s1);
			returnValue &= (inputStruct.st1.st3.i1 == outputStruct.st1.st3.i1);
			returnValue &= (inputStruct.st1.st3.c1 == outputStruct.st1.st3.c1);
			returnValue &= (inputStruct.st1.st3.str1 == outputStruct.st1.st3.str1);
			returnValue &= (inputStruct.st1.st3.s2 == outputStruct.st1.st3.s2);
			returnValue &= (inputStruct.st1.st3.l1 == outputStruct.st1.st3.l1);
		returnValue &= (inputStruct.st1.str1 == outputStruct.st1.str1);
	for(unsigned int i = 0; i < 2; ++i){
		for(unsigned int j=0; j < 4; ++j){
			returnValue &= (inputStruct.arr1[i][j] == outputStruct.arr1[i][j]);
		}
	}
	returnValue &= (inputStruct.i2 == outputStruct.i2);
	returnValue &= (inputStruct.s2 == outputStruct.s2);
		returnValue &= (inputStruct.st3.s1 == outputStruct.st3.s1);
		returnValue &= (inputStruct.st3.i1 == outputStruct.st3.i1);
		returnValue &= (inputStruct.st3.c1 == outputStruct.st3.c1);
		returnValue &= (inputStruct.st3.str1 == outputStruct.st3.str1);
		returnValue &= (inputStruct.st3.s2 == outputStruct.st3.s2);
		returnValue &= (inputStruct.st3.l1 == outputStruct.st3.l1);
	returnValue &= (inputStruct.str1 == outputStruct.str1);

	return returnValue;
}

bool testSimpleAlignment()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	int32_t i1=8, i2;
	short s1=2, s2;
	int64_t l1 = 3, l2;
	float f1 = 15.5, f2;
	double d1 = 23.625, d2;
	string str1 = "HELLO WORLD", str2;
	string str3 = "TST", str4;
	string str5 = "TEST", str6;
	string str7 = "TE", str8;
	string str9 = "R", str10;
	string str11 = "ABCDEF", str12;
	char c1 = 'a', c2;
	bool b1 = true, b2;
	bool b3 = false, b4;

	//
	// Typecode definition
	//
	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* short1 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* long1 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* float1 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* double1 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* string1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode* char1 = DynamicFastBuffers::TypecodeAPI::createCharacter();
	DynamicFastBuffers::Typecode* bool1 = DynamicFastBuffers::TypecodeAPI::createBoolean();

	//
	// Bytecode generation for serialization
	//
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_TRUE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &i1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str11, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &b1, bc8, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str1, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str3, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str7, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &f1, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &l1, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str9, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &d1, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &c1, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str5, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &b3, bc8, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode generation for deserialization
	//
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_FALSE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_FALSE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_FALSE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_FALSE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_FALSE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_FALSE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_FALSE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &i2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &s2, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str12, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &b2, bc8, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str2, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str4, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str8, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &f2, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &l2, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str10, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &d2, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &c2, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str6, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &b4, bc8, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	returnValue &= (i1 == i2);
	returnValue &= (s1 == s2);
	returnValue &= (str11 == str12);
	returnValue &= (b1 == b2);
	returnValue &= (str1 == str2);
	returnValue &= (str3 == str4);
	returnValue &= (str7 == str8);
	returnValue &= (l1 == l2);
	returnValue &= (str9 == str10);
	returnValue &= (d1 == d2);
	returnValue &= (c1 == c2);
	returnValue &= (str5 == str6);
	returnValue &= (b3 == b4);

	return returnValue;
}

bool testArrayKinds()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	//
	// Data creation
	//
	array<int32_t,4> arr1 = {1, 2, 3, 4};
	array<int32_t,4> arr2;
	array<short,6> arr3 = {2, 3, 5, 6, 7, 8};
	array<short,6> arr4;
	array<int64_t,4> arr5 = {9, 10, 11, 12};
	array<int64_t,4> arr6;
	array<float,4> arr7 = {9, 10, 11, 12};
	array<float,4> arr8;
	array<double,4> arr9 = {9, 10, 11, 12};
	array<double,4> arr10;
	array<char,10> arr13 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	array<char,10> arr14;
	int32_t int1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	int32_t int2 [3][4];
	int64_t long1 [4][4][2] = {{{1,1},{2,2},{3,3},{4,4}}, {{10,10},{11,11},{12,12},{13,13}}, {{20,20},{21,21},{22,22},{23,23}}, {{30,30},{31,31},{32,32},{33,33}}};
	int64_t long2 [4][4][2];
	short short1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	short short2 [3][4];
	float float1 [3][4] = {{(float) 2.0, (float) 2.1, (float) 2.2, (float) 2.3}, {(float) 3.0, (float) 3.1, (float) 3.2, (float) 3.3}, {(float) 4.0, (float) 4.1, (float) 4.2, (float) 4.3}};
	float float2 [3][4];
	double double1 [3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	double double2 [3][4];
	char char1 [5][4] = {{'-','-','-','-'},{'1','1','1','1'},{'W','W','W','W'}, {'i','i','i','i'}, {'?','?','?','?'}};
	char char2 [5][4];

	//
	// Typecode definition
	//
	DynamicFastBuffers::Typecode* tcInt = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* tcShort = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* tcLong = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* tcFloat = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* tcDouble = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* tcCharacter = DynamicFastBuffers::TypecodeAPI::createCharacter();
	DynamicFastBuffers::Typecode* tcArray1 = DynamicFastBuffers::TypecodeAPI::createArray(tcInt, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray2 = DynamicFastBuffers::TypecodeAPI::createArray(tcShort, 1, 6, 0);
	DynamicFastBuffers::Typecode* tcArray3 = DynamicFastBuffers::TypecodeAPI::createArray(tcLong, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray4 = DynamicFastBuffers::TypecodeAPI::createArray(tcFloat, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray5 = DynamicFastBuffers::TypecodeAPI::createArray(tcDouble, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray7 = DynamicFastBuffers::TypecodeAPI::createArray(tcCharacter, 1, 10, 0);
	DynamicFastBuffers::Typecode* tcAInt = DynamicFastBuffers::TypecodeAPI::createArray(tcInt, 2, 3, 4, 0);
	DynamicFastBuffers::Typecode* tcALong = DynamicFastBuffers::TypecodeAPI::createArray(tcLong, 3, 4, 4, 2, 0);
	DynamicFastBuffers::Typecode* tcAShort = DynamicFastBuffers::TypecodeAPI::createArray(tcShort, 2, 3, 4, 0);
	DynamicFastBuffers::Typecode* tcAFloat = DynamicFastBuffers::TypecodeAPI::createArray(tcFloat, 2, 3, 4, 0);
	DynamicFastBuffers::Typecode* tcADouble = DynamicFastBuffers::TypecodeAPI::createArray(tcDouble, 2, 3, 4, 0);
	DynamicFastBuffers::Typecode* tcACharacter = DynamicFastBuffers::TypecodeAPI::createArray(tcCharacter, 2, 5, 4, 0);

	//
	// Bytecode generation for serialization
	//
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAInt, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc9 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcALong, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc10 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAShort, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc11 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAFloat, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc12 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcADouble, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc14 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcACharacter, DynamicFastBuffers::FLAG_TRUE);

	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr3, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr5, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr7, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr9, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr13, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &int1, bc8, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &long1, bc9, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &short1, bc10, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &float1, bc11, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &double1, bc12, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &char1, bc14, &cdr);

	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode generation for deserialization
	//
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::FLAG_FALSE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::FLAG_FALSE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::FLAG_FALSE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::FLAG_FALSE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::FLAG_FALSE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::FLAG_FALSE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAInt, DynamicFastBuffers::FLAG_FALSE);
	bc9 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcALong, DynamicFastBuffers::FLAG_FALSE);
	bc10 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAShort, DynamicFastBuffers::FLAG_FALSE);
	bc11 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAFloat, DynamicFastBuffers::FLAG_FALSE);
	bc12 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcADouble, DynamicFastBuffers::FLAG_FALSE);
	bc14 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcACharacter, DynamicFastBuffers::FLAG_FALSE);

	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr4, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr6, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr8, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr10, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr14, bc7, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &int2, bc8, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &long2, bc9, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &short2, bc10, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &float2, bc11, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &double2, bc12, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &char2, bc14, &cdr);

	//
	// Comparison
	//
	bool returnValue = true;
	unsigned int i, j, k;
	for(i=0; i < 4; ++i){
		returnValue &= (arr1[i] == arr2[i]);
	}
	for(i=0; i < 6; ++i){
		returnValue &= (arr3[i] == arr4[i]);
	}
	for(i=0; i < 4; ++i){
		returnValue &= (arr5[i] == arr6[i]);
	}
	for(i=0; i < 4; ++i){
		returnValue &= (arr7[i] == arr8[i]);
	}
	for(i=0; i < 4; ++i){
		returnValue &= (arr9[i] == arr10[i]);
	}
	for(i=0; i < 10; ++i){
		returnValue &= (arr13[i] == arr14[i]);
	}
	for(i=0; i < 3; ++i){
		for(j = 0; j < 4; ++j){
			returnValue &= (int1[i][j] == int2[i][j]);
		}
	}
	for(i=0; i < 4; ++i){
		for(j = 0; j < 4; ++j){
			for(k = 0; k < 2; ++k){
				returnValue &= (long1[i][j][k] == long2[i][j][k]);
			}
		}
	}
	for(i=0; i < 3; ++i){
		for(j = 0; j < 4; ++j){
			returnValue &= (short1[i][j] == short2[i][j]);
		}
	}
	for(i=0; i < 3; ++i){
		for(j = 0; j < 4; ++j){
			returnValue &= (float1[i][j] == float2[i][j]);
		}
	}
	for(i=0; i < 3; ++i){
		for(j = 0; j < 4; ++j){
			returnValue &= (double1[i][j] == double2[i][j]);
		}
	}
	for(i=0; i < 5; ++i){
		for(j = 0; j < 4; ++j){
			returnValue &= (char1[i][j] == char2[i][j]);
		}
	}
	return returnValue;
}

int main()
{
	printf("SYSTEM COMPLEX TESTS:\n\n");

	if(testPrimitiveData()){
		cout << "TEST: testPrimitiveData ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testPrimitiveData failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testStructData()){
		cout << "TEST: testStructData ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testStructData failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testArrayData()){
		cout << "TEST: testArrayData ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testArrayData failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testSequenceData()){
		cout << "TEST: testSequenceData ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testSequenceData failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testComplexStruct()){
		cout << "TEST: testComplexStruct ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testComplexStruct failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testSimpleAlignment()){
		cout << "TEST: testSimpleAlignment ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testSimpleAlignment failed.\nData Comparison: FAIL" << endl;
		return -1;
	}

	if(testArrayKinds()){
		cout << "TEST: testArrayKinds ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: testArrayKinds failed.\nData Comparison: FAIL" << endl;
		return -1;
	}
	return 0;
}