

#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <stdio.h>
//#include <io.h>
#include <errno.h>
#include <fcntl.h>
//#include <sys\stat.h>
#include "cpp/FastCdr.h"
#include "cpp/TypecodeAPI.h"
#include "cpp/BytecodeAPI.h"
#include "cpp/SerializerAPI.h"
#include "cpp/CommonData.h"
#include <sys/stat.h>

// Boost
#include <list>
#include <string>
//#include <fstream>
#include <string>

namespace testDFB
{

struct simpleStruct_10
{
	long m1;
	long m2;
	long m3;
	long m4;
	long m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
};

inline void testSimpleStruct_10()
{
	char *buffer = (char*)calloc(500, sizeof(char));

	simpleStruct_10 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		NULL
	);

	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 1;
	stest1.m2 = 2;
	stest1.m3 = 3;
	stest1.m4 = 4;
	stest1.m5 = 5;
	stest1.m6 = 6;
	stest1.m7 = 7;
	stest1.m8 = 8;
	stest1.m9 = 9;
	stest1.m10 = 10;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	 

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();

		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);

		cdr.reset();

		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct simpleStruct_20
{
	long m1;
	long m2;
	long m3;
	long m4;
	long m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	long m17;
	long m18;
	long m19;
	long m20;
};

inline void testSimpleStruct_20()
{
	char *buffer = (char*)calloc(500, sizeof(char));

	simpleStruct_20 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		NULL
	);

	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 1;
	stest1.m2 = 2;
	stest1.m3 = 3;
	stest1.m4 = 4;
	stest1.m5 = 5;
	stest1.m6 = 6;
	stest1.m7 = 7;
	stest1.m8 = 8;
	stest1.m9 = 9;
	stest1.m10 = 10;
	stest1.m11 = 11;
	stest1.m12 = 12;
	stest1.m13 = 13;
	stest1.m14 = 14;
	stest1.m15 = 15;
	stest1.m16 = 16;
	stest1.m17 = 17;
	stest1.m18 = 18;
	stest1.m19 = 19;
	stest1.m20 = 20;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	 

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();

		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);

		cdr.reset();

		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct simpleStruct_30
{
	long m1;
	long m2;
	long m3;
	long m4;
	long m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	long m17;
	long m18;
	long m19;
	long m20;
	long m21;
	long m22;
	long m23;
	long m24;
	long m25;
	long m26;
	long m27;
	long m28;
	long m29;
	long m30;
};

inline void testSimpleStruct_30()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	simpleStruct_30 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 1;
	stest1.m2 = 2;
	stest1.m3 = 3;
	stest1.m4 = 4;
	stest1.m5 = 5;
	stest1.m6 = 6;
	stest1.m7 = 7;
	stest1.m8 = 8;
	stest1.m9 = 9;
	stest1.m10 = 10;
	stest1.m11 = 11;
	stest1.m12 = 12;
	stest1.m13 = 13;
	stest1.m14 = 14;
	stest1.m15 = 15;
	stest1.m16 = 16;
	stest1.m17 = 17;
	stest1.m18 = 18;
	stest1.m19 = 19;
	stest1.m20 = 20;
	stest1.m21 = 21;
	stest1.m22 = 22;
	stest1.m23 = 23;
	stest1.m24 = 24;
	stest1.m25 = 25;
	stest1.m26 = 26;
	stest1.m27 = 27;
	stest1.m28 = 28;
	stest1.m29 = 29;
	stest1.m30 = 30;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct simpleStruct_40
{
	long m1;
	long m2;
	long m3;
	long m4;
	long m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	long m17;
	long m18;
	long m19;
	long m20;
	long m21;
	long m22;
	long m23;
	long m24;
	long m25;
	long m26;
	long m27;
	long m28;
	long m29;
	long m30;
	long m31;
	long m32;
	long m33;
	long m34;
	long m35;
	long m36;
	long m37;
	long m38;
	long m39;
	long m40;
};

inline void testSimpleStruct_40()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	simpleStruct_40 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 1;
	stest1.m2 = 2;
	stest1.m3 = 3;
	stest1.m4 = 4;
	stest1.m5 = 5;
	stest1.m6 = 6;
	stest1.m7 = 7;
	stest1.m8 = 8;
	stest1.m9 = 9;
	stest1.m10 = 10;
	stest1.m11 = 11;
	stest1.m12 = 12;
	stest1.m13 = 13;
	stest1.m14 = 14;
	stest1.m15 = 15;
	stest1.m16 = 16;
	stest1.m17 = 17;
	stest1.m18 = 18;
	stest1.m19 = 19;
	stest1.m20 = 20;
	stest1.m21 = 21;
	stest1.m22 = 22;
	stest1.m23 = 23;
	stest1.m24 = 24;
	stest1.m25 = 25;
	stest1.m26 = 26;
	stest1.m27 = 27;
	stest1.m28 = 28;
	stest1.m29 = 29;
	stest1.m30 = 30;
	stest1.m31 = 31;
	stest1.m32 = 32;
	stest1.m33 = 33;
	stest1.m34 = 34;
	stest1.m35 = 35;
	stest1.m36 = 36;
	stest1.m37 = 37;
	stest1.m38 = 38;
	stest1.m39 = 39;
	stest1.m40 = 40;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct simpleStruct_50
{
	long m1;
	long m2;
	long m3;
	long m4;
	long m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	long m17;
	long m18;
	long m19;
	long m20;
	long m21;
	long m22;
	long m23;
	long m24;
	long m25;
	long m26;
	long m27;
	long m28;
	long m29;
	long m30;
	long m31;
	long m32;
	long m33;
	long m34;
	long m35;
	long m36;
	long m37;
	long m38;
	long m39;
	long m40;
	long m41;
	long m42;
	long m43;
	long m44;
	long m45;
	long m46;
	long m47;
	long m48;
	long m49;
	long m50;
};

