#include <iostream>
#include <stdint.h>

//DFB
#include "cpp/FastCdr.h"
#include "cpp/FastBuffer.h"
#include "cpp/TypecodeAPI.h"
#include "cpp/BytecodeAPI.h"
#include "cpp/SerializerAPI.h"
#include "cpp/CommonData.h"

//Boost
#include <boost/asio.hpp>
#include "boost/shared_ptr.hpp"
#include <boost/timer/timer.hpp>
#include <boost/chrono.hpp>

//Global variables
#define NUMBER_OF_LOOPS 100
#define BUFFER_SIZE 100000

using namespace DynamicFastBuffers;

//Test functions
namespace testDFB
{

struct simpleStruct_10
{
	int64_t m1;
	int64_t m2;
	int64_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
};

inline void testSimpleStruct_10()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
simpleStruct_10 stest1, stest2;

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
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);

		// 

		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);
	}

	free(buffer);
}

struct simpleStruct_20
{
	int64_t m1;
	int64_t m2;
	int64_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
	int64_t m17;
	int64_t m18;
	int64_t m19;
	int64_t m20;
};

inline void testSimpleStruct_20()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
simpleStruct_20 stest1, stest2;

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
		NULL
	);


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int64_t m1;
	int64_t m2;
	int64_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
	int64_t m17;
	int64_t m18;
	int64_t m19;
	int64_t m20;
	int64_t m21;
	int64_t m22;
	int64_t m23;
	int64_t m24;
	int64_t m25;
	int64_t m26;
	int64_t m27;
	int64_t m28;
	int64_t m29;
	int64_t m30;
};

inline void testSimpleStruct_30()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int64_t m1;
	int64_t m2;
	int64_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
	int64_t m17;
	int64_t m18;
	int64_t m19;
	int64_t m20;
	int64_t m21;
	int64_t m22;
	int64_t m23;
	int64_t m24;
	int64_t m25;
	int64_t m26;
	int64_t m27;
	int64_t m28;
	int64_t m29;
	int64_t m30;
	int64_t m31;
	int64_t m32;
	int64_t m33;
	int64_t m34;
	int64_t m35;
	int64_t m36;
	int64_t m37;
	int64_t m38;
	int64_t m39;
	int64_t m40;
};

inline void testSimpleStruct_40()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int64_t m1;
	int64_t m2;
	int64_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
	int64_t m17;
	int64_t m18;
	int64_t m19;
	int64_t m20;
	int64_t m21;
	int64_t m22;
	int64_t m23;
	int64_t m24;
	int64_t m25;
	int64_t m26;
	int64_t m27;
	int64_t m28;
	int64_t m29;
	int64_t m30;
	int64_t m31;
	int64_t m32;
	int64_t m33;
	int64_t m34;
	int64_t m35;
	int64_t m36;
	int64_t m37;
	int64_t m38;
	int64_t m39;
	int64_t m40;
	int64_t m41;
	int64_t m42;
	int64_t m43;
	int64_t m44;
	int64_t m45;
	int64_t m46;
	int64_t m47;
	int64_t m48;
	int64_t m49;
	int64_t m50;
};

inline void testSimpleStruct_50()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int64_t m3;
	int64_t m4;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
	int32_t m7;
	int32_t m8;
	int64_t m9;
	int64_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
	int32_t m7;
	int32_t m8;
	int32_t m9;
	int32_t m10;
	int64_t m11;
	int64_t m12;
	int64_t m13;
	int64_t m14;
	int64_t m15;
	int64_t m16;
	int64_t m17;
	int64_t m18;
	int64_t m19;
	int64_t m20;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
};

struct outersimpleStruct_2
{
	innersimpleStruct_2 m1;
	innersimpleStruct_2 m2;
};

inline void testinnerSimpleStruct_2()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

	struct innersimpleStruct_2 inner1;
	inner1.m1 = 1;
	inner1.m2 = 2;

	struct innersimpleStruct_2 inner2;
	inner2.m1 = 1;
	inner2.m2 = 2;

	stest1.m1 = inner1;
	stest1.m2 = inner2;

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
	int32_t m7;
	int32_t m8;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int32_t m6;
	int32_t m7;
	int32_t m8;
	int32_t m9;
	int32_t m10;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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

	cout << "Estructura con 8 estructuras internas de 8 miembros cada una:" << endl;
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
	int32_t m1;
	int64_t m2;
	std::string m3;
	float m4;
	double m5;
	bool m6;
};

struct outercomplexStruct_1
{
	int32_t m1;
	int64_t m2;
	std::string m3;
	innercomplexStruct_1 m4;
	float m5;
	double m6;
	bool m7;
};

inline void testinnerComplexStruct_1()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int64_t m3;
	int64_t m4;
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
	int32_t m1;
	int64_t m2;
	std::string m3;
	innercomplexStruct_2 m4;
	float m5;
	double m6;
	bool m7;
	int64_t m8;
	std::string m9;
	innercomplexStruct_2 m10;
	float m11;
	double m12;
	bool m13;
};

inline void testinnerComplexStruct_2()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	//memset(&stest1, '-', sizeof(outercomplexStruct_2));
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

	//test
	//memset(buffer, '-', BUFFER_SIZE);
	//
	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bytecodeSerialization, &cdr);

		//std::cout << "serializa" << std::endl;
		 

		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bytecodeDeserialization, &cdr);

		//std::cout << "serializa" << std::endl;

	}

	free(buffer);
}

