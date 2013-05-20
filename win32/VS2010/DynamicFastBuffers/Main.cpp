#include <iostream>
#include <cstdlib>
#include <time.h>
#include "IFastBuffers.h"
#include "Cdr.h"
#include "CdrBuffer.h"
#include <vector>
#include <stdint.h>
#include <cstdio>


void test1();
void test2();
void test3();
void test4();
void test5();
void testRendimiento();

int main()
{
	string str2;

	testRendimiento();

	cin >> str2;
	return 0;
}

void test1()
{
	
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createInteger();
	cout << typecode1.getKindStr() << endl;
	cout << typecode2.getKindStr() << endl;

	FastBuffers::TypeCode *members;
	
	FastBuffers::TypeCode struc = fb.createStruct();
	/*FastBuffers::TypeCode membersArray[2];
	membersArray[0] = typecode1;
	membersArray[1] = typecode2;
	members = membersArray;*/
	members = (FastBuffers::TypeCode*) malloc(2*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;

	fb.addStructMember(struc, members, 2);

	FastBuffers::TypeCode struc2 = fb.createStruct();
	/*FastBuffers::TypeCode membersArray2[3];
	membersArray2[0] = fb.createShort();
	membersArray2[1] = fb.createShort();
	membersArray2[2] = struc;
	members = membersArray2;*/
	members = (FastBuffers::TypeCode*) malloc(3*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	members[2] = struc;
	
	fb.addStructMember(struc2, members, 3);

	
	cout << struc2.getKindStr() << endl;
}

struct sTest1
{
	int n;
	int j;
};

struct sTest2
{
	int n;
	int j;
	sTest1 test1;
};

void test2()
{
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createShort();
	FastBuffers::TypeCode *members;
	FastBuffers::TypeCode struc = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(2*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;

	fb.addStructMember(struc, members, 2);
	
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc, true);
	char buffer[500];
	struct sTest1 stest1;
	stest1.n = 5;
	stest1.j = 2;
	FastBuffers::Serializer::serialize((void*) &stest1, buffer, functions);
	
}

void test3()
{
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createInteger();
	FastBuffers::TypeCode *members;
	FastBuffers::TypeCode struc = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(2*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	fb.addStructMember(struc, members, 2);

	FastBuffers::TypeCode struc2 = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(3*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	members[2] = struc;
	fb.addStructMember(struc2, members, 3);
	
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc2, true);
	char buffer[500];
	
	struct sTest1 stest1;
	stest1.n = 5;
	stest1.j = 2;

	struct sTest2 stest2;
	stest2.n = 5;
	stest2.j = 2;
	stest2.test1 = stest1;
	FastBuffers::Serializer::serialize((void*) &stest2, buffer, functions);
}

void test4()
{
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createShort();
	FastBuffers::TypeCode *members;
	FastBuffers::TypeCode struc = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(2*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;

	fb.addStructMember(struc, members, 2);
	
	//Serialize
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc, true);
	char buffer[500];
	struct sTest1 stest1;
	stest1.n = 5;
	stest1.j = 2;
	FastBuffers::Serializer::serialize((void*) &stest1, buffer, functions);

	//Deserialize
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions2 = FastBuffers::Serializer::generateBytecode(struc, false);
	struct sTest1 stest2;
	FastBuffers::Serializer::deserialize((void*) &stest2, buffer, functions2);

}

void test5()
{
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createInteger();
	char buffer[500];
	char* pBuffer = buffer;
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(typecode1, true);
	int i=8;
	FastBuffers::Serializer::serialize((void*) &i, buffer, functions);
	functions = FastBuffers::Serializer::generateBytecode(typecode2, true);
	int j=3;
	pBuffer+=sizeof(int);
	FastBuffers::Serializer::serialize((void*) &j, pBuffer, functions);

	int a, b;
	functions = FastBuffers::Serializer::generateBytecode(typecode1, false);
	FastBuffers::Serializer::deserialize((void*) &a, buffer, functions);
	functions = FastBuffers::Serializer::generateBytecode(typecode2, false);
	FastBuffers::Serializer::deserialize((void*) &b, pBuffer, functions);

}

void testRendimiento()
{
	//Data creation
	char buffer[500];
	struct sTest1 stest1;
	stest1.n = 5;
	stest1.j = 2;

	struct sTest2 stest2;
	stest2.n = 5;
	stest2.j = 2;
	stest2.test1 = stest1;

	struct sTest2 stest3;

	//Time calc
	clock_t inicio, fin;
    inicio=clock();

	//TypeCode creation
	FastBuffers::FB_API fb;
	FastBuffers::TypeCode typecode1 = fb.createInteger();
	FastBuffers::TypeCode typecode2 = fb.createInteger();
	FastBuffers::TypeCode *members;
	
	FastBuffers::TypeCode struc = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(2*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	fb.addStructMember(struc, members, 2);

	FastBuffers::TypeCode struc2 = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(3*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	members[2] = struc;
	fb.addStructMember(struc2, members, 3);

	FastBuffers::TypeCode struc3 = fb.createStruct();
	members = (FastBuffers::TypeCode*) malloc(3*sizeof(FastBuffers::TypeCode));
	members[0] = typecode1;
	members[1] = typecode2;
	members[2] = struc;
	fb.addStructMember(struc3, members, 3);

	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc2, true);
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions2 = FastBuffers::Serializer::generateBytecode(struc3, false);

	for(int i=0; i< 1000000; ++i)
	{
		//Serialize
		FastBuffers::Serializer::serialize((void*) &stest2, buffer, functions);

		//Deserialize
		FastBuffers::Serializer::deserialize((void*) &stest3, buffer, functions2);
	}

	//Time calc
	fin = clock();
	cout << "Tiempo: " << ((float)(fin-inicio)/(float)CLOCKS_PER_SEC) << "\n";

	
}