inline void testSimpleStruct_50()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	simpleStruct_50 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 1;
	stest1.m2 = 2;
	stest1.m3 = 3;
	stest1.m4 = 4;
	stest1.m5 = 5;
	stest1.m6 = 6;
	stest1.m7 = 7;
	stest1.m8 = 8;
	stest1.m9 = 9;
	stest1.m10 = 10;
	stest1.m11 = 11;
	stest1.m12 = 12;
	stest1.m13 = 13;
	stest1.m14 = 14;
	stest1.m15 = 15;
	stest1.m16 = 16;
	stest1.m17 = 17;
	stest1.m18 = 18;
	stest1.m19 = 19;
	stest1.m20 = 20;
	stest1.m21 = 21;
	stest1.m22 = 22;
	stest1.m23 = 23;
	stest1.m24 = 24;
	stest1.m25 = 25;
	stest1.m26 = 26;
	stest1.m27 = 27;
	stest1.m28 = 28;
	stest1.m29 = 29;
	stest1.m30 = 30;
	stest1.m31 = 31;
	stest1.m32 = 32;
	stest1.m33 = 33;
	stest1.m34 = 34;
	stest1.m35 = 35;
	stest1.m36 = 36;
	stest1.m37 = 37;
	stest1.m38 = 38;
	stest1.m39 = 39;
	stest1.m40 = 40;
	stest1.m41 = 41;
	stest1.m42 = 42;
	stest1.m43 = 43;
	stest1.m44 = 44;
	stest1.m45 = 45;
	stest1.m46 = 46;
	stest1.m47 = 47;
	stest1.m48 = 48;
	stest1.m49 = 49;
	stest1.m50 = 50;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

inline void simpleTestDFB()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStruct_10();
	}
	cout << endl << endl;

	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStruct_20();
	}
	cout << endl << endl;

	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStruct_30();
	}
	cout << endl << endl;

	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStruct_40();
	}
	cout << endl << endl;

	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStruct_50();
	}

	cout << "---------------------------------------------------------------------------------------------" << endl;
}

struct complexStruct_2
{
	int m1;
	int m2;
	long m3;
	long m4;
	std::string m5;
	std::string m6;
	float m7;
	float m8;
	double m9;
	double m10;
	bool m11;
	bool m12;
};

inline void testComplexStruct_2()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	complexStruct_2 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);
	
	cout << "Typecode generado." << endl;


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);
	
	cout << "Bytecode generado." << endl;

	stest1.m1 = 0;
	stest1.m2 = 1;
	stest1.m3 = 0;
	stest1.m4 = 1;
	stest1.m5 = "TEST 0";
	stest1.m6 = "TEST 1";
	stest1.m7 = 0.0;
	stest1.m8 = 1.1;
	stest1.m9 = 0.0;
	stest1.m10 = 1.1;
	stest1.m11 = true;
	stest1.m12 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct complexStruct_4
{
	int m1;
	int m2;
	int m3;
	int m4;
	long m5;
	long m6;
	long m7;
	long m8;
	std::string m9;
	std::string m10;
	std::string m11;
	std::string m12;
	float m13;
	float m14;
	float m15;
	float m16;
	double m17;
	double m18;
	double m19;
	double m20;
	bool m21;
	bool m22;
	bool m23;
	bool m24;
};

inline void testComplexStruct_4()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	complexStruct_4 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 0;
	stest1.m2 = 1;
	stest1.m3 = 2;
	stest1.m4 = 3;
	stest1.m5 = 0;
	stest1.m6 = 1;
	stest1.m7 = 2;
	stest1.m8 = 3;
	stest1.m9 = "TEST 0";
	stest1.m10 = "TEST 1";
	stest1.m11 = "TEST 2";
	stest1.m12 = "TEST 3";
	stest1.m13 = 0.0;
	stest1.m14 = 1.1;
	stest1.m15 = 2.2;
	stest1.m16 = 3.3;
	stest1.m17 = 0.0;
	stest1.m18 = 1.1;
	stest1.m19 = 2.2;
	stest1.m20 = 3.3;
	stest1.m21 = true;
	stest1.m22 = true;
	stest1.m23 = true;
	stest1.m24 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct complexStruct_6
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
	long m7;
	long m8;
	long m9;
	long m10;
	long m11;
	long m12;
	std::string m13;
	std::string m14;
	std::string m15;
	std::string m16;
	std::string m17;
	std::string m18;
	float m19;
	float m20;
	float m21;
	float m22;
	float m23;
	float m24;
	double m25;
	double m26;
	double m27;
	double m28;
	double m29;
	double m30;
	bool m31;
	bool m32;
	bool m33;
	bool m34;
	bool m35;
	bool m36;
};

inline void testComplexStruct_6()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	complexStruct_6 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 0;
	stest1.m2 = 1;
	stest1.m3 = 2;
	stest1.m4 = 3;
	stest1.m5 = 4;
	stest1.m6 = 5;
	stest1.m7 = 0;
	stest1.m8 = 1;
	stest1.m9 = 2;
	stest1.m10 = 3;
	stest1.m11 = 4;
	stest1.m12 = 5;
	stest1.m13 = "TEST 0";
	stest1.m14 = "TEST 1";
	stest1.m15 = "TEST 2";
	stest1.m16 = "TEST 3";
	stest1.m17 = "TEST 4";
	stest1.m18 = "TEST 5";
	stest1.m19 = 0.0;
	stest1.m20 = 1.1;
	stest1.m21 = 2.2;
	stest1.m22 = 3.3;
	stest1.m23 = 4.4;
	stest1.m24 = 5.5;
	stest1.m25 = 0.0;
	stest1.m26 = 1.1;
	stest1.m27 = 2.2;
	stest1.m28 = 3.3;
	stest1.m29 = 4.4;
	stest1.m30 = 5.5;
	stest1.m31 = true;
	stest1.m32 = true;
	stest1.m33 = true;
	stest1.m34 = true;
	stest1.m35 = true;
	stest1.m36 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct complexStruct_8
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
	int m7;
	int m8;
	long m9;
	long m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	std::string m17;
	std::string m18;
	std::string m19;
	std::string m20;
	std::string m21;
	std::string m22;
	std::string m23;
	std::string m24;
	float m25;
	float m26;
	float m27;
	float m28;
	float m29;
	float m30;
	float m31;
	float m32;
	double m33;
	double m34;
	double m35;
	double m36;
	double m37;
	double m38;
	double m39;
	double m40;
	bool m41;
	bool m42;
	bool m43;
	bool m44;
	bool m45;
	bool m46;
	bool m47;
	bool m48;
};

