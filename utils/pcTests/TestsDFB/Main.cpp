#include "dfb/TypecodeAPI.h"
#include "dfb/BytecodeAPI.h"
#include "dfb/SerializerAPI.h"
#include "dfb/CommonData.h"
#include "fastcdr/FastCdr.h"
#include "fastcdr/FastBuffer.h"
//#include <iostream>
//#include <cstdint>

//using namespace std;

bool testPrimitiveData()
{

	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eprosima::FastBuffer cdrBuffer(buffer, 500);
	eprosima::FastCdr cdr(cdrBuffer);
	
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
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::SERIALIZE);

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
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::DESERIALIZE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::DESERIALIZE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::DESERIALIZE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::DESERIALIZE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::DESERIALIZE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::DESERIALIZE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::DESERIALIZE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::DESERIALIZE);

	//
	// Data deserialization
	//
	try{
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &i2, bc1, &cdr);
	}catch (std::exception &e){
		printf("%s\n", e.what());
	}
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
	eprosima::FastBuffer cdrBuffer(buffer, 500);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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
	eprosima::FastBuffer cdrBuffer(buffer, 500);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode *bytecodeArr01 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array01, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeArr02 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array02, DynamicFastBuffers::SERIALIZE);

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
	bytecodeArr01 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array01, DynamicFastBuffers::DESERIALIZE);
	bytecodeArr02 = DynamicFastBuffers::BytecodeAPI::generateBytecode(array02, DynamicFastBuffers::DESERIALIZE);

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
	eprosima::FastBuffer cdrBuffer(buffer, 500);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode *intVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(intVecTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *floatVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(floatVecTypecode, DynamicFastBuffers::SERIALIZE);

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
	intVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(intVecTypecode, DynamicFastBuffers::DESERIALIZE);
	floatVecBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(floatVecTypecode, DynamicFastBuffers::DESERIALIZE);

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
	char buffer[1000];
	eprosima::FastBuffer cdrBuffer(buffer, 1000);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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
		
		returnValue &= (inputStruct.st1.arr1[0][0] == outputStruct.st1.arr1[0][0]);
		returnValue &= (inputStruct.st1.arr1[0][1] == outputStruct.st1.arr1[0][1]);
		returnValue &= (inputStruct.st1.arr1[0][2] == outputStruct.st1.arr1[0][2]);
		returnValue &= (inputStruct.st1.arr1[0][3] == outputStruct.st1.arr1[0][3]);
		returnValue &= (inputStruct.st1.arr1[1][0] == outputStruct.st1.arr1[1][0]);
		returnValue &= (inputStruct.st1.arr1[1][1] == outputStruct.st1.arr1[1][1]);
		returnValue &= (inputStruct.st1.arr1[1][2] == outputStruct.st1.arr1[1][2]);
		returnValue &= (inputStruct.st1.arr1[1][3] == outputStruct.st1.arr1[1][3]);
			returnValue &= (inputStruct.st1.members1[0] == outputStruct.st1.members1[0]);
			returnValue &= (inputStruct.st1.members1[1] == outputStruct.st1.members1[1]);
			returnValue &= (inputStruct.st1.members1[2] == outputStruct.st1.members1[2]);
			returnValue &= (inputStruct.st1.members1[3] == outputStruct.st1.members1[3]);
			returnValue &= (inputStruct.st1.members1[4] == outputStruct.st1.members1[4]);
		returnValue &= (inputStruct.st1.i2 == outputStruct.st1.i2);
		returnValue &= (inputStruct.st1.s1 == outputStruct.st1.s1);
			returnValue &= (inputStruct.st1.st3.s1 == outputStruct.st1.st3.s1);
			returnValue &= (inputStruct.st1.st3.i1 == outputStruct.st1.st3.i1);
			returnValue &= (inputStruct.st1.st3.c1 == outputStruct.st1.st3.c1);
			returnValue &= (inputStruct.st1.st3.str1 == outputStruct.st1.st3.str1);
			returnValue &= (inputStruct.st1.st3.s2 == outputStruct.st1.st3.s2);
			returnValue &= (inputStruct.st1.st3.l1 == outputStruct.st1.st3.l1);
		returnValue &= (inputStruct.st1.str1 == outputStruct.st1.str1);
			returnValue &= (inputStruct.arr1[0][0] == outputStruct.arr1[0][0]);
			returnValue &= (inputStruct.arr1[0][1] == outputStruct.arr1[0][1]);
			returnValue &= (inputStruct.arr1[0][2] == outputStruct.arr1[0][2]);
			returnValue &= (inputStruct.arr1[0][3] == outputStruct.arr1[0][3]);
			returnValue &= (inputStruct.arr1[1][0] == outputStruct.arr1[1][0]);
			returnValue &= (inputStruct.arr1[1][1] == outputStruct.arr1[1][1]);
			returnValue &= (inputStruct.arr1[1][2] == outputStruct.arr1[1][2]);
			returnValue &= (inputStruct.arr1[1][3] == outputStruct.arr1[1][3]);
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
	char buffer[1000];
	eprosima::FastBuffer cdrBuffer(buffer, 1000);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::SERIALIZE);

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
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::DESERIALIZE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::DESERIALIZE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::DESERIALIZE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::DESERIALIZE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::DESERIALIZE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::DESERIALIZE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::DESERIALIZE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::DESERIALIZE);

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
	char buffer[5000];
	eprosima::FastBuffer cdrBuffer(buffer, 5000);
	eprosima::FastCdr cdr(cdrBuffer);

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
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAInt, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc9 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcALong, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc10 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAShort, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc11 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAFloat, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc12 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcADouble, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode* bc14 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcACharacter, DynamicFastBuffers::SERIALIZE);

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
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::DESERIALIZE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::DESERIALIZE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::DESERIALIZE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::DESERIALIZE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::DESERIALIZE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::DESERIALIZE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAInt, DynamicFastBuffers::DESERIALIZE);
	bc9 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcALong, DynamicFastBuffers::DESERIALIZE);
	bc10 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAShort, DynamicFastBuffers::DESERIALIZE);
	bc11 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcAFloat, DynamicFastBuffers::DESERIALIZE);
	bc12 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcADouble, DynamicFastBuffers::DESERIALIZE);
	bc14 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcACharacter, DynamicFastBuffers::DESERIALIZE);

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

