
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <stdint.h>
#include <cstdio>
#include <time.h>

#include "cpp/TypecodeAPI.h"
#include "cpp/BytecodeAPI.h"
#include "cpp/SerializerAPI.h"

#include "cpp/exceptions/NotEnoughParamsException.h"
#include "FastCdr.h"
#include "FastBuffer.h"

//MEMORY LEAKS
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

void testDFB1();
void testDFB2();
void testDFB3();
void testDFB4();
void testDFB5();
void testDFB6();
void testDFB7();
void prueba();
void testPrimitiveErrors();
void testComplexErrors();
void performanceTest();
void userManualExampleCode();
void testCode();


struct inner
{
	string att1;
	int att2;
	double att3;
};

struct outer
{
	float att1;
	string att2;
	int att3;
	inner att4;
};

/*

struct myStructure
{
	int i1;
	short s1;
	double d1;
	long l1;
	float f1;
	string str1;
	char c1;
	bool b1;
};

struct myStructure2
{
	vector<short> members;
	vector<float> floats;
};

struct myStructure3
{
	int i1;
	short s1;
	vector<long> members1;
	int i2;
	string str1;
};

struct myStructure4
{
	int i1;
	short s1;
	char members1[2][4];
	int i2;
	string str1;
};

struct myNewStruct
{
	string s;
	string s2;
};

struct structTest3
{
	short s1;
	int i1;
	char c1;
	string str1;
	short s2;
	long l1;
};

struct structTest1
{
	short i1;
	char s1;
	short arr1[2][4];
	vector<long> members1;
	int i2;
	short s2;
	structTest3 st3;
	string str1;
};

struct structTest2
{
	short s1;
	int i1;
	structTest1 st1;
	short arr1[2][4];
	short i2;
	long s2;
	structTest3 st3;
	string str1;
};

struct sTest1
{
	short c1;
	//int i1;
	double n;
	short j;
	//string s;
};

struct sTest2
{
	//
	//char c1;
	//int n;
	//long j;
	//
	short c1;
	short n;
	int d1;
	short s2;
	int entero;
	short corto;
	//string s;
	sTest1 test1;
	//string s;
	short pepe;
};


*/
int main()
{
	//_CrtSetBreakAlloc(144);
	//testDFB1();
	//testDFB2();
	//testDFB3();
	//testDFB4();
	//testDFB5();
	//testDFB6();
	//testDFB7();
	//prueba();
	//_CrtDumpMemoryLeaks();
	//testPrimitiveErrors();
	//testComplexErrors();
	//performanceTest();
	//userManualExampleCode();
	testCode();

	return 0;
}  

void testCode()
{
	char *buffer = (char*)calloc(500, sizeof(char));

	//boost::timer::auto_cpu_timer t;

	outer stest1, stest2;
	inner in1;

	in1.att1 = "INNER";
	in1.att2 = 1;
	in1.att3 = 2;

	stest1.att1 = 10;
	stest1.att2 = "OUTER";
	stest1.att3 = 20;
	stest1.att4 =  in1;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			NULL
		),
		NULL
	);

	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 100; ++count)
	{
		
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);

		cdr.reset();

		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);

		cdr.reset();

	}
}