inline void testComplexStruct_8()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	complexStruct_8 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 0;
	stest1.m2 = 1;
	stest1.m3 = 2;
	stest1.m4 = 3;
	stest1.m5 = 4;
	stest1.m6 = 5;
	stest1.m7 = 6;
	stest1.m8 = 7;
	stest1.m9 = 0;
	stest1.m10 = 1;
	stest1.m11 = 2;
	stest1.m12 = 3;
	stest1.m13 = 4;
	stest1.m14 = 5;
	stest1.m15 = 6;
	stest1.m16 = 7;
	stest1.m17 = "TEST 0";
	stest1.m18 = "TEST 1";
	stest1.m19 = "TEST 2";
	stest1.m20 = "TEST 3";
	stest1.m21 = "TEST 4";
	stest1.m22 = "TEST 5";
	stest1.m23 = "TEST 6";
	stest1.m24 = "TEST 7";
	stest1.m25 = 0.0;
	stest1.m26 = 1.1;
	stest1.m27 = 2.2;
	stest1.m28 = 3.3;
	stest1.m29 = 4.4;
	stest1.m30 = 5.5;
	stest1.m31 = 6.6;
	stest1.m32 = 7.7;
	stest1.m33 = 0.0;
	stest1.m34 = 1.1;
	stest1.m35 = 2.2;
	stest1.m36 = 3.3;
	stest1.m37 = 4.4;
	stest1.m38 = 5.5;
	stest1.m39 = 6.6;
	stest1.m40 = 7.7;
	stest1.m41 = true;
	stest1.m42 = true;
	stest1.m43 = true;
	stest1.m44 = true;
	stest1.m45 = true;
	stest1.m46 = true;
	stest1.m47 = true;
	stest1.m48 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct complexStruct_10
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
	int m7;
	int m8;
	int m9;
	int m10;
	long m11;
	long m12;
	long m13;
	long m14;
	long m15;
	long m16;
	long m17;
	long m18;
	long m19;
	long m20;
	std::string m21;
	std::string m22;
	std::string m23;
	std::string m24;
	std::string m25;
	std::string m26;
	std::string m27;
	std::string m28;
	std::string m29;
	std::string m30;
	float m31;
	float m32;
	float m33;
	float m34;
	float m35;
	float m36;
	float m37;
	float m38;
	float m39;
	float m40;
	double m41;
	double m42;
	double m43;
	double m44;
	double m45;
	double m46;
	double m47;
	double m48;
	double m49;
	double m50;
	bool m51;
	bool m52;
	bool m53;
	bool m54;
	bool m55;
	bool m56;
	bool m57;
	bool m58;
	bool m59;
	bool m60;
};

inline void testComplexStruct_10()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	complexStruct_10 stest1, stest2;

	DynamicFastBuffers::Typecode *typecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::FLAG_FALSE);

	stest1.m1 = 0;
	stest1.m2 = 1;
	stest1.m3 = 2;
	stest1.m4 = 3;
	stest1.m5 = 4;
	stest1.m6 = 5;
	stest1.m7 = 6;
	stest1.m8 = 7;
	stest1.m9 = 8;
	stest1.m10 = 9;
	stest1.m11 = 0;
	stest1.m12 = 1;
	stest1.m13 = 2;
	stest1.m14 = 3;
	stest1.m15 = 4;
	stest1.m16 = 5;
	stest1.m17 = 6;
	stest1.m18 = 7;
	stest1.m19 = 8;
	stest1.m20 = 9;
	stest1.m21 = "TEST 0";
	stest1.m22 = "TEST 1";
	stest1.m23 = "TEST 2";
	stest1.m24 = "TEST 3";
	stest1.m25 = "TEST 4";
	stest1.m26 = "TEST 5";
	stest1.m27 = "TEST 6";
	stest1.m28 = "TEST 7";
	stest1.m29 = "TEST 8";
	stest1.m30 = "TEST 9";
	stest1.m31 = 0.0;
	stest1.m32 = 1.1;
	stest1.m33 = 2.2;
	stest1.m34 = 3.3;
	stest1.m35 = 4.4;
	stest1.m36 = 5.5;
	stest1.m37 = 6.6;
	stest1.m38 = 7.7;
	stest1.m39 = 8.8;
	stest1.m40 = 9.9;
	stest1.m41 = 0.0;
	stest1.m42 = 1.1;
	stest1.m43 = 2.2;
	stest1.m44 = 3.3;
	stest1.m45 = 4.4;
	stest1.m46 = 5.5;
	stest1.m47 = 6.6;
	stest1.m48 = 7.7;
	stest1.m49 = 8.8;
	stest1.m50 = 9.9;
	stest1.m51 = true;
	stest1.m52 = true;
	stest1.m53 = true;
	stest1.m54 = true;
	stest1.m55 = true;
	stest1.m56 = true;
	stest1.m57 = true;
	stest1.m58 = true;
	stest1.m59 = true;
	stest1.m60 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

inline void complexTestDFB()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStruct_2();
	}
	cout << endl << endl;

	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStruct_4();
	}
	cout << endl << endl;

	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStruct_6();
	}
	cout << endl << endl;

	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStruct_8();
	}
	cout << endl << endl;

	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStruct_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

struct innersimpleStruct_2
{
	int m1;
	int m2;
};

struct outersimpleStruct_2
{
	innersimpleStruct_2 m1;
	innersimpleStruct_2 m2;
};

inline void testinnerSimpleStruct_2()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outersimpleStruct_2 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		NULL
	);
	
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innersimpleStruct_2 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;

	struct innersimpleStruct_2 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;

	stest1.m1 = inner1;
	stest1.m2 = inner2;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innersimpleStruct_4
{
	int m1;
	int m2;
	int m3;
	int m4;
};