namespace align_tests
{

	struct charAlignment_st
	{
		char att1;
		char att2;
	};
	ptrdiff_t charAlign;

	struct shortAlignment_st
	{
		char att1;
		short att2;
	};
	ptrdiff_t shortAlign;

	struct intAlignment_st
	{
		char att1;
		int32_t att2;
	};
	ptrdiff_t intAlign;

	struct longAlignment_st
	{
		char att1;
		int64_t att2;
	};
	ptrdiff_t longAlign;

	struct floatAlignment_st
	{
		char att1;
		float att2;
	};
	ptrdiff_t floatAlign;

	struct doubleAlignment_st
	{
		char att1;
		double att2;
	};
	ptrdiff_t doubleAlign;

	struct stringAlignment_st
	{
		char att1;
		std::string att2;
	};
	ptrdiff_t stringAlign;

	struct booleanAlignment_st
	{
		char att1;
		bool att2;
	};
	ptrdiff_t booleanAlign;

	struct sequenceAlignment_st
	{
		char att1;
		vector<void*> att2;
	};
	ptrdiff_t sequenceAlign;

	struct charStructAlignment_st
	{
		char att1;
		struct st{
			char att1;
		} att2;
	};
	ptrdiff_t charStructAlign;

	struct shortStructAlignment_st
	{
		char att1;
		struct st{
			short att1;
		} att2;
	};
	ptrdiff_t shortStructAlign;

	struct intStructAlignment_st
	{
		char att1;
		struct st{
			int32_t att1;
		} att2;
	};
	ptrdiff_t intStructAlign;

	struct longStructAlignment_st
	{
		char att1;
		struct st{
			int64_t att1;
		} att2;
	};
	ptrdiff_t longStructAlign;

	struct floatStructAlignment_st
	{
		char att1;
		struct st{
			float att1;
		} att2;
	};
	ptrdiff_t floatStructAlign;

	struct doubleStructAlignment_st
	{
		char att1;
		struct st{
			double att1;
		} att2;
	};
	ptrdiff_t doubleStructAlign;

	struct stringStructAlignment_st
	{
		char att1;
		struct st{
			std::string att1;
		} att2;
	};
	ptrdiff_t stringStructAlign;

	struct booleanStructAlignment_st
	{
		char att1;
		struct st{
			bool att1;
		} att2;
	};
	ptrdiff_t booleanStructAlign;

	struct sequenceStructAlignment_st
	{
		char att1;
		struct st{
			vector<void*> att1;
		} att2;
	};
	ptrdiff_t sequenceStructAlign;