/*


/*void testDFB1()
{
	
	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* int2 = DynamicFastBuffers::TypecodeAPI::createInteger();

	DynamicFastBuffers::Typecode* st = DynamicFastBuffers::TypecodeAPI::createStruct();
	DynamicFastBuffers::TypecodeAPI::addMembers(*st, int1);
	DynamicFastBuffers::TypecodeAPI::addMembers(*st, int2);
	
	
	
	DynamicFastBuffers::Typecode* st = DynamicFastBuffers::TypecodeAPI::createStruct();
	
	DynamicFastBuffers::TypecodeAPI::addMembers(st, 
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		NULL
	);
	
	DynamicFastBuffers::Typecode* st2 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		NULL
	);
	

	// COMMENTED FOR PROVING


	//works
	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* short1 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* long1 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* float1 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* double1 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* string1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode* char1 = DynamicFastBuffers::TypecodeAPI::createCharacter();
	
	//works
	DynamicFastBuffers::Typecode* st3 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		NULL
	);
	
	
	//works
	DynamicFastBuffers::Typecode* st4 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createInteger(), 3),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		NULL
	);
	
	//works
	DynamicFastBuffers::Typecode* st5 = DynamicFastBuffers::TypecodeAPI::createUnion(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		NULL
	);

	//works
	DynamicFastBuffers::Typecode* st6 = DynamicFastBuffers::TypecodeAPI::createUnion(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createUnion(
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createInteger(), 3),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createInteger(), 3),
		NULL
	);

	//works
	DynamicFastBuffers::Typecode* st7 = DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createInteger(), 1, 4);
	DynamicFastBuffers::Typecode* st8_1 = DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createInteger(), 3, 4, 6 ,2);

	//works
	DynamicFastBuffers::Typecode* st8 = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createInteger(), 3);
	DynamicFastBuffers::Typecode* st9 = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createShort(), 5);
	DynamicFastBuffers::Typecode* st10 = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createFloat(), 7);
	DynamicFastBuffers::Typecode* st11 = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createString(), 9);
	DynamicFastBuffers::Typecode* st12 = DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createCharacter(), 12);

	

	//ERRORS:
	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* short1 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* long1 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* float1 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* double1 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* string1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode* char1 = DynamicFastBuffers::TypecodeAPI::createCharacter();

	try{
		//DynamicFastBuffers::TypecodeAPI::addMembers(char1, long1);
		//DynamicFastBuffers::TypecodeAPI::addMembers(char1, NULL);
	}catch (DynamicFastBuffers::NotEnoughParamsException e){
		cout << "EXCEPTION: " << e.what();
	}catch (DynamicFastBuffers::WrongTypeException e){
		cout << "EXCEPTION: " << e.what();
	}

	try{
		//DynamicFastBuffers::Typecode* array_1 = DynamicFastBuffers::TypecodeAPI::createArray(DynamicFastBuffers::TypecodeAPI::createInteger(), 2, 0);
		cout << "";
	}catch (DynamicFastBuffers::NotEnoughParamsException e){
		cout << "EXCEPTION: " << e.what();
	}

	//delete int1;
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(int1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(short1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(long1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(float1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(double1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(string1);
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(char1);

}

void testDFB2()
{
	char buffer[500];
	int i1=8, i2;
	int i3=7, i4;
	short s1=2, s2;
	long l1 = 3, l2;
	float f1 = 15.5, f2;
	double d1 = 23.625, d2;
	string str1 = "HOLAHELLOWORLD", str2;
	string str3 = "TST", str4;
	string str5 = "TEST", str6;
	string str7 = "TE", str8;
	string str9 = "R", str10;
	string str11 = "ABCDEF", str12;
	char c1 = 'a', c2;
	bool b1 = true, b2;
	bool b3 = false, b4;
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	DynamicFastBuffers::Typecode* int1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* short1 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* long1 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* float1 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* double1 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* string1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode* char1 = DynamicFastBuffers::TypecodeAPI::createCharacter();
	DynamicFastBuffers::Typecode* bool1 = DynamicFastBuffers::TypecodeAPI::createBoolean();
	
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_TRUE);

	
	DynamicFastBuffers::SerializerAPI::serialize((void*) &i1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &str11, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc2, &cdr);
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
	

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(int1, DynamicFastBuffers::FLAG_FALSE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(short1, DynamicFastBuffers::FLAG_FALSE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(long1, DynamicFastBuffers::FLAG_FALSE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(float1, DynamicFastBuffers::FLAG_FALSE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(double1, DynamicFastBuffers::FLAG_FALSE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(string1, DynamicFastBuffers::FLAG_FALSE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(char1, DynamicFastBuffers::FLAG_FALSE);
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_FALSE);

	
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &i2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &s2, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str12, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &s2, bc2, &cdr);
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
	

}

void testDFB3()
{
	char buffer[500];
		
	struct myStructure test1, test2;
	test1.i1 = 5;
	test1.s1 = 2;
	test1.l1 = 3;
	test1.f1 = 15.0;
	test1.d1 = 23.625;
	test1.str1 = "ABC";
	test1.c1 = 'a';
	test1.b1 = true;

	
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	DynamicFastBuffers::Typecode* struct1 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createCharacter(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);
	
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_TRUE);
	
	DynamicFastBuffers::SerializerAPI::serialize((void*) &test1, bc1, &cdr);
	
	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_FALSE);
	
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &test2, bc1, &cdr);
	

}

void testDFB4()
{
	char buffer[500];
		
	array<int,4> arr1 = {1, 2, 3, 4};
	array<int,4> arr2;
	array<short,6> arr3 = {2, 3, 5, 6, 7, 8};
	array<short,6> arr4;
	array<long,4> arr5 = {9, 10, 11, 12};
	array<long,4> arr6;
	array<float,4> arr7 = {9, 10, 11, 12};
	array<float,4> arr8;
	array<double,4> arr9 = {9, 10, 11, 12};
	array<double,4> arr10;
	array<bool,10> arr11 = {true, false, true, true, false, true, true, false, true, true};
	array<bool,10> arr12;
	array<char,10> arr13 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	array<char,10> arr14;
	//array<bool,4> arr5 = {true, false, true, true};
	//array<string,4> arr10 = {"abc", "defghij", "klmnopqrstuvwx", "yx"};
	//array<string,4> arr11;

	//int myints1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	//int myints2 [3][4];

	//long myints1 [4][4][2] = {{{1,1},{2,2},{3,3},{4,4}}, {{10,10},{11,11},{12,12},{13,13}}, {{20,20},{21,21},{22,22},{23,23}}, {{30,30},{31,31},{32,32},{33,33}}};
	//long myints2 [4][4][2];

	//short myints1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	//short myints2 [3][4];

	//float myints1 [3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	//float myints2 [3][4];

	//double myints1 [3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	//double myints2 [3][4];

	//bool myints1 [3][4] = {{true,true,true,true}, {false,false,false,false}, {true,true,false,false}};
	//bool myints2 [3][4];

	//char myints1 [5][4] = {{'-','-','-','-'},{'1','1','1','1'},{'W','W','W','W'}, {'i','i','i','i'}, {'?','?','?','?'}};
	//char myints2 [5][4];

	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	DynamicFastBuffers::Typecode* tc1 = DynamicFastBuffers::TypecodeAPI::createInteger();
	DynamicFastBuffers::Typecode* tc3 = DynamicFastBuffers::TypecodeAPI::createShort();
	DynamicFastBuffers::Typecode* tc5 = DynamicFastBuffers::TypecodeAPI::createLong();
	DynamicFastBuffers::Typecode* tc7 = DynamicFastBuffers::TypecodeAPI::createFloat();
	DynamicFastBuffers::Typecode* tc9 = DynamicFastBuffers::TypecodeAPI::createDouble();
	DynamicFastBuffers::Typecode* tc11 = DynamicFastBuffers::TypecodeAPI::createBoolean();
	DynamicFastBuffers::Typecode* tc13 = DynamicFastBuffers::TypecodeAPI::createCharacter();
	DynamicFastBuffers::Typecode* tcArray1 = DynamicFastBuffers::TypecodeAPI::createArray(tc1, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray2 = DynamicFastBuffers::TypecodeAPI::createArray(tc3, 1, 6, 0);
	DynamicFastBuffers::Typecode* tcArray3 = DynamicFastBuffers::TypecodeAPI::createArray(tc5, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray4 = DynamicFastBuffers::TypecodeAPI::createArray(tc7, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray5 = DynamicFastBuffers::TypecodeAPI::createArray(tc9, 1, 4, 0);
	DynamicFastBuffers::Typecode* tcArray6 = DynamicFastBuffers::TypecodeAPI::createArray(tc11, 1, 10, 0);
	DynamicFastBuffers::Typecode* tcArray7 = DynamicFastBuffers::TypecodeAPI::createArray(tc13, 1, 10, 0);
	//DynamicFastBuffers::Typecode* tcArray2 = DynamicFastBuffers::TypecodeAPI::createArray(tc, 2, 5, 4, 0);

	//DynamicFastBuffers::Typecode* tcString1 = DynamicFastBuffers::TypecodeAPI::createString();
	//DynamicFastBuffers::Typecode* tcArray3 = DynamicFastBuffers::TypecodeAPI::createArray(tcString1, 1, 4, 0);
	//DynamicFastBuffers::Typecode* tcArray2 = DynamicFastBuffers::TypecodeAPI::createArray(tcInteger, 2, 3, 4, 0);

	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray6, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode* bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::FLAG_TRUE);
	//DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::flag::FLAG_TRUE);
	//DynamicFastBuffers::Bytecode* bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::flag::FLAG_TRUE);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr3, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr5, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr7, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr9, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr11, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arr13, bc7, &cdr);
	//DynamicFastBuffers::SerializerAPI::serialize((void*) &myints1, bc2, &cdr);
	//DynamicFastBuffers::SerializerAPI::serialize((void*) &arr10, bc3, &cdr);

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray1, DynamicFastBuffers::FLAG_FALSE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::FLAG_FALSE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::FLAG_FALSE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray4, DynamicFastBuffers::FLAG_FALSE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray5, DynamicFastBuffers::FLAG_FALSE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray6, DynamicFastBuffers::FLAG_FALSE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray7, DynamicFastBuffers::FLAG_FALSE);
	//bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray2, DynamicFastBuffers::flag::FLAG_FALSE);
	//bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray3, DynamicFastBuffers::flag::FLAG_FALSE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr4, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr6, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr8, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr10, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr12, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr14, bc7, &cdr);
	//DynamicFastBuffers::SerializerAPI::deserialize((void*) &myints2, bc2, &cdr);
	//DynamicFastBuffers::SerializerAPI::deserialize((void*) &arr10, bc3, &cdr);

	
}

void testDFB5()
{
	//vector<int> myvector1 (10, 5);
	//vector<int> myvector2 (10);

	myStructure3 str, str2;
	str.i1 = 5;
	str.s1 = 2;
	str.members1 = vector<long>(10, 5);
	str.i2 = 10;
	str.str1 = "HELLO WORLD";

	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	DynamicFastBuffers::Typecode* struct1 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createLong(), 15),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		NULL
	);

	DynamicFastBuffers::Bytecode *bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_TRUE);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &str, bc1, &cdr);

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_FALSE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str2, bc1, &cdr);

}

void prueba()
{
	myNewStruct str;
	str.s = "abcdefghijklmnopqrstuvwxyz";
	str.s2 = "abc";
}

void testDFB6()
{
	myStructure3 str, str2;
	str.i1 = 5;
	str.s1 = 2;
	str.members1 = vector<long>(10, 15);
	str.i2 = 10;
	str.str1 = "HELLO WORLD";

	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	DynamicFastBuffers::Typecode* struct1 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createSequence(DynamicFastBuffers::TypecodeAPI::createLong(), 15),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		NULL
	);

	DynamicFastBuffers::Bytecode *bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_TRUE);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &str, bc1, &cdr);

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_FALSE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str2, bc1, &cdr);
}

void testDFB7()
{
	char buffer[500];

	char arr1[2][4] = {{'A','B','C','D'},{'E','F','G','H'}};
		
	//short arr1 [2][4] = {{1,2,3,4}, {5,6,7,8}};
	
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	myStructure4 str, str2;
	str.i1 = 5;
	str.s1 = 2;
	memcpy(str.members1, arr1, sizeof(arr1));
	str.i2 = 10;
	str.str1 = "HELLO WORLD";

	DynamicFastBuffers::Typecode* struct1 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createArray(
			DynamicFastBuffers::TypecodeAPI::createCharacter(),
			2, 2, 4, 0),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		NULL
	);

	DynamicFastBuffers::Bytecode *bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_TRUE);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &str, bc1, &cdr);

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_FALSE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &str2, bc1, &cdr);

}
*/