struct outersimpleStruct_4
{
	innersimpleStruct_4 m1;
	innersimpleStruct_4 m2;
	innersimpleStruct_4 m3;
	innersimpleStruct_4 m4;
};

inline void testinnerSimpleStruct_4()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outersimpleStruct_4 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innersimpleStruct_4 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;

	struct innersimpleStruct_4 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;
	inner2.m3 = 3;
	inner2.m4 = 4;

	struct innersimpleStruct_4 inner3;
	inner3.m1 = 1;
	inner3.m2 = 2;
	inner3.m3 = 3;
	inner3.m4 = 4;

	struct innersimpleStruct_4 inner4;
	inner4.m1 = 1;
	inner4.m2 = 2;
	inner4.m3 = 3;
	inner4.m4 = 4;

	stest1.m1 = inner1;
	stest1.m2 = inner2;
	stest1.m3 = inner3;
	stest1.m4 = inner4;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innersimpleStruct_6
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
};

struct outersimpleStruct_6
{
	innersimpleStruct_6 m1;
	innersimpleStruct_6 m2;
	innersimpleStruct_6 m3;
	innersimpleStruct_6 m4;
	innersimpleStruct_6 m5;
	innersimpleStruct_6 m6;
};

inline void testinnerSimpleStruct_6()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outersimpleStruct_6 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innersimpleStruct_6 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;

	struct innersimpleStruct_6 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;
	inner2.m3 = 3;
	inner2.m4 = 4;
	inner2.m5 = 5;
	inner2.m6 = 6;

	struct innersimpleStruct_6 inner3;
	inner3.m1 = 1;
	inner3.m2 = 2;
	inner3.m3 = 3;
	inner3.m4 = 4;
	inner3.m5 = 5;
	inner3.m6 = 6;

	struct innersimpleStruct_6 inner4;
	inner4.m1 = 1;
	inner4.m2 = 2;
	inner4.m3 = 3;
	inner4.m4 = 4;
	inner4.m5 = 5;
	inner4.m6 = 6;

	struct innersimpleStruct_6 inner5;
	inner5.m1 = 1;
	inner5.m2 = 2;
	inner5.m3 = 3;
	inner5.m4 = 4;
	inner5.m5 = 5;
	inner5.m6 = 6;

	struct innersimpleStruct_6 inner6;
	inner6.m1 = 1;
	inner6.m2 = 2;
	inner6.m3 = 3;
	inner6.m4 = 4;
	inner6.m5 = 5;
	inner6.m6 = 6;

	stest1.m1 = inner1;
	stest1.m2 = inner2;
	stest1.m3 = inner3;
	stest1.m4 = inner4;
	stest1.m5 = inner5;
	stest1.m6 = inner6;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innersimpleStruct_8
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
	int m7;
	int m8;
};

struct outersimpleStruct_8
{
	innersimpleStruct_8 m1;
	innersimpleStruct_8 m2;
	innersimpleStruct_8 m3;
	innersimpleStruct_8 m4;
	innersimpleStruct_8 m5;
	innersimpleStruct_8 m6;
	innersimpleStruct_8 m7;
	innersimpleStruct_8 m8;
};

inline void testinnerSimpleStruct_8()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outersimpleStruct_8 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innersimpleStruct_8 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;
	inner1.m7 = 7;
	inner1.m8 = 8;

	struct innersimpleStruct_8 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;
	inner2.m3 = 3;
	inner2.m4 = 4;
	inner2.m5 = 5;
	inner2.m6 = 6;
	inner2.m7 = 7;
	inner2.m8 = 8;

	struct innersimpleStruct_8 inner3;
	inner3.m1 = 1;
	inner3.m2 = 2;
	inner3.m3 = 3;
	inner3.m4 = 4;
	inner3.m5 = 5;
	inner3.m6 = 6;
	inner3.m7 = 7;
	inner3.m8 = 8;

	struct innersimpleStruct_8 inner4;
	inner4.m1 = 1;
	inner4.m2 = 2;
	inner4.m3 = 3;
	inner4.m4 = 4;
	inner4.m5 = 5;
	inner4.m6 = 6;
	inner4.m7 = 7;
	inner4.m8 = 8;

	struct innersimpleStruct_8 inner5;
	inner5.m1 = 1;
	inner5.m2 = 2;
	inner5.m3 = 3;
	inner5.m4 = 4;
	inner5.m5 = 5;
	inner5.m6 = 6;
	inner5.m7 = 7;
	inner5.m8 = 8;

	struct innersimpleStruct_8 inner6;
	inner6.m1 = 1;
	inner6.m2 = 2;
	inner6.m3 = 3;
	inner6.m4 = 4;
	inner6.m5 = 5;
	inner6.m6 = 6;
	inner6.m7 = 7;
	inner6.m8 = 8;

	struct innersimpleStruct_8 inner7;
	inner7.m1 = 1;
	inner7.m2 = 2;
	inner7.m3 = 3;
	inner7.m4 = 4;
	inner7.m5 = 5;
	inner7.m6 = 6;
	inner7.m7 = 7;
	inner7.m8 = 8;

	struct innersimpleStruct_8 inner8;
	inner8.m1 = 1;
	inner8.m2 = 2;
	inner8.m3 = 3;
	inner8.m4 = 4;
	inner8.m5 = 5;
	inner8.m6 = 6;
	inner8.m7 = 7;
	inner8.m8 = 8;

	stest1.m1 = inner1;
	stest1.m2 = inner2;
	stest1.m3 = inner3;
	stest1.m4 = inner4;
	stest1.m5 = inner5;
	stest1.m6 = inner6;
	stest1.m7 = inner7;
	stest1.m8 = inner8;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innersimpleStruct_10
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int m6;
	int m7;
	int m8;
	int m9;
	int m10;
};

struct outersimpleStruct_10
{
	innersimpleStruct_10 m1;
	innersimpleStruct_10 m2;
	innersimpleStruct_10 m3;
	innersimpleStruct_10 m4;
	innersimpleStruct_10 m5;
	innersimpleStruct_10 m6;
	innersimpleStruct_10 m7;
	innersimpleStruct_10 m8;
	innersimpleStruct_10 m9;
	innersimpleStruct_10 m10;
};