	void initialize()
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

	}

	size_t calculatePadding(void* position, void* initialPosition, ptrdiff_t align)
	{
		size_t padding = 0;
		size_t alignment = align;
		ptrdiff_t rawPosition = (char*)position - (char*)initialPosition;
		size_t calc = ((size_t) rawPosition % alignment);
		
		if (calc != 0){
			padding = alignment - (calc);
		}

		return padding;
	}

	void charAlignmentTest()
	{
		struct charAlignment_st
		{
			char c0;
			char c1;
		};

		int ofs = (int) offsetof(struct charAlignment_st, c1);

		cout << ofs << endl;
	}

	bool charAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct intAlignment_st
		{
			char i0;
			char c1;
			char i2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		intAlignment_st stIn;
		stIn.i0 = 1;
		stIn.c1 = 5;
		stIn.i2 = 10;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct intAlignment_st, c1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.i0);
		position = (char*) position + sizeof(char);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct intAlignment_st, i2);

		align = charAlign;

		position = &(stIn.c1);
		position = (char*) position + sizeof(char);

		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		return result;

	}

	bool shortAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct intAlignment_st
		{
			char i0;
			short c1;
			short i2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		intAlignment_st stIn;
		stIn.i0 = 1;
		stIn.c1 = 5;
		stIn.i2 = 10;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct intAlignment_st, c1);

		ptrdiff_t align = shortAlign;

		void *position = &(stIn.i0);
		position = (char*) position + sizeof(char);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct intAlignment_st, i2);

		align = shortAlign;

		position = &(stIn.c1);
		position = (char*) position + sizeof(short);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		return result;
	}

	bool intAlignmentTest01() // Estructura con un char y un entero, para comprobar alineamiento con distintos packings
	{
		struct intAlignment_st
		{
			char c0;
			int32_t i1;
		};

		int ofs = (int) offsetof(struct intAlignment_st, i1);

		intAlignment_st stIn/*, stOut*/;
		stIn.c0 = 1;
		stIn.i1 = 5;

		void* initialPosition = &stIn;

		ptrdiff_t align = intAlign;

		void *position = &(stIn.c0);
		position = (char*) position+1;

		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.c0;

		return (ourOffset == ofs);

	}

	bool intAlignmentTest02()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct intAlignment_st
		{
			int32_t i0;
			char c1;
			int32_t i2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		intAlignment_st stIn;
		stIn.i0 = 1;
		stIn.c1 = 5;
		stIn.i2 = 10;

		//Primera posicion

		void* initialPosition = &stIn;

		ofs = (int) offsetof(struct intAlignment_st, c1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.c1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct intAlignment_st, i2);

		align = intAlign;

		position = &(stIn.c1);
		position = (char*) position+1;

		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		return result;
	}

	bool longAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct intAlignment_st
		{
			char i0;
			short i2;
			int64_t c1;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		intAlignment_st stIn;
		stIn.i0 = 1;
		stIn.c1 = 5;
		stIn.i2 = 10;

		//Primera posicion

		void* initialPosition = &stIn;

		ofs = (int) offsetof(struct intAlignment_st, i2);

		ptrdiff_t align = shortAlign;

		void *position = &(stIn.i0);
		position = (char*) position + sizeof(char);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct intAlignment_st, c1);

		align = longAlign;

		position = &(stIn.i2);
		position = (char*) position + sizeof(short);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.i0;

		result &= (ofs==ourOffset);

		return result;
	}

	bool floatAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			char att2;
			float att3;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 1;
		stIn.att2 = 5;
		stIn.att3 = 10;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att3);

		align = floatAlign;

		position = &(stIn.att2);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool doubleAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			short att1;
			double att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2 = 10;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = shortAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = doubleAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(short);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool stringAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			std::string att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2 = "Hello World";

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = stringAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool booleanAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			bool att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2 = true;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = booleanAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool sequenceAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			vector<void*> att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		vector<void*> att (4, NULL);
		stIn.att2 = att;

		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = sequenceAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayCharAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			char att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = charAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayShortAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			short att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = shortAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayIntAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			int32_t att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = intAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayLongAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			int64_t att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i+5;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = longAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayFloatAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			float att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i+5;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = floatAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayDoubleAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			double att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i+5;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = doubleAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayStringAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			std::string att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i+5;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = stringAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool arrayBooleanAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			bool att2[11];
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		for(int i=0; i < 11; ++i) {
			stIn.att2[i] = i+5;
		}
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = booleanAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool charStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				char att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = charStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool shortStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				short att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = shortStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool intStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				int32_t att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = intStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool longStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				int64_t att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = longStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool floatStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				float att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = floatStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool doubleStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				double att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = doubleStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool stringStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				std::string att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = stringStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool booleanStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				bool att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		stIn.att2.att1 = 10;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = booleanStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	bool sequenceStructAlignmentTest01()
	{
		//Cálculo de offset usando la biblioteca estándar
		struct alignment_st
		{
			char att1;
			struct st{
				vector<void*> att1;
			} att2;
		};

		int ofs;

		//Clalculo de offset usando algoritmia

		bool result = true;

		alignment_st stIn;
		stIn.att1 = 5;
		vector<void*> v (4, NULL);
		stIn.att2.att1 = v;
		
		void* initialPosition = &stIn;

		//Primera posicion

		ofs = (int) offsetof(struct alignment_st, att1);

		ptrdiff_t align = charAlign;

		void *position = &(stIn.att1);
		
		size_t padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ptrdiff_t ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		//Segunda posicion

		ofs = (int) offsetof(struct alignment_st, att2);

		align = sequenceStructAlign;

		position = &(stIn.att1);
		position = (char*) position + sizeof(char);
		
		padding = calculatePadding(position, initialPosition, align);

		position = (char*) position + padding;

		ourOffset = (char*) position - (char*) &stIn.att1;

		result &= (ofs==ourOffset);

		return result;
	}

	inline int execute()
	{
		align_tests::initialize();

		cout << "\nSIMPLE TYPES ALIGNMENT: \n" << endl;
		if (align_tests::charAlignmentTest01()){
			printf("TEST: charAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: charAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}
		
		if (align_tests::intAlignmentTest01()){
			printf("TEST: intAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: intAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::intAlignmentTest02()){
			printf("TEST: intAlignmentTest02 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: intAlignmentTest02 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::longAlignmentTest01()){
			printf("TEST: longAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: longAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::longAlignmentTest01()){
			printf("TEST: floatAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: floatAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::doubleAlignmentTest01()){
			printf("TEST: doubleAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: doubleAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::stringAlignmentTest01()){
			printf("TEST: stringAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: stringAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::booleanAlignmentTest01()){
			printf("TEST: booleanAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: booleanAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		cout << endl << "COMPLEX TYPES ALIGNMENT: \n" << endl;
		if (align_tests::sequenceAlignmentTest01()){
			printf("TEST: sequenceAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: sequenceAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayCharAlignmentTest01()){
			printf("TEST: arrayCharAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayCharAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayShortAlignmentTest01()){
			printf("TEST: arrayShortAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayShortAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayIntAlignmentTest01()){
			printf("TEST: arrayIntAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayIntAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayLongAlignmentTest01()){
			printf("TEST: arrayLongAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayLongAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayFloatAlignmentTest01()){
			printf("TEST: arrayFloatAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayFloatAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayDoubleAlignmentTest01()){
			printf("TEST: arrayDoubleAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayDoubleAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayStringAlignmentTest01()){
			printf("TEST: arrayStringAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayStringAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::arrayBooleanAlignmentTest01()){
			printf("TEST: arrayBooleanAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: arrayBooleanAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		cout << endl << "STRUCTURES ALIGNMENT: \n" << endl;
		if (align_tests::charStructAlignmentTest01()){
			printf("TEST: charStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: charStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::shortStructAlignmentTest01()){
			printf("TEST: shortStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: shortStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::intStructAlignmentTest01()){
			printf("TEST: intStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: intStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::longStructAlignmentTest01()){
			printf("TEST: longStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: longStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::floatStructAlignmentTest01()){
			printf("TEST: floatStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: floatStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::doubleStructAlignmentTest01()){
			printf("TEST: doubleStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: doubleStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::stringStructAlignmentTest01()){
			printf("TEST: stringStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: stringStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::booleanStructAlignmentTest01()){
			printf("TEST: booleanStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: booleanStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

		if (align_tests::sequenceStructAlignmentTest01()){
			printf("TEST: sequenceStructAlignmentTest01 ended succesfully.\nAlign Comparison: CORRECT\n");
		} else {
			printf("TEST: sequenceStructAlignmentTest01 failed.\Align Comparison: FAIL\n");
			return -1;
		}

	
	}

};

int main()
{

	align_tests::execute();

	printf("\nSYSTEM COMPLEX TESTS:\n\n");

	if(testPrimitiveData()){
		printf("TEST: testPrimitiveData ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testPrimitiveData failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testStructData()){
		printf("TEST: testStructData ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testStructData failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testArrayData()){
		printf("TEST: testArrayData ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testArrayData failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testSequenceData()){
		printf("TEST: testSequenceData ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testSequenceData failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testComplexStruct()){
		printf("TEST: testComplexStruct ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testComplexStruct failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testSimpleAlignment()){
		printf("TEST: testSimpleAlignment ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testSimpleAlignment failed.\nData Comparison: FAIL\n");
		return -1;
	}

	if(testArrayKinds()){
		printf("TEST: testArrayKinds ended succesfully.\nData Comparison: CORRECT\n");
	}else{
		printf("TEST: testArrayKinds failed.\nData Comparison: FAIL\n");
		return -1;
	}
	return 0;
}