struct innercomplexStruct_3
{
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int64_t m4;
	int64_t m5;
	int64_t m6;
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
	int32_t m1;
	int64_t m2;
	std::string m3;
	innercomplexStruct_3 m4;
	float m5;
	double m6;
	bool m7;
	int64_t m8;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int64_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
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
	int32_t m1;
	int64_t m2;
	std::string m3;
	innercomplexStruct_4 m4;
	float m5;
	double m6;
	bool m7;
	int64_t m8;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	int32_t m1;
	int32_t m2;
	int32_t m3;
	int32_t m4;
	int32_t m5;
	int64_t m6;
	int64_t m7;
	int64_t m8;
	int64_t m9;
	int64_t m10;
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
	int32_t m1;
	int64_t m2;
	std::string m3;
	innercomplexStruct_5 m4;
	float m5;
	double m6;
	bool m7;
	int64_t m8;
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
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
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


	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(outerTypecode, DynamicFastBuffers::DESERIALIZE);

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

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);
	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
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
	cout << "Estructura heterog\E9nea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_1();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_2();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_3();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnerComplexStruct_4();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
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

namespace unitTests
{

struct testArrayStructure
{
	int32_t att1;
	bool att2;
	string att3;
	double att4[3][4];
	short att5[3][4];
	bool att6;
	int64_t att7;
};

inline void testArrays()
{

	char buffer[500];
	eProsima::FastBuffer cdrBuffer(buffer, 500);
	eProsima::FastCdr cdr(cdrBuffer);

	double test1[3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	short test2[3][4] = {{2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

	testArrayStructure arrst1, arrst2;
	arrst1.att1 = 1;
	arrst1.att2 = false;
	arrst1.att3 = "TEST";
	memcpy(arrst1.att4, test1, sizeof(test1));
	memcpy(arrst1.att5, test2, sizeof(test2));
	arrst1.att6 = true;
	arrst1.att7 = 50;
	
	DynamicFastBuffers::Typecode *tcArray = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createArray(
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			2, 3, 4, NULL
		),
		DynamicFastBuffers::TypecodeAPI::createArray(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			2, 3, 4, NULL
		),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);


	int32_t int1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	int32_t int2 [3][4];

	int64_t long1 [4][4][2] = {{{1,1},{2,2},{3,3},{4,4}}, {{10,10},{11,11},{12,12},{13,13}}, {{20,20},{21,21},{22,22},{23,23}}, {{30,30},{31,31},{32,32},{33,33}}};
	int64_t long2 [4][4][2];
	
	short short1 [3][4] = {{16,2,77,29}, {16,2,77,29}, {16,2,77,29}};
	short short2 [3][4];

	float float1 [3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	float float2 [3][4];

	double double1 [3][4] = {{2.0, 2.1, 2.2, 2.3}, {3.0, 3.1, 3.2, 3.3}, {4.0, 4.1, 4.2, 4.3}};
	double double2 [3][4];

	bool bool1 [3][4] = {{true,true,true,true}, {false,false,false,false}, {true,true,false,false}};
	bool bool2 [3][4];

	char char1 [5][4] = {{'-','-','-','-'},{'1','1','1','1'},{'W','W','W','W'}, {'i','i','i','i'}, {'?','?','?','?'}};
	char char2 [5][4];

	DynamicFastBuffers::Typecode *tc1 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		2, 3, 4, NULL
	);
	
	DynamicFastBuffers::Typecode *tc2 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createLong(),
		3, 4, 4, 2, NULL
	);

	DynamicFastBuffers::Typecode *tc3 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createShort(),
		2, 3, 4, NULL
	);

	DynamicFastBuffers::Typecode *tc4 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createFloat(),
		2, 3, 4, NULL
	);

	DynamicFastBuffers::Typecode *tc5 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createDouble(),
		2, 3, 4, NULL
	);

	DynamicFastBuffers::Typecode *tc6 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		2, 3, 4, NULL
	);

	DynamicFastBuffers::Typecode *tc7 = DynamicFastBuffers::TypecodeAPI::createArray(
		DynamicFastBuffers::TypecodeAPI::createCharacter(),
		2, 5, 4, NULL
	);

	
	//--------------------------------------------

	DynamicFastBuffers::Bytecode *bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc1,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc2,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc3,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc4,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc5,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc6,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::Bytecode *bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(
		tc7,
		DynamicFastBuffers::flag::SERIALIZE
	);

	DynamicFastBuffers::SerializerAPI::serialize((void*) &int1, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &long1, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &short1, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &float1, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &double1, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &bool1, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::serialize((void*) &char1, bc7, &cdr);

	cdr.reset();

	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc1, DynamicFastBuffers::flag::DESERIALIZE);
	bc2 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc2, DynamicFastBuffers::flag::DESERIALIZE);
	bc3 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc3, DynamicFastBuffers::flag::DESERIALIZE);
	bc4 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc4, DynamicFastBuffers::flag::DESERIALIZE);
	bc5 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc5, DynamicFastBuffers::flag::DESERIALIZE);
	bc6 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc6, DynamicFastBuffers::flag::DESERIALIZE);
	bc7 = DynamicFastBuffers::BytecodeAPI::generateBytecode(tc7, DynamicFastBuffers::flag::DESERIALIZE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &int2, bc1, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &long2, bc2, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &short2, bc3, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &float2, bc4, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &double2, bc5, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &bool2, bc6, &cdr);
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &char2, bc7, &cdr);

	
	cdr.reset();

	DynamicFastBuffers::Bytecode *bytecodest = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray, DynamicFastBuffers::flag::SERIALIZE);
	
	DynamicFastBuffers::SerializerAPI::serialize((void*) &arrst1, bytecodest, &cdr);
	
	cdr.reset();

	bytecodest = DynamicFastBuffers::BytecodeAPI::generateBytecode(tcArray, DynamicFastBuffers::flag::DESERIALIZE);

	DynamicFastBuffers::SerializerAPI::deserialize((void*) &arrst2, bytecodest, &cdr);

	bool comp = true;
	comp &= (arrst1.att1 == arrst2.att1);
	comp &= (arrst1.att2 == arrst2.att2);
	comp &= (arrst1.att3 == arrst2.att3);
	for(int i=0; i < 3; ++i){
		for(int j=0; j<4; ++j){
			comp &= (arrst1.att4[i][j] == arrst2.att4[i][j]);
		}
	}
	for(int i=0; i < 3; ++i){
		for(int j=0; j<4; ++j){
			comp &= (arrst1.att5[i][j] == arrst2.att5[i][j]);
		}
	}
	comp &= (arrst1.att6 == arrst2.att6);
	comp &= (arrst1.att7 == arrst2.att7);
	

	if(!comp){
		cout << "FAIL" << endl;
	}else{
		cout << "CORRECT" << endl;
	}
}