inline void testinnerSimpleStruct_10()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outersimpleStruct_10 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			NULL
		),
		NULL
	);

	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innersimpleStruct_10 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;
	inner1.m7 = 7;
	inner1.m8 = 8;
	inner1.m9 = 9;
	inner1.m10 = 10;

	struct innersimpleStruct_10 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;
	inner2.m3 = 3;
	inner2.m4 = 4;
	inner2.m5 = 5;
	inner2.m6 = 6;
	inner2.m7 = 7;
	inner2.m8 = 8;
	inner2.m9 = 9;
	inner2.m10 = 10;

	struct innersimpleStruct_10 inner3;
	inner3.m1 = 1;
	inner3.m2 = 2;
	inner3.m3 = 3;
	inner3.m4 = 4;
	inner3.m5 = 5;
	inner3.m6 = 6;
	inner3.m7 = 7;
	inner3.m8 = 8;
	inner3.m9 = 9;
	inner3.m10 = 10;

	struct innersimpleStruct_10 inner4;
	inner4.m1 = 1;
	inner4.m2 = 2;
	inner4.m3 = 3;
	inner4.m4 = 4;
	inner4.m5 = 5;
	inner4.m6 = 6;
	inner4.m7 = 7;
	inner4.m8 = 8;
	inner4.m9 = 9;
	inner4.m10 = 10;

	struct innersimpleStruct_10 inner5;
	inner5.m1 = 1;
	inner5.m2 = 2;
	inner5.m3 = 3;
	inner5.m4 = 4;
	inner5.m5 = 5;
	inner5.m6 = 6;
	inner5.m7 = 7;
	inner5.m8 = 8;
	inner5.m9 = 9;
	inner5.m10 = 10;

	struct innersimpleStruct_10 inner6;
	inner6.m1 = 1;
	inner6.m2 = 2;
	inner6.m3 = 3;
	inner6.m4 = 4;
	inner6.m5 = 5;
	inner6.m6 = 6;
	inner6.m7 = 7;
	inner6.m8 = 8;
	inner6.m9 = 9;
	inner6.m10 = 10;

	struct innersimpleStruct_10 inner7;
	inner7.m1 = 1;
	inner7.m2 = 2;
	inner7.m3 = 3;
	inner7.m4 = 4;
	inner7.m5 = 5;
	inner7.m6 = 6;
	inner7.m7 = 7;
	inner7.m8 = 8;
	inner7.m9 = 9;
	inner7.m10 = 10;

	struct innersimpleStruct_10 inner8;
	inner8.m1 = 1;
	inner8.m2 = 2;
	inner8.m3 = 3;
	inner8.m4 = 4;
	inner8.m5 = 5;
	inner8.m6 = 6;
	inner8.m7 = 7;
	inner8.m8 = 8;
	inner8.m9 = 9;
	inner8.m10 = 10;

	struct innersimpleStruct_10 inner9;
	inner9.m1 = 1;
	inner9.m2 = 2;
	inner9.m3 = 3;
	inner9.m4 = 4;
	inner9.m5 = 5;
	inner9.m6 = 6;
	inner9.m7 = 7;
	inner9.m8 = 8;
	inner9.m9 = 9;
	inner9.m10 = 10;

	struct innersimpleStruct_10 inner10;
	inner10.m1 = 1;
	inner10.m2 = 2;
	inner10.m3 = 3;
	inner10.m4 = 4;
	inner10.m5 = 5;
	inner10.m6 = 6;
	inner10.m7 = 7;
	inner10.m8 = 8;
	inner10.m9 = 9;
	inner10.m10 = 10;

	stest1.m1 = inner1;
	stest1.m2 = inner2;
	stest1.m3 = inner3;
	stest1.m4 = inner4;
	stest1.m5 = inner5;
	stest1.m6 = inner6;
	stest1.m7 = inner7;
	stest1.m8 = inner8;
	stest1.m9 = inner9;
	stest1.m10 = inner10;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

inline void innerSimpleTestDBF()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerSimpleStruct_2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerSimpleStruct_4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerSimpleStruct_6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerSimpleStruct_8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerSimpleStruct_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

struct innercomplexStruct_1
{
	int m1;
	long m2;
	std::string m3;
	float m4;
	double m5;
	bool m6;
};

struct outercomplexStruct_1
{
	int m1;
	long m2;
	std::string m3;
	innercomplexStruct_1 m4;
	float m5;
	double m6;
	bool m7;
};

inline void testinnerComplexStruct_1()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outercomplexStruct_1 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innercomplexStruct_1 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = "INNER TEST 3";
	inner1.m4 = 5.10;
	inner1.m5 = 5.9;
	inner1.m6 = false;

	stest1.m1 = 101;
	stest1.m2 = 102;
	stest1.m3 = "OUTER TEST 3";
	stest1.m4 = inner1;
	stest1.m5 = 105.10;
	stest1.m6 = 107.8;
	stest1.m7 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innercomplexStruct_2
{
	int m1;
	int m2;
	long m3;
	long m4;
	std::string m5;
	std::string m6;
	float m7;
	float m8;
	double m9;
	double m10;
	bool m11;
	bool m12;
};

struct outercomplexStruct_2
{
	int m1;
	long m2;
	std::string m3;
	innercomplexStruct_2 m4;
	float m5;
	double m6;
	bool m7;
	long m8;
	std::string m9;
	innercomplexStruct_2 m10;
	float m11;
	double m12;
	bool m13;
};