/*
void testPrimitiveErrors()
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
	int i1 = 5, i2;
	short s1 = 2, s2;
	long l1 = 7, l2;
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
	//DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc1, &cdr); //BAD: No reconoce tipo de dato
	DynamicFastBuffers::SerializerAPI::serialize((void*) &s1, bc2, &cdr);
	//DynamicFastBuffers::SerializerAPI::serialize((void*) &i1, bc2, &cdr); //BAD: Si metemos un entero lo deserializa sin problemas
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
	bc8 = DynamicFastBuffers::BytecodeAPI::generateBytecode(bool1, DynamicFastBuffers::FLAG_TRUE);

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
}
*/

/*void testComplexErrors()
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

	cout << "vector<long>: " << sizeof(vector<long>) << endl;

	structTest3 stestN;
	stestN.s1 = 1;
	stestN.i1 = 2;
	stestN.c1 = 'T';
	stestN.str1 = "CUATRO";
	stestN.s2 = 5;
	stestN.l1 = 6;

	structTest1 stest3;
	stest3.i1 = 5;
	stest3.s1 = 'C';
	memcpy(stest3.arr1, arr1, sizeof(arr1));
	stest3.members1 = vector<long>(5, 50);
	stest3.i2 = 10;
	stest3.s2 = 4;
	stest3.st3 = stestN;
	stest3.str1 = "INNER STRUCT";
	
	structTest2 stest1, stest2;
	stest1.s1 = 6;
	stest1.i1 = 15;
	stest1.st1 = stest3;
	memcpy(stest1.arr1, arr2, sizeof(arr2));
	stest1.i2 = 20;
	stest1.s2 = 8;
	stest1.st3 = stestN;
	stest1.str1 = "OUTER STRUCT";

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
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_TRUE);
	
	//
	// Data serialization
	//
	DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bc1, &cdr);
		
	//
	// Buffer reset
	//
	cdr.reset();

	//
	// Bytecode for deserialization
	//
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::FLAG_FALSE);
	
	//
	// Data deserialization
	//
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bc1, &cdr);
	
	//
	// Typecode deletes
	//
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(struct1);
	
}

void performanceTest()
{
	//
	// CDR Serializer declaration
	//
	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	cout << "ARCH: " << sizeof(void*)*8 << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "string: " << sizeof(string) << endl;
	cout << "void*: " << sizeof(void*) << endl;

	struct sTest1 stest1;
	stest1.c1 = 15;
	//stest1.i1 = 55;
	stest1.n = 10;
	stest1.j = 20;
	//stest1.s = "TREINTA";

	struct sTest2 stest2, stest3;
	stest2.c1 = 99;
	stest2.n = 1;
	stest2.d1 = 60;
	stest2.s2 = 5;
	stest2.entero = 8000;
	stest2.corto = 80;
	//stest2.s = "ALIGN";
	//stest2.j = 2;
	stest2.test1 = stest1;
	//stest2.s = "TRES";
	stest2.pepe = 50;

	//Time calc
	clock_t inicio, fin;
    inicio=clock();

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			//DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createShort(),
			//DynamicFastBuffers::TypecodeAPI::createString(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		//DynamicFastBuffers::TypecodeAPI::createString(),
		NULL
	);

	//
	// Bytecode for serialization
	//
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	
	//
	// Bytecode for deserialization
	//
	DynamicFastBuffers::Bytecode* bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);
	
	
	for(int i=0; i< 100000000; ++i)
	{
		//
		// Data serialization
		//
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest2, bc1, &cdr);
		
		//
		// Buffer reset
		//
		cdr.reset();

		//
		// Data deserialization
		//
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest3, bc2, &cdr);

		//
		// Buffer reset
		//
		cdr.reset();
	}

	//Time calc
	fin = clock();
	cout << "Tiempo: " << ((double)(fin-inicio)/(double)CLOCKS_PER_SEC) << "\n";

	//
	// Typecode deletes
	//
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(typecode);

	string s;
	cin >> s;

}
*/
 /*



struct stB{
	short s1;
	double d1;
};

struct stA{
	short s1;
	int i1;
	string str1;
	stB stb1;
};

struct helloWorldStruct
{
	short att1;
	int att2;
	string att3;
};

void userManualExampleCode()
{

	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	stB innerStruct;
	innerStruct.s1 = 2;
	innerStruct.d1 = 10.50;

	stA outerStruct, output;
	outerStruct.s1 = 4;
	outerStruct.i1 = 6;
	outerStruct.str1 = "HELLOWORLD";
	outerStruct.stb1 = innerStruct;

	DynamicFastBuffers::Typecode *structTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			NULL
		),
		NULL
	);

	DynamicFastBuffers::Bytecode *serializationBytecode;
	serializationBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(structTypecode, DynamicFastBuffers::flag::FLAG_TRUE);

	//DynamicFastBuffers::TypecodeAPI::deleteTypecode(structTypecode);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &outerStruct, serializationBytecode, &cdr);

	serializationBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(structTypecode, DynamicFastBuffers::flag::FLAG_FALSE);

	cdr.reset();

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &output, serializationBytecode, &cdr);

}*/