struct structTest3
{
	short s1;
	int32_t i1;
	char c1;
	string str1;
	short s2;
	int64_t l1;
};

struct structTest1
{
	short i1;
	char s1;
	short arr1[2][4];
	vector<int64_t> members1;
	int32_t i2;
	short s2;
	structTest3 st3;
	string str1;
};

struct structTest2
{
	short s1;
	int32_t i1;
	structTest1 st1;
	short arr1[2][4];
	short i2;
	int64_t s2;
	structTest3 st3;
	string str1;
};

inline void testComplexVectors()
{
	/*
	* CDR Serializer declaration
	*/
	char buffer[5000];
	eProsima::FastBuffer cdrBuffer(buffer, 5000);
	eProsima::FastCdr cdr(cdrBuffer);
	
	/*
	* Data creation
	*/
	short arr1[2][4] = {{100,101,102,103},{104,105,106,107}};
	short arr2[2][4] = {{200,201,202,203},{204,205,206,207}};

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
	stest3.members1 = vector<int64_t>(5, 50);
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

	/*cout << "Sizeof(vector): " << sizeof(vector<int64_t>) << endl;

	cout << "s1: " << offsetof(structTest2, s1) << endl;
	cout << "i1: " << offsetof(structTest2, i1) << endl;

	cout << "\tst1.i1: " << offsetof(structTest2, st1.i1) << endl;
	cout << "\tst1.s1: " << offsetof(structTest2, st1.s1) << endl;
	cout << "\tst1.arr1: " << offsetof(structTest2, st1.arr1) << endl;
	cout << "\tst1.members1: " << offsetof(structTest2, st1.members1) << endl;
	cout << "\tst1.i2: " << offsetof(structTest2, st1.i2) << endl;
	cout << "\tst1.s2: " << offsetof(structTest2, st1.s2) << endl;
	
	cout << "\t\tst1.st3.s1: " << offsetof(structTest2, st1.st3.s1) << endl;
	cout << "\t\tst1.st3.i1: " << offsetof(structTest2, st1.st3.i1) << endl;
	cout << "\t\tst1.st3.c1: " << offsetof(structTest2, st1.st3.c1) << endl;
	cout << "\t\tst1.st3.str1: " << offsetof(structTest2, st1.st3.str1) << endl;
	cout << "\t\tst1.st3.s2: " << offsetof(structTest2, st1.st3.s2) << endl;
	cout << "\t\tst1.st3.l1: " << offsetof(structTest2, st1.st3.l1) << endl;
	
	cout << "\tst1.str1: " << offsetof(structTest2, st1.str1) << endl;

	cout << "i2: " << offsetof(structTest2, i2) << endl;
	cout << "s2: " << offsetof(structTest2, s2) << endl;
	
	cout << "\t.st3.s1: " << offsetof(structTest2, st3.s1) << endl;
	cout << "\t.st3.i1: " << offsetof(structTest2, st3.i1) << endl;
	cout << "\t.st3.c1: " << offsetof(structTest2, st3.c1) << endl;
	cout << "\t.st3.str1: " << offsetof(structTest2, st3.str1) << endl;
	cout << "\t.st3.s2: " << offsetof(structTest2, st3.s2) << endl;
	cout << "\t.st3.l1: " << offsetof(structTest2, st3.l1) << endl;

	cout << "str1: " << offsetof(structTest2, str1) << endl;*/

	/*
	* Typecode creation
	*/
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

	
		

	/*
	* Bytecode for serialization
	*/
	DynamicFastBuffers::Bytecode* bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::flag::SERIALIZE);
	
	/*
	* Data serialization
	*/
	DynamicFastBuffers::SerializerAPI::serialize((void*) &stest1, bc1, &cdr);
		
	/*
	* Buffer reset
	*/
	cdr.reset();

	/*
	* Bytecode for deserialization
	*/
	bc1 = DynamicFastBuffers::BytecodeAPI::generateBytecode(struct1, DynamicFastBuffers::flag::DESERIALIZE);
	
	/*
	* Data deserialization
	*/
	DynamicFastBuffers::SerializerAPI::deserialize((void*) &stest2, bc1, &cdr);
	
	/*
	* Typecode deletes
	*/
	DynamicFastBuffers::TypecodeAPI::deleteTypecode(struct1);
}

