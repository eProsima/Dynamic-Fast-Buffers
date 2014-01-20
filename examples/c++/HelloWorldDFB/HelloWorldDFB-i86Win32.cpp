#include "dfb/TypecodeAPI.h"
#include "dfb/BytecodeAPI.h"
#include "dfb/SerializerAPI.h"
#include "dfb/CommonData.h"
#include "fastcdr/FastCdr.h"
#include "fastcdr/FastBuffer.h"
#include <iostream>

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
	//short attshort;
	short arr1[2][4];
	short i2;
	int64_t s2;
	InnerStruct st3;
	string str1;
};

int checkStruct(OuterStruct *st1, OuterStruct *st2)
{

	if(
		st1->s1 == st2->s1 &&
		st1->i1 == st2->i1 &&
		st1->st1.i1 == st2->st1.i1 &&
		st1->st1.s1 == st1->st1.s1 &&
	
		st1->st1.arr1[0][0] == st2->st1.arr1[0][0] &&
		st1->st1.arr1[0][1] == st2->st1.arr1[0][1] &&
		st1->st1.arr1[0][2] == st2->st1.arr1[0][2] &&
		st1->st1.arr1[0][3] == st2->st1.arr1[0][3] &&
		st1->st1.arr1[1][0] == st2->st1.arr1[1][0] &&
		st1->st1.arr1[1][1] == st2->st1.arr1[1][1] &&
		st1->st1.arr1[1][2] == st2->st1.arr1[1][2] &&
		st1->st1.arr1[1][3] == st2->st1.arr1[1][3] &&
	
		st1->st1.members1[0] == st2->st1.members1[0] &&
		st1->st1.members1[1] == st2->st1.members1[1] &&
		st1->st1.members1[2] == st2->st1.members1[2] &&
		st1->st1.members1[3] == st2->st1.members1[3] &&
		st1->st1.members1[4] == st2->st1.members1[4] &&
		
		st1->st1.i2 == st2->st1.i2  &&
		st1->st1.s2 == st2->st1.s2 &&
		st1->st1.st3.s1 == st2->st1.st3.s1 &&
		st1->st1.st3.i1 == st2->st1.st3.i1 &&
		st1->st1.st3.c1 == st2->st1.st3.c1 &&
		st1->st1.st3.str1 == st2->st1.st3.str1 &&
		st1->st1.st3.s2 == st2->st1.st3.s2 &&
		st1->st1.st3.l1 == st2->st1.st3.l1 &&
		st1->st1.str1 == st2->st1.str1 &&
	
		st1->arr1[0][0] == st2->arr1[0][0] &&
		st1->arr1[0][1] == st2->arr1[0][1] &&
		st1->arr1[0][2] == st2->arr1[0][2] &&
		st1->arr1[0][3] == st2->arr1[0][3] &&
		st1->arr1[1][0] == st2->arr1[1][0] &&
		st1->arr1[1][1] == st2->arr1[1][1] &&
		st1->arr1[1][2] == st2->arr1[1][2] &&
		st1->arr1[1][3] == st2->arr1[1][3] &&

		st1->i2 == st2->i2 &&
		st1->s2 == st2->s2 &&
		st1->st3.s1 == st2->st3.s1 &&
		st1->st3.i1 == st2->st3.i1 &&
		st1->st3.c1 == st2->st3.c1 &&
		st1->st3.str1 == st2->st3.str1 &&
		st1->st3.s2 == st2->st3.s2 &&
		st1->st3.l1 == st2->st3.l1 &&
		st1->str1 == st2->str1)
	{
		return 0;
	}else{
		return -1;
	}
}

int main()
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
	// Typecode creation
	//
	DynamicFastBuffers::Typecode* struct1 = DynamicFastBuffers::TypecodeAPI::createStruct(
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
	// Bytecode for serialization
	//
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::SERIALIZE);
	
	//
	// Data serialization
	//
	try {
		DynamicFastBuffers::SerializerAPI::serialize((void*) &inputStruct, bc1, &cdr);
	}catch(std::exception &e){
		std::cout << e.what();
	}
	
	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode for deserialization
	//
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::DESERIALIZE);
	
	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &outputStruct, bc1, &cdr);
	
	//
	// Typecode deletes
	//
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(struct1);

	cdr.reset();

	if(checkStruct(&inputStruct, &outputStruct) == 0){
		cout << "TEST: HelloWorldDFB-32bit ended succesfully.\nData Comparison: CORRECT" << endl;
	}else{
		cout << "TEST: HelloWorldDFB-32bit failed.\nData Comparison: FAIL" << endl;
	}

	
	return 0;
}