inline void testinnerComplexStruct_2()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outercomplexStruct_2 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innercomplexStruct_2 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = "INNER TEST 5";
	inner1.m6 = "INNER TEST 6";
	inner1.m7 = 8.13;
	inner1.m8 = 9.14;
	inner1.m9 = 9.13;
	inner1.m10 = 10.14;
	inner1.m11 = false;
	inner1.m12 = false;

	struct innercomplexStruct_2 inner2;
	inner2.m1 = 13;
	inner2.m2 = 14;
	inner2.m3 = 15;
	inner2.m4 = 16;
	inner2.m5 = "INNER TEST 17";
	inner2.m6 = "INNER TEST 18";
	inner2.m7 = 20.25;
	inner2.m8 = 21.26;
	inner2.m9 = 21.25;
	inner2.m10 = 22.26;
	inner2.m11 = false;
	inner2.m12 = false;

	stest1.m1 = 101;
	stest1.m2 = 102;
	stest1.m3 = "OUTER TEST 3";
	stest1.m4 = inner1;
	stest1.m5 = 105.10;
	stest1.m6 = 107.8;
	stest1.m7 = true;
	stest1.m8 = 108;
	stest1.m9 = "OUTER TEST 9";
	stest1.m10 = inner2;
	stest1.m11 = 1011.16;
	stest1.m12 = 1013.14;
	stest1.m13 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innercomplexStruct_3
{
	int m1;
	int m2;
	int m3;
	long m4;
	long m5;
	long m6;
	std::string m7;
	std::string m8;
	std::string m9;
	float m10;
	float m11;
	float m12;
	double m13;
	double m14;
	double m15;
	bool m16;
	bool m17;
	bool m18;
};

struct outercomplexStruct_3
{
	int m1;
	long m2;
	std::string m3;
	innercomplexStruct_3 m4;
	float m5;
	double m6;
	bool m7;
	long m8;
	std::string m9;
	innercomplexStruct_3 m10;
	float m11;
	double m12;
	bool m13;
	std::string m14;
	innercomplexStruct_3 m15;
	float m16;
	double m17;
	bool m18;
};

inline void testinnerComplexStruct_3()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outercomplexStruct_3 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innercomplexStruct_3 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;
	inner1.m7 = "INNER TEST 7";
	inner1.m8 = "INNER TEST 8";
	inner1.m9 = "INNER TEST 9";
	inner1.m10 = 11.16;
	inner1.m11 = 12.17;
	inner1.m12 = 13.18;
	inner1.m13 = 13.17;
	inner1.m14 = 14.18;
	inner1.m15 = 15.19;
	inner1.m16 = false;
	inner1.m17 = false;
	inner1.m18 = false;

	struct innercomplexStruct_3 inner2;
	inner2.m1 = 19;
	inner2.m2 = 20;
	inner2.m3 = 21;
	inner2.m4 = 22;
	inner2.m5 = 23;
	inner2.m6 = 24;
	inner2.m7 = "INNER TEST 25";
	inner2.m8 = "INNER TEST 26";
	inner2.m9 = "INNER TEST 27";
	inner2.m10 = 29.34;
	inner2.m11 = 30.35;
	inner2.m12 = 31.36;
	inner2.m13 = 31.35;
	inner2.m14 = 32.36;
	inner2.m15 = 33.37;
	inner2.m16 = false;
	inner2.m17 = false;
	inner2.m18 = false;

	struct innercomplexStruct_3 inner3;
	inner3.m1 = 37;
	inner3.m2 = 38;
	inner3.m3 = 39;
	inner3.m4 = 40;
	inner3.m5 = 41;
	inner3.m6 = 42;
	inner3.m7 = "INNER TEST 43";
	inner3.m8 = "INNER TEST 44";
	inner3.m9 = "INNER TEST 45";
	inner3.m10 = 47.52;
	inner3.m11 = 48.53;
	inner3.m12 = 49.54;
	inner3.m13 = 49.53;
	inner3.m14 = 50.54;
	inner3.m15 = 51.55;
	inner3.m16 = false;
	inner3.m17 = false;
	inner3.m18 = false;

	stest1.m1 = 101;
	stest1.m2 = 102;
	stest1.m3 = "OUTER TEST 3";
	stest1.m4 = inner1;
	stest1.m5 = 105.10;
	stest1.m6 = 107.8;
	stest1.m7 = true;
	stest1.m8 = 108;
	stest1.m9 = "OUTER TEST 9";
	stest1.m10 = inner2;
	stest1.m11 = 1011.16;
	stest1.m12 = 1013.14;
	stest1.m13 = true;
	stest1.m14 = "OUTER TEST 14";
	stest1.m15 = inner3;
	stest1.m16 = 1016.21;
	stest1.m17 = 1018.19;
	stest1.m18 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innercomplexStruct_4
{
	int m1;
	int m2;
	int m3;
	int m4;
	long m5;
	long m6;
	long m7;
	long m8;
	std::string m9;
	std::string m10;
	std::string m11;
	std::string m12;
	float m13;
	float m14;
	float m15;
	float m16;
	double m17;
	double m18;
	double m19;
	double m20;
	bool m21;
	bool m22;
	bool m23;
	bool m24;
};

struct outercomplexStruct_4
{
	int m1;
	long m2;
	std::string m3;
	innercomplexStruct_4 m4;
	float m5;
	double m6;
	bool m7;
	long m8;
	std::string m9;
	innercomplexStruct_4 m10;
	float m11;
	double m12;
	bool m13;
	std::string m14;
	innercomplexStruct_4 m15;
	float m16;
	double m17;
	bool m18;
	innercomplexStruct_4 m19;
	float m20;
	double m21;
	bool m22;
};