inline void testSizeCalculation()
{
	DynamicFastBuffers::Typecode *tc1 = DynamicFastBuffers::TypecodeAPI::createString();
	DynamicFastBuffers::Typecode *tc2 = DynamicFastBuffers::TypecodeAPI::createString(26);
	DynamicFastBuffers::Typecode *tc3 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createCharacter(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createShort(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);
	DynamicFastBuffers::Typecode *tc4 = DynamicFastBuffers::TypecodeAPI::createStruct(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createString(),
		DynamicFastBuffers::TypecodeAPI::createArray(
			DynamicFastBuffers::TypecodeAPI::createDouble(),
			2, 3, 4, NULL
		),
		DynamicFastBuffers::TypecodeAPI::createArray(
			DynamicFastBuffers::TypecodeAPI::createShort(),
			2, 3, 4, NULL
		),
		DynamicFastBuffers::TypecodeAPI::createBoolean(),
		DynamicFastBuffers::TypecodeAPI::createLong(),
		NULL
	);
	DynamicFastBuffers::Typecode *tc5 = DynamicFastBuffers::TypecodeAPI::createSequence(
		DynamicFastBuffers::TypecodeAPI::createInteger(),
		10
	);
	std::cout << "tc1: " << DynamicFastBuffers::TypecodeAPI::checkSerializedDataSize(tc1) << std::endl;
	std::cout << "tc2: " << DynamicFastBuffers::TypecodeAPI::checkSerializedDataSize(tc2) << std::endl;
	std::cout << "tc3: " << DynamicFastBuffers::TypecodeAPI::checkSerializedDataSize(tc3) << std::endl;
	std::cout << "tc4: " << DynamicFastBuffers::TypecodeAPI::checkSerializedDataSize(tc4) << std::endl;
	std::cout << "tc5: " << DynamicFastBuffers::TypecodeAPI::checkSerializedDataSize(tc5) << std::endl;
}

inline void execute()
{
	testArrays();
	cout << " testArrays finished" << endl;
	testComplexVectors();
	cout << " complexVectors finished" << endl;
	testSizeCalculation();
	cout << " sizeCalculation finished" << endl;
}

};

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

	void charAlignmentTest01()
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

		if (result){
			cout << "Test 'charAlignmentTest01': CORRECT "<< endl;
		} else {
			cout << "Test 'charAlignmentTest01': FAIL" << endl;
		}
	}

	void shortAlignmentTest01()
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

		if (result){
			cout << "Test 'shortAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'shortAlignmentTest01': FAIL" << endl;
		}
	}

	void intAlignmentTest01() // Estructura con un char y un entero, para comprobar alineamiento con distintos packings
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

		if (ofs == ourOffset){
			cout << "Test 'intAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'intAlignmentTest01': FAIL" << endl;
		}

	}

	void intAlignmentTest02()
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

		if (result){
			cout << "Test 'intAlignmentTest02': CORRECT" << endl;
		} else {
			cout << "Test 'intAlignmentTest02': FAIL" << endl;
		}
	}

	void longAlignmentTest01()
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

		if (result){
			cout << "Test 'longAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'longAlignmentTest01': FAIL" << endl;
		}
	}

	void floatAlignmentTest01()
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

		if (result){
			cout << "Test 'floatAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'floatAlignmentTest01': FAIL" << endl;
		}
	}

	void doubleAlignmentTest01()
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

		if (result){
			cout << "Test 'doubleAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'doubleAlignmentTest01': FAIL" << endl;
		}
	}

	void stringAlignmentTest01()
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

		if (result){
			cout << "Test 'stringAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'stringAlignmentTest01': FAIL" << endl;
		}
	}

	void booleanAlignmentTest01()
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

		if (result){
			cout << "Test 'booleanAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'booleanAlignmentTest01': FAIL" << endl;
		}
	}

	void sequenceAlignmentTest01()
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

		if (result){
			cout << "Test 'sequenceAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'sequenceAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayCharAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayCharAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayCharAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayShortAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayShortAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayShortAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayIntAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayIntAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayIntAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayLongAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayLongAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayLongAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayFloatAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayFloatAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayFloatAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayDoubleAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayDoubleAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayDoubleAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayStringAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayStringAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayStringAlignmentTest01': FAIL" << endl;
		}
	}

	void arrayBooleanAlignmentTest01()
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

		if (result){
			cout << "Test 'arrayBooleanAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'arrayBooleanAlignmentTest01': FAIL" << endl;
		}
	}

	void charStructAlignmentTest01()
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

		if (result){
			cout << "Test 'charStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'charStructAlignmentTest01': FAIL" << endl;
		}
	}

	void shortStructAlignmentTest01()
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

		if (result){
			cout << "Test 'shortStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'shortStructAlignmentTest01': FAIL" << endl;
		}
	}

	void intStructAlignmentTest01()
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

		if (result){
			cout << "Test 'intStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'intStructAlignmentTest01': FAIL" << endl;
		}
	}

	void longStructAlignmentTest01()
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

		if (result){
			cout << "Test 'longStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'longStructAlignmentTest01': FAIL" << endl;
		}
	}

	void floatStructAlignmentTest01()
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

		if (result){
			cout << "Test 'floatStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'floatStructAlignmentTest01': FAIL" << endl;
		}
	}

	void doubleStructAlignmentTest01()
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

		if (result){
			cout << "Test 'doubleStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'doubleStructAlignmentTest01': FAIL" << endl;
		}
	}

	void stringStructAlignmentTest01()
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

		if (result){
			cout << "Test 'stringStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'stringStructAlignmentTest01': FAIL" << endl;
		}
	}

	void booleanStructAlignmentTest01()
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

		if (result){
			cout << "Test 'booleanStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'booleanStructAlignmentTest01': FAIL" << endl;
		}
	}

	void sequenceStructAlignmentTest01()
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

		if (result){
			cout << "Test 'sequenceStructAlignmentTest01': CORRECT" << endl;
		} else {
			cout << "Test 'sequenceStructAlignmentTest01': FAIL" << endl;
		}
	}

	inline void execute()
	{
		align_tests::initialize();

		cout << "SIMPLE TYPES ALIGNMENT: \n" << endl;
		align_tests::charAlignmentTest01();
		align_tests::shortAlignmentTest01();
		align_tests::intAlignmentTest01();
		align_tests::intAlignmentTest02();
		align_tests::longAlignmentTest01();
		align_tests::floatAlignmentTest01();
		align_tests::doubleAlignmentTest01();
		align_tests::stringAlignmentTest01();
		align_tests::booleanAlignmentTest01();

		cout << endl << "COMPLEX TYPES ALIGNMENT: \n" << endl;
		align_tests::sequenceAlignmentTest01();
		align_tests::arrayCharAlignmentTest01();
		align_tests::arrayShortAlignmentTest01();
		align_tests::arrayIntAlignmentTest01();
		align_tests::arrayLongAlignmentTest01();
		align_tests::arrayFloatAlignmentTest01();
		align_tests::arrayDoubleAlignmentTest01();
		align_tests::arrayStringAlignmentTest01();
		align_tests::arrayBooleanAlignmentTest01();

		cout << endl << "STRUCTURES ALIGNMENT: \n" << endl;
		align_tests::charStructAlignmentTest01();
		align_tests::shortStructAlignmentTest01();
		align_tests::intStructAlignmentTest01();
		align_tests::longStructAlignmentTest01();
		align_tests::floatStructAlignmentTest01();
		align_tests::doubleStructAlignmentTest01();
		align_tests::stringStructAlignmentTest01();
		align_tests::booleanStructAlignmentTest01();
		align_tests::sequenceStructAlignmentTest01();
	
	}

};

