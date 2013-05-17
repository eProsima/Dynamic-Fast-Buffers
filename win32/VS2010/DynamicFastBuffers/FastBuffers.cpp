#include "IFastBuffers.h"

#include <iostream>
#include <stdint.h>
//#include <vector>
#include <string>

using namespace std;
using namespace eProsima;

namespace FastBuffers
{

TypeCode::TypeCode() : kind_(TC_NOTYPE), members_(0), count(0){};

TypeCode::TypeCode(tc_kind kind) : kind_(kind), members_(0), count(0){}

TypeCode::~TypeCode(){}

string TypeCode::getKindStr(){
	switch(kind_)
	{
		case TC_NOTYPE:
			return "TYPE_NOTYPE";
		case TC_INTEGER:
			return "TYPE_INTEGER";
		case TC_SHORT:
			return "TYPE_SHORT";
		case TC_STRUCT:
			{
				string ret = "TYPE_STRUCT{";
				for(int i=0; i < count; i++){
					ret += members_[i].getKindStr() + ((i!=count-1)? ", " : "");
				}
				ret +=  "}";
				return ret;
			}
		default:
			return "ERROR";
	}
}

tc_kind TypeCode::getKind()
{
	return kind_;
}

void TypeCode::addMember(TypeCode member, int nMembers)
{
	if(!members_){
		members_ = (TypeCode*) malloc(nMembers*sizeof(member));
	}
	*members_ = member;
	members_ ++;
	count +=1;
}

void TypeCode::resetPointer()
{
	members_ -= count;
}

TypeCode* TypeCode::getMembers()
{
	return members_;
}

int TypeCode::getCount()
{
	return count;
}

/*Class Serializer*/

Serializer::Serializer(){}

Serializer::~Serializer(){}

vector<void* (*)(eProsima::CDR* cdr, void* data)> Serializer::generateBytecode(TypeCode &typeCode)
{
	vector<void* (*)(eProsima::CDR* cdr, void* data)> ret;
	_generateBytecode(ret, typeCode);
	return ret;
}

void Serializer::_generateBytecode(vector<void* (*)(eProsima::CDR* cdr, void* data)> &vec, TypeCode &typeCode)
{
	switch(typeCode.getKind())
	{
		case TC_NOTYPE:
			//Do nothing
			break;
		case TC_INTEGER:
			vec.push_back(Serializer::serializeInteger);
			break;
		case TC_SHORT:
			vec.push_back(Serializer::serializeShort);
			break;
		case TC_STRUCT:
			//TODO: Implement Behaviour
			{
				TypeCode* members = typeCode.getMembers();
				int count = typeCode.getCount();
				for(int i=0; i<count; i++){
					Serializer::_generateBytecode(vec, members[i]);
				}
			}
		default:	
			//Do Nothing
			break;
	}
}

char* Serializer::serialize(void* data, char *buffer, vector<void* (*)(eProsima::CDR* cdr, void* data)> bytecode)
{
	//Crear objetos CDR
	eProsima::CDRBuffer cdrBuffer(buffer, 500);
	eProsima::CDR cdr(cdrBuffer);
	void *val = data;
	for(vector<void* (*)(eProsima::CDR* cdr, void* data)>::iterator it = bytecode.begin(); it != bytecode.end(); ++it){
		val = (*it)(&cdr, val);
		cout << "VAL:" << val << endl;
	}

	return buffer;
}

void* Serializer::serializeInteger(eProsima::CDR* cdr, void* data)
{
	int *p = (int *) data;
	cout << "P:" << p << endl;
	cdr->serialize(*p);
	p+=1;
	cout <<"P:" <<  p << endl;
	return (void*) p;
}

void* Serializer::serializeShort(eProsima::CDR* cdr, void* data)
{
	short *s = (short *) data;
	cout << "S:" << s << endl;
	cdr->serialize(*s);
	s+=1;
	cout << "S:" << s << endl;
	return (void*) s;
}

/*Serializer::Serializer(eProsima::CDR& cdr, TypeCode typeCode)
{
	Parser parser;
	parser.parse(functions_, typeCode);

	switch(typeCode.getKind())
	{
		case(TC_NOTYPE):
			//Do nothing;
		case(TC_INTEGER):
			//functions_.push_back();
		case(TC_SHORT):

		case(TC_STRUCT):

		default:

	}
}*/

/*Class Parser*/

Parser::Parser(){};

Parser::~Parser(){};

void Parser::parse(vector<void*> &functions, TypeCode typeCode)
{
/*	switch(typeCode.getKind())
	{
		case(TC_NOTYPE):
			//Do nothing;
		case(TC_INTEGER):

		case(TC_SHORT):

		case(TC_STRUCT):

		default:

	}*/
}

/*FB_API*/

TypeCode FB_API::createInteger()
{
	return TypeCode(TC_INTEGER);
}

TypeCode FB_API::createShort()
{
	return TypeCode(TC_SHORT);
}

TypeCode FB_API::createStruct()
{
	return TypeCode(TC_STRUCT);
}

void FB_API::addStructMember(TypeCode &struc, TypeCode *members, int count)
{
	for (int i=0; i<count; i++){
		struc.addMember(members[i], count);
	}
	struc.resetPointer();
	free(members);
}

			
};//namespace FastBuffers

	