inline void testinnerComplexStruct_4()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outercomplexStruct_4 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innercomplexStruct_4 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;
	inner1.m7 = 7;
	inner1.m8 = 8;
	inner1.m9 = "INNER TEST 9";
	inner1.m10 = "INNER TEST 10";
	inner1.m11 = "INNER TEST 11";
	inner1.m12 = "INNER TEST 12";
	inner1.m13 = 14.19;
	inner1.m14 = 15.20;
	inner1.m15 = 16.21;
	inner1.m16 = 17.22;
	inner1.m17 = 17.21;
	inner1.m18 = 18.22;
	inner1.m19 = 19.23;
	inner1.m20 = 20.24;
	inner1.m21 = false;
	inner1.m22 = false;
	inner1.m23 = false;
	inner1.m24 = false;

	struct innercomplexStruct_4 inner2;
	inner2.m1 = 25;
	inner2.m2 = 26;
	inner2.m3 = 27;
	inner2.m4 = 28;
	inner2.m5 = 29;
	inner2.m6 = 30;
	inner2.m7 = 31;
	inner2.m8 = 32;
	inner2.m9 = "INNER TEST 33";
	inner2.m10 = "INNER TEST 34";
	inner2.m11 = "INNER TEST 35";
	inner2.m12 = "INNER TEST 36";
	inner2.m13 = 38.43;
	inner2.m14 = 39.44;
	inner2.m15 = 40.45;
	inner2.m16 = 41.46;
	inner2.m17 = 41.45;
	inner2.m18 = 42.46;
	inner2.m19 = 43.47;
	inner2.m20 = 44.48;
	inner2.m21 = false;
	inner2.m22 = false;
	inner2.m23 = false;
	inner2.m24 = false;

	struct innercomplexStruct_4 inner3;
	inner3.m1 = 49;
	inner3.m2 = 50;
	inner3.m3 = 51;
	inner3.m4 = 52;
	inner3.m5 = 53;
	inner3.m6 = 54;
	inner3.m7 = 55;
	inner3.m8 = 56;
	inner3.m9 = "INNER TEST 57";
	inner3.m10 = "INNER TEST 58";
	inner3.m11 = "INNER TEST 59";
	inner3.m12 = "INNER TEST 60";
	inner3.m13 = 62.67;
	inner3.m14 = 63.68;
	inner3.m15 = 64.69;
	inner3.m16 = 65.70;
	inner3.m17 = 65.69;
	inner3.m18 = 66.70;
	inner3.m19 = 67.71;
	inner3.m20 = 68.72;
	inner3.m21 = false;
	inner3.m22 = false;
	inner3.m23 = false;
	inner3.m24 = false;

	struct innercomplexStruct_4 inner4;
	inner4.m1 = 73;
	inner4.m2 = 74;
	inner4.m3 = 75;
	inner4.m4 = 76;
	inner4.m5 = 77;
	inner4.m6 = 78;
	inner4.m7 = 79;
	inner4.m8 = 80;
	inner4.m9 = "INNER TEST 81";
	inner4.m10 = "INNER TEST 82";
	inner4.m11 = "INNER TEST 83";
	inner4.m12 = "INNER TEST 84";
	inner4.m13 = 86.91;
	inner4.m14 = 87.92;
	inner4.m15 = 88.93;
	inner4.m16 = 89.94;
	inner4.m17 = 89.93;
	inner4.m18 = 90.94;
	inner4.m19 = 91.95;
	inner4.m20 = 92.96;
	inner4.m21 = false;
	inner4.m22 = false;
	inner4.m23 = false;
	inner4.m24 = false;

	stest1.m1 = 101;
	stest1.m2 = 102;
	stest1.m3 = "OUTER TEST 3";
	stest1.m4 = inner1;
	stest1.m5 = 105.10;
	stest1.m6 = 107.8;
	stest1.m7 = true;
	stest1.m8 = 108;
	stest1.m9 = "OUTER TEST 9";
	stest1.m10 = inner2;
	stest1.m11 = 1011.16;
	stest1.m12 = 1013.14;
	stest1.m13 = true;
	stest1.m14 = "OUTER TEST 14";
	stest1.m15 = inner3;
	stest1.m16 = 1016.21;
	stest1.m17 = 1018.19;
	stest1.m18 = true;
	stest1.m19 = inner4;
	stest1.m20 = 1020.25;
	stest1.m21 = 1022.23;
	stest1.m22 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct innercomplexStruct_5
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	long m6;
	long m7;
	long m8;
	long m9;
	long m10;
	std::string m11;
	std::string m12;
	std::string m13;
	std::string m14;
	std::string m15;
	float m16;
	float m17;
	float m18;
	float m19;
	float m20;
	double m21;
	double m22;
	double m23;
	double m24;
	double m25;
	bool m26;
	bool m27;
	bool m28;
	bool m29;
	bool m30;
};

struct outercomplexStruct_5
{
	int m1;
	long m2;
	std::string m3;
	innercomplexStruct_5 m4;
	float m5;
	double m6;
	bool m7;
	long m8;
	std::string m9;
	innercomplexStruct_5 m10;
	float m11;
	double m12;
	bool m13;
	std::string m14;
	innercomplexStruct_5 m15;
	float m16;
	double m17;
	bool m18;
	innercomplexStruct_5 m19;
	float m20;
	double m21;
	bool m22;
	float m23;
	double m24;
	bool m25;
};