namespace newTests
{

	struct simpleStruct1
	{
		char att0;
		int32_t att1;
		short att2;
		struct innerSt{
			short att0;
			int32_t att1;
		} att3;
	};

	inline void simpleStructTest1() //Estructura como último elemento
	{

		simpleStruct1 in;
		in.att0 = 'a';
		in.att1 = 5;
		in.att2 = 2;
		in.att3.att0 = 'b';
		in.att3.att1 = 10;

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createInteger(),
			TypecodeAPI::createShort(),
			TypecodeAPI::createStruct(
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			NULL
		);

		Bytecode* bc = BytecodeAPI::generateBytecode(tc, SERIALIZE);
	}

	struct simpleStruct2
	{
		struct innerSt{
			short att0;
			int32_t att1;
		} att3;
		char att0;
		int32_t att1;
		short att2;
		
	};

	inline void simpleStructTest2() // Estructura como primer elemento
	{

		simpleStruct2 in;
		in.att0 = 'a';
		in.att1 = 5;
		in.att2 = 2;
		in.att3.att0 = 'b';
		in.att3.att1 = 10;

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createStruct(
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createInteger(),
			TypecodeAPI::createShort(),
			
			NULL
		);

		Bytecode* bc = BytecodeAPI::generateBytecode(tc, SERIALIZE);
	}

	struct simpleStruct3
	{
		struct innerSt{
			short att0;
			int32_t att1;
		} att3;
		char att0;
		std::string att1;
		short att2;
		
	};

	inline void simpleStructTest3() // Estructura como primer elemento usando también String
	{

		simpleStruct3 in;
		in.att0 = 'a';
		in.att1 = "Hello World";
		in.att2 = 2;
		in.att3.att0 = 'b';
		in.att3.att1 = 10;

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createStruct(
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createString(),
			TypecodeAPI::createShort(),
			
			NULL
		);

		Bytecode* bc = BytecodeAPI::generateBytecode(tc, SERIALIZE);
	}

	struct simpleStruct4
	{
		struct innerSt{
			struct innerinnerSt{
				char att1;
			} att2;
			short att0;
			int32_t att1;
		} att3;
		char att0;
		std::string att1;
		short att2;
		
	};

	inline void simpleStructTest4() //Estructura como en el test 3 pero con otra estructura dentro en su primer elemento
	{

		simpleStruct4 in;
		in.att0 = 'a';
		in.att1 = "Hello World";
		in.att2 = 2;
		in.att3.att0 = 9;
		in.att3.att1 = 10;
		in.att3.att2.att1 = 'W';

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createStruct(
				TypecodeAPI::createStruct(
					TypecodeAPI::createCharacter(),
					NULL
				),
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createString(),
			TypecodeAPI::createShort(),
			
			NULL
		);

		Bytecode* bc = BytecodeAPI::generateBytecode(tc, SERIALIZE);
	}

	struct simpleStruct5
	{
		
		char att0;
		std::string att1;
		struct innerSt{
			short att0;
			int32_t att1;
		} att3;
		short att2;
		
	};

	inline void simpleStructTest5() //Estructura igual que en el test 3 pero en medio
	{

		simpleStruct5 in;
		in.att0 = 'a';
		in.att1 = "Hello World";
		in.att2 = 2;
		in.att3.att0 = 'b';
		in.att3.att1 = 10;

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createString(),
			TypecodeAPI::createStruct(
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			TypecodeAPI::createShort(),
			
			NULL
		);

		Bytecode* bc = BytecodeAPI::generateBytecode(tc, SERIALIZE);
	}

	struct simpleStruct6
	{
		
		char att0;
		std::string att1;
		struct innerSt{
			short att0;
			int32_t att1;
		} att3;
		short att2;
		
	};

	inline void simpleStructTest6() //Estructura igual que en el test 3 pero en medio
	{

		simpleStruct6 in, out;
		in.att0 = 'a';
		in.att1 = "Hello World";
		in.att2 = 2;
		in.att3.att0 = 8;
		in.att3.att1 = 10;

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createString(),
			TypecodeAPI::createStruct(
				TypecodeAPI::createShort(),
				TypecodeAPI::createInteger(),
				NULL
			),
			TypecodeAPI::createShort(),
			
			NULL
		);

		Bytecode* bytecodeSerialization = BytecodeAPI::generateBytecode(tc, SERIALIZE);
		Bytecode* bytecodeDeserialization = BytecodeAPI::generateBytecode(tc, DESERIALIZE);

		char *buffer = (char*)calloc(500, sizeof(char));
		
		eProsima::FastBuffer fastBuffer(buffer, 500);
		eProsima::FastCdr cdr(fastBuffer);
	 
	

		for(int count = 0; count < 100; ++count)
		{
			cdr.reset();
			DynamicFastBuffers::SerializerAPI::serialize((void*) &in, bytecodeSerialization, &cdr);
			cdr.reset();
			DynamicFastBuffers::SerializerAPI::deserialize((void*) &out, bytecodeDeserialization, &cdr);
		}

