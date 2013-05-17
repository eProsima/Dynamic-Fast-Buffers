#include <iostream>
#include <cstdlib>
#include "IFastBuffers.h"
#include "Cdr.h"
#include "CdrBuffer.h"
#include <vector>
#include <stdint.h>
#include <cstdio>


void test1();
void test2();
void test3();

int main()
{
	string str2;

	test3();

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
	
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc);
	char buffer[500];
	struct sTest1 stest1;
	stest1.n = 5;
	stest1.j = 2;
	FastBuffers::Serializer::serialize((void*) &test1, buffer, functions);

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
	
	vector<void* (*)(eProsima::CDR* cdr, void* data)> functions = FastBuffers::Serializer::generateBytecode(struc2);
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