inline void testinnerComplexStruct_5()
{
	char *buffer = (char*)calloc(500, sizeof(char));
	 
	outercomplexStruct_5 stest1, stest2;

	DynamicFastBuffers::Typecode *outerTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createStruct(
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createInteger(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createLong(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createString(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createFloat(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			DynamicFastBuffers::TypecodeAPI::createBoolean(),
			NULL
		),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_TRUE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::FLAG_FALSE);

	struct innercomplexStruct_5 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;
	inner1.m3 = 3;
	inner1.m4 = 4;
	inner1.m5 = 5;
	inner1.m6 = 6;
	inner1.m7 = 7;
	inner1.m8 = 8;
	inner1.m9 = 9;
	inner1.m10 = 10;
	inner1.m11 = "INNER TEST 11";
	inner1.m12 = "INNER TEST 12";
	inner1.m13 = "INNER TEST 13";
	inner1.m14 = "INNER TEST 14";
	inner1.m15 = "INNER TEST 15";
	inner1.m16 = 17.22;
	inner1.m17 = 18.23;
	inner1.m18 = 19.24;
	inner1.m19 = 20.25;
	inner1.m20 = 21.26;
	inner1.m21 = 21.25;
	inner1.m22 = 22.26;
	inner1.m23 = 23.27;
	inner1.m24 = 24.28;
	inner1.m25 = 25.29;
	inner1.m26 = false;
	inner1.m27 = false;
	inner1.m28 = false;
	inner1.m29 = false;
	inner1.m30 = false;

	struct innercomplexStruct_5 inner2;
	inner2.m1 = 31;
	inner2.m2 = 32;
	inner2.m3 = 33;
	inner2.m4 = 34;
	inner2.m5 = 35;
	inner2.m6 = 36;
	inner2.m7 = 37;
	inner2.m8 = 38;
	inner2.m9 = 39;
	inner2.m10 = 40;
	inner2.m11 = "INNER TEST 41";
	inner2.m12 = "INNER TEST 42";
	inner2.m13 = "INNER TEST 43";
	inner2.m14 = "INNER TEST 44";
	inner2.m15 = "INNER TEST 45";
	inner2.m16 = 47.52;
	inner2.m17 = 48.53;
	inner2.m18 = 49.54;
	inner2.m19 = 50.55;
	inner2.m20 = 51.56;
	inner2.m21 = 51.55;
	inner2.m22 = 52.56;
	inner2.m23 = 53.57;
	inner2.m24 = 54.58;
	inner2.m25 = 55.59;
	inner2.m26 = false;
	inner2.m27 = false;
	inner2.m28 = false;
	inner2.m29 = false;
	inner2.m30 = false;

	struct innercomplexStruct_5 inner3;
	inner3.m1 = 61;
	inner3.m2 = 62;
	inner3.m3 = 63;
	inner3.m4 = 64;
	inner3.m5 = 65;
	inner3.m6 = 66;
	inner3.m7 = 67;
	inner3.m8 = 68;
	inner3.m9 = 69;
	inner3.m10 = 70;
	inner3.m11 = "INNER TEST 71";
	inner3.m12 = "INNER TEST 72";
	inner3.m13 = "INNER TEST 73";
	inner3.m14 = "INNER TEST 74";
	inner3.m15 = "INNER TEST 75";
	inner3.m16 = 77.82;
	inner3.m17 = 78.83;
	inner3.m18 = 79.84;
	inner3.m19 = 80.85;
	inner3.m20 = 81.86;
	inner3.m21 = 81.85;
	inner3.m22 = 82.86;
	inner3.m23 = 83.87;
	inner3.m24 = 84.88;
	inner3.m25 = 85.89;
	inner3.m26 = false;
	inner3.m27 = false;
	inner3.m28 = false;
	inner3.m29 = false;
	inner3.m30 = false;

	struct innercomplexStruct_5 inner4;
	inner4.m1 = 91;
	inner4.m2 = 92;
	inner4.m3 = 93;
	inner4.m4 = 94;
	inner4.m5 = 95;
	inner4.m6 = 96;
	inner4.m7 = 97;
	inner4.m8 = 98;
	inner4.m9 = 99;
	inner4.m10 = 100;
	inner4.m11 = "INNER TEST 101";
	inner4.m12 = "INNER TEST 102";
	inner4.m13 = "INNER TEST 103";
	inner4.m14 = "INNER TEST 104";
	inner4.m15 = "INNER TEST 105";
	inner4.m16 = 107.112;
	inner4.m17 = 108.113;
	inner4.m18 = 109.114;
	inner4.m19 = 110.115;
	inner4.m20 = 111.116;
	inner4.m21 = 111.115;
	inner4.m22 = 112.116;
	inner4.m23 = 113.117;
	inner4.m24 = 114.118;
	inner4.m25 = 115.119;
	inner4.m26 = false;
	inner4.m27 = false;
	inner4.m28 = false;
	inner4.m29 = false;
	inner4.m30 = false;

	struct innercomplexStruct_5 inner5;
	inner5.m1 = 121;
	inner5.m2 = 122;
	inner5.m3 = 123;
	inner5.m4 = 124;
	inner5.m5 = 125;
	inner5.m6 = 126;
	inner5.m7 = 127;
	inner5.m8 = 128;
	inner5.m9 = 129;
	inner5.m10 = 130;
	inner5.m11 = "INNER TEST 131";
	inner5.m12 = "INNER TEST 132";
	inner5.m13 = "INNER TEST 133";
	inner5.m14 = "INNER TEST 134";
	inner5.m15 = "INNER TEST 135";
	inner5.m16 = 137.142;
	inner5.m17 = 138.143;
	inner5.m18 = 139.144;
	inner5.m19 = 140.145;
	inner5.m20 = 141.146;
	inner5.m21 = 141.145;
	inner5.m22 = 142.146;
	inner5.m23 = 143.147;
	inner5.m24 = 144.148;
	inner5.m25 = 145.149;
	inner5.m26 = false;
	inner5.m27 = false;
	inner5.m28 = false;
	inner5.m29 = false;
	inner5.m30 = false;

	stest1.m1 = 101;
	stest1.m2 = 102;
	stest1.m3 = "OUTER TEST 3";
	stest1.m4 = inner1;
	stest1.m5 = 105.10;
	stest1.m6 = 107.8;
	stest1.m7 = true;
	stest1.m8 = 108;
	stest1.m9 = "OUTER TEST 9";
	stest1.m10 = inner2;
	stest1.m11 = 1011.16;
	stest1.m12 = 1013.14;
	stest1.m13 = true;
	stest1.m14 = "OUTER TEST 14";
	stest1.m15 = inner3;
	stest1.m16 = 1016.21;
	stest1.m17 = 1018.19;
	stest1.m18 = true;
	stest1.m19 = inner4;
	stest1.m20 = 1020.25;
	stest1.m21 = 1022.23;
	stest1.m22 = true;
	stest1.m23 = 1023.28;
	stest1.m24 = 1025.26;
	stest1.m25 = true;

	eProsima::FastBuffer fastBuffer(buffer, 500);
	eProsima::FastCdr cdr(fastBuffer);

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

inline void innerComplexTestDFB()
{

	cout << "Estructura heterogénea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_1();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_2();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_3();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_4();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceDFB()
{
	cout << "DYNAMIC FAST BUFFERS:" << endl << endl;
	simpleTestDFB();
	complexTestDFB();
	innerSimpleTestDBF();
	innerComplexTestDFB();
	cout << "------------------------------------------------------------------------------------------" << endl;

}

}


int main()
{
	testDFB::performanceDFB();
	
	return 0;
}