		free(buffer);

	}

	struct paddingBehindStructure1
	{
		char att1;
		struct innerSt{
			int32_t att1;
			char att2;
		} att2;
		/*struct innerSt2{
			short att1;
			char att2;
		} att3;*/
		char att4;
	};

	inline void simpleStructTest7() //Probar padding detrás de las estructuras
	{

		paddingBehindStructure1 in, out;
		in.att1 = 'a';
		in.att2.att1 = 2;
		in.att2.att2 = 'm';
		/*in.att3.att1 = 3;
		in.att3.att2 = 'n';*/
		in.att4 = 'b';

		Typecode *tc = TypecodeAPI::createStruct(
			TypecodeAPI::createCharacter(),
			TypecodeAPI::createStruct(
				TypecodeAPI::createInteger(),
				TypecodeAPI::createCharacter(),
				NULL
			),
			TypecodeAPI::createCharacter(),
			NULL
		);

		Bytecode* bytecodeSerialization = BytecodeAPI::generateBytecode(tc, SERIALIZE);
		Bytecode* bytecodeDeserialization = BytecodeAPI::generateBytecode(tc, DESERIALIZE);

		char *buffer = (char*)calloc(500, sizeof(char));
		
		eProsima::FastBuffer fastBuffer(buffer, 500);
		eProsima::FastCdr cdr(fastBuffer);
	 
	

		for(int count = 0; count < 100; ++count)
		{
			cdr.reset();
			DynamicFastBuffers::SerializerAPI::serialize((void*) &in, bytecodeSerialization, &cdr);
			cdr.reset();
			DynamicFastBuffers::SerializerAPI::deserialize((void*) &out, bytecodeDeserialization, &cdr);
		}

		free(buffer);

	}

	inline void testStructAlignment()
	{
		struct out
		{
			char att0;
			struct in
			{
				vector<int> att0;
			} att1;
		};

		out st;
		st.att0 = 'a';
		//st.att1.att0 = 555;
		
		cout << "StringAlign: " << align_tests::stringStructAlign << endl;
		cout << "Stop" << endl;
	}

	inline void execute()
	{
		newTests::simpleStructTest1();
		newTests::simpleStructTest2();
		newTests::simpleStructTest3();
		newTests::simpleStructTest4();
		newTests::simpleStructTest5();
		newTests::simpleStructTest6();
		newTests::simpleStructTest7();
	}

};

namespace testSesar
{

struct ns1__Speed
{
	int32_t ns1__SpeedUnitKind[150];
	float value [150];
};

struct ns1__Mass
{
	int32_t value[150];	
};

struct ns1__ExpandedRoutePointIdentifier
{
	int32_t value [150];	
};

struct ns1__RateOfClimbDescent
{ 
	float value [150];	
};

struct ns1__TrajectoryPointType
{ 
	bool adep[150];
	bool ades[150];
	bool beacon[150];
	bool bottom_USCOREof_USCOREclimb[150];
	bool bottom_USCOREof_USCOREdescent[150];
	bool boundary_USCOREpoint[150];
	bool change_USCOREof_USCOREstatus[150];
	bool constraint_USCOREapplication[150];
	bool end_USCOREof_USCOREturn[150];
	bool entry_USCOREof_USCOREhold[150];
	bool exit_USCOREof_USCOREhold[150];
	bool AT_USCOREOAT[150];
	bool Joining [150];
	bool Leaving[150];
	bool middle_USCOREof_USCOREturn[150];
	bool OAT_USCOREGAT[150];
	bool STAR_USCOREentry[150];
	bool start_USCOREof_USCOREturn[150];
	bool top_USCOREof_USCOREclimb[150];
	bool top_USCOREof_USCOREdescent[150];
};


struct ns1__IdATCVolume
{ 
	int32_t type [150];	
	std::string identifier;	
};


struct ns1__Time
{
	int32_t value[150];
};

struct ns1__Altitude
{
	int32_t ns1__AltitudeUnitKind[150];	
	int32_t value [150];	
};

struct ns1__FlightLevel
{
	int32_t value [150];
};

struct ns1__AlitudeOrLevel
{
	int32_t ns1__AltitudeOrLevelKind [150];
	ns1__Altitude altitude;
	ns1__FlightLevel flight_USCORElevel;
};

struct ns1__Distance
{
	int32_t value[150];
};

struct ns1__Angle
{
	std::string value;
};

struct ns1__IdPublishedPoint
{
	std::string designator;
};

struct ns1__Point2D
{
	ns1__Distance range;
	ns1__Angle bearing;
	ns1__IdPublishedPoint ref_USCOREid_USCOREpublished_USCOREreference;
};

struct ns1__Point3D
{
	ns1__AlitudeOrLevel altitude;
	ns1__Point2D position2D;
};

struct ns1__Point4D
{
	ns1__Time time;
	ns1__Point3D position3D;
};

struct ns1__BoundaryPoint
{
	int32_t ns1__BoundaryPointKind;	
	int32_t __sizeref_USCOREid_USCOREdownstream;
	ns1__IdATCVolume ref_USCOREid_USCOREdownstream;
	int32_t __sizeref_USCOREid_USCOREupstream;
	ns1__IdATCVolume ref_USCOREid_USCOREupstream;
};

struct ns1__TrajectoryPoint
{ 
	int32_t ns1__FlightPhase[150];
	ns1__Speed ground_USCOREspeed;
	ns1__Angle heading;
	ns1__Mass mass;
	ns1__IdATCVolume ref_USCOREid_USCOREbelongs_USCOREto;
	ns1__ExpandedRoutePointIdentifier ref_USCOREid_USCOREdesignator;
	ns1__RateOfClimbDescent rocd;
	ns1__Angle track;
	ns1__TrajectoryPointType trj_USCOREpoint_USCOREtype;
	ns1__Speed true_USCOREairspeed;
	ns1__Point4D point_USCORE4D;
	ns1__BoundaryPoint boundary_USCOREpoint_USCOREinfo;
};

struct ns1__Trajectory
{ 
	int32_t ns1__AirborneStatus;
	int32_t last_USCOREoverflown_USCOREpoint;
    int32_t __sizetrajectory_USCOREpoints;
	ns1__TrajectoryPoint trajpoint;
};

inline void testSesar01()
{
	//char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	char buffer[100000];
	
	cout << "Sizeof(String): " << sizeof(std::string) << endl;
	
	Typecode *typecode = TypecodeAPI::createStruct(
		TypecodeAPI::createInteger(),
		TypecodeAPI::createInteger(),
		TypecodeAPI::createInteger(),
		TypecodeAPI::createStruct( // trajpoint
			TypecodeAPI::createArray(
				TypecodeAPI::createInteger(), //flightplane
				1, 150, 0
			),
			TypecodeAPI::createStruct( //angle
				TypecodeAPI::createArray(
					TypecodeAPI::createInteger(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createFloat(), //flightplane
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct( //mass
				TypecodeAPI::createString(),
				NULL
			),
			TypecodeAPI::createStruct( //volume
				TypecodeAPI::createArray(
					TypecodeAPI::createInteger(), //flightplane
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct( //identifier
				TypecodeAPI::createArray(
					TypecodeAPI::createInteger(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createString(),
				NULL
			),
			TypecodeAPI::createStruct( //rateofclimb
				TypecodeAPI::createArray(
					TypecodeAPI::createInteger(), //flightplane
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct( //
				TypecodeAPI::createArray(
					TypecodeAPI::createFloat(), //flightplane
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct( //angle
				TypecodeAPI::createString(),
				NULL
			),
			TypecodeAPI::createStruct(
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createCharacter(), //flightplane
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct(
				TypecodeAPI::createArray(
					TypecodeAPI::createInteger(), //
					1, 150, 0
				),
				TypecodeAPI::createArray(
					TypecodeAPI::createFloat(), //
					1, 150, 0
				),
				NULL
			),
			TypecodeAPI::createStruct(//point4d
				TypecodeAPI::createStruct( //time
					TypecodeAPI::createArray(
						TypecodeAPI::createInteger(), //
						1, 150, 0
					),
					NULL
				),
				TypecodeAPI::createStruct( //point3d
					TypecodeAPI::createStruct( //altitude
						TypecodeAPI::createArray(
							TypecodeAPI::createInteger(), //
							1, 150, 0
						),
						TypecodeAPI::createStruct(
							TypecodeAPI::createArray(
								TypecodeAPI::createInteger(), //
								1, 150, 0
							),
							TypecodeAPI::createArray(
								TypecodeAPI::createInteger(), //
								1, 150, 0
							),
							NULL
						),
						TypecodeAPI::createStruct(
							TypecodeAPI::createArray(
								TypecodeAPI::createInteger(), //
								1, 150, 0
							),
							NULL
						),
						NULL
					),
					TypecodeAPI::createStruct( //position2d
						TypecodeAPI::createStruct( //distance
							TypecodeAPI::createArray(
								TypecodeAPI::createInteger(), //
								1, 150, 0
							),
							NULL
						),
						TypecodeAPI::createStruct( //angle
							TypecodeAPI::createString(),
							NULL
						),
						TypecodeAPI::createStruct( //idpublishedpoint
							TypecodeAPI::createString(),
							NULL
						),
						NULL
					),
					NULL
				),
				NULL
			),
			TypecodeAPI::createStruct( //boundarypoint
				TypecodeAPI::createInteger(),
				TypecodeAPI::createInteger(),
				TypecodeAPI::createStruct(
					TypecodeAPI::createArray(
						TypecodeAPI::createInteger(), //
						1, 150, 0
					),
					TypecodeAPI::createString(),
					NULL
				),
				TypecodeAPI::createInteger(),
				TypecodeAPI::createStruct(
					TypecodeAPI::createArray(
						TypecodeAPI::createInteger(), //
						1, 150, 0
					),
					TypecodeAPI::createString(),
					NULL
				),
				NULL
			),
			NULL
		),
		NULL
	);

	ns1__Speed ns1_Speed;
	for(int i=0; i<150; ++i){
		ns1_Speed.ns1__SpeedUnitKind[i] = 1;
		ns1_Speed.value[i] = 2.5;
	}

	ns1__Mass ns1_Mass;
	for(int i=0; i<150; ++i){
		ns1_Mass.value[i] = 2;	
	}
	
	ns1__ExpandedRoutePointIdentifier ns1_ExpandedRoutePointIdentifier;
	for(int i=0; i<150; ++i){
		ns1_ExpandedRoutePointIdentifier.value[i] = 3;
	}
	
	ns1__RateOfClimbDescent ns1_RateOfClimbDescent;
	for(int i=0; i<150; ++i){
		ns1_RateOfClimbDescent.value[i] = 3.5;	
	}
	
	ns1__TrajectoryPointType ns1_TrajectoryPointType;
	for(int i=0; i<150; ++i){
		ns1_TrajectoryPointType.adep[i] = false;
		ns1_TrajectoryPointType.ades[i] = false;
		ns1_TrajectoryPointType.beacon[i] = false;
		ns1_TrajectoryPointType.bottom_USCOREof_USCOREclimb[i] = false;
		ns1_TrajectoryPointType.bottom_USCOREof_USCOREdescent[i] = false;
		ns1_TrajectoryPointType.boundary_USCOREpoint[i] = false;
		ns1_TrajectoryPointType.change_USCOREof_USCOREstatus[i] = false;
		ns1_TrajectoryPointType.constraint_USCOREapplication[i] = false;
		ns1_TrajectoryPointType.end_USCOREof_USCOREturn[i] = false;
		ns1_TrajectoryPointType.entry_USCOREof_USCOREhold[i] = false;
		ns1_TrajectoryPointType.exit_USCOREof_USCOREhold[i] = false;
		ns1_TrajectoryPointType.AT_USCOREOAT[i] = false;
		ns1_TrajectoryPointType.Joining[i] = false;
		ns1_TrajectoryPointType.Leaving[i] = false;
		ns1_TrajectoryPointType.middle_USCOREof_USCOREturn[i] = false;
		ns1_TrajectoryPointType.OAT_USCOREGAT[i] = false;
		ns1_TrajectoryPointType.STAR_USCOREentry[i] = false;
		ns1_TrajectoryPointType.start_USCOREof_USCOREturn[i] = false;
		ns1_TrajectoryPointType.top_USCOREof_USCOREclimb[i] = false;
		ns1_TrajectoryPointType.top_USCOREof_USCOREdescent[i] = false;
	}
	

	ns1__IdATCVolume ns1_IdATCVolume;
	for(int i=0; i<150; ++i){
		ns1_IdATCVolume.type[i] = 6;	
		ns1_IdATCVolume.identifier += "ns1_Time";	
	}
	

	ns1__Time ns1_Time;
	for(int i=0; i<150; ++i){
		ns1_Time.value[i] = 5;
	}
	
	ns1__Altitude ns1_Altitude;
	for(int i=0; i<150; ++i){
		ns1_Altitude.ns1__AltitudeUnitKind[i] = 7;	
		ns1_Altitude.value[i] = 8;	
	}

	ns1__FlightLevel ns1_FlightLevel;
	for(int i=0; i<150; ++i){
		ns1_FlightLevel.value[i] = 9;
	}

	ns1__AlitudeOrLevel ns1_AlitudeOrLevel;
	for(int i=0; i<150; ++i){
		ns1_AlitudeOrLevel.ns1__AltitudeOrLevelKind[i] = 10;
	}
	ns1_AlitudeOrLevel.altitude = ns1_Altitude;
	ns1_AlitudeOrLevel.flight_USCORElevel = ns1_FlightLevel;

	ns1__Distance ns1_Distance;
	for(int i=0; i<150; ++i){
		ns1_Distance.value[i] = 10;
	}

	ns1__Angle ns1_Angle;
	//for(int i=0; i<150; ++i){
		ns1_Angle.value += "ns1_Angle";
	//}

	ns1__IdPublishedPoint ns1_IdPublishedPoint;
	for(int i=0; i<150; ++i){
		ns1_IdPublishedPoint.designator += "pPoint";
	}
	
	ns1__Point2D ns1_Point2D;
	ns1_Point2D.range = ns1_Distance;
	ns1_Point2D.bearing = ns1_Angle;
	ns1_Point2D.ref_USCOREid_USCOREpublished_USCOREreference = ns1_IdPublishedPoint;
	
	ns1__Point3D ns1_Point3D;
	ns1_Point3D.altitude = ns1_AlitudeOrLevel;
	ns1_Point3D.position2D = ns1_Point2D;
	
	ns1__Point4D ns1_Point4D;
	ns1_Point4D.time = ns1_Time;
	ns1_Point4D.position3D = ns1_Point3D;
	
	ns1__BoundaryPoint ns1_BoundaryPoint;
	ns1_BoundaryPoint.ns1__BoundaryPointKind = 11;	
	ns1_BoundaryPoint.__sizeref_USCOREid_USCOREdownstream = 12;
	ns1_BoundaryPoint.ref_USCOREid_USCOREdownstream = ns1_IdATCVolume;
	ns1_BoundaryPoint.__sizeref_USCOREid_USCOREupstream = 13;
	ns1_BoundaryPoint.ref_USCOREid_USCOREupstream = ns1_IdATCVolume;
	
	ns1__TrajectoryPoint ns1_TrajectoryPoint;
	for(int i=0; i<150; ++i){
		ns1_TrajectoryPoint.ns1__FlightPhase[i] = 5;
	}
	ns1_TrajectoryPoint.ground_USCOREspeed = ns1_Speed;
	ns1_TrajectoryPoint.heading = ns1_Angle;
	ns1_TrajectoryPoint.mass = ns1_Mass;
	ns1_TrajectoryPoint.ref_USCOREid_USCOREbelongs_USCOREto = ns1_IdATCVolume;
	ns1_TrajectoryPoint.ref_USCOREid_USCOREdesignator = ns1_ExpandedRoutePointIdentifier;
	ns1_TrajectoryPoint.rocd = ns1_RateOfClimbDescent;
	ns1_TrajectoryPoint.track = ns1_Angle;
	ns1_TrajectoryPoint.trj_USCOREpoint_USCOREtype = ns1_TrajectoryPointType;
	ns1_TrajectoryPoint.true_USCOREairspeed = ns1_Speed;
	ns1_TrajectoryPoint.point_USCORE4D = ns1_Point4D;
	ns1_TrajectoryPoint.boundary_USCOREpoint_USCOREinfo = ns1_BoundaryPoint;
	
	ns1__Trajectory ns1_Trajectory, output;
	ns1_Trajectory.ns1__AirborneStatus = 13;
	ns1_Trajectory.last_USCOREoverflown_USCOREpoint = 14;
	ns1_Trajectory.__sizetrajectory_USCOREpoints = 15;
	ns1_Trajectory.trajpoint = ns1_TrajectoryPoint;
	
	DynamicFastBuffers::Bytecode *bytecodeSerialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::SERIALIZE);
	DynamicFastBuffers::Bytecode *bytecodeDeserialization = DynamicFastBuffers::BytecodeAPI::generateBytecode(typecode, DynamicFastBuffers::DESERIALIZE);

	eProsima::FastBuffer fastBuffer(buffer, BUFFER_SIZE);
	eProsima::FastCdr cdr(fastBuffer);

	char *str = "valu";
	std::string str2 = "values";

	printf("Char*: %d\n", sizeof(str2));
	printf("Struct size*: %d\n", sizeof(ns1_Trajectory));

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < 10000; ++count)
	{
		cdr.reset();
		DynamicFastBuffers::SerializerAPI::serialize((void*) &ns1_Trajectory, bytecodeSerialization, &cdr);
		//std::cout << "serializa\n";

		//std::cout << "Serialized length" << cdr.getSerializedDataLength() << endl;
		//break;

		cdr.reset();
		DynamicFastBuffers::SerializerAPI::deserialize((void*) &output, bytecodeDeserialization, &cdr);
		//std::cout << "deserializa\n";
	}

	//free(buffer);

}

}

int main()
{

	testDFB::innerComplexTestDFB();

	testDFB::performanceDFB();

	unitTests::execute();

	align_tests::execute();

	newTests::execute();

	testSesar::testSesar01();

	cout << "FINISHED" << endl;

	string s;
	std::cin >> s;

	return 0;
}
