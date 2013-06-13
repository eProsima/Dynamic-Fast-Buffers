#ifndef _COMMON_DATA_
#define _COMMON_DATA_

#include <stdint.h>
#include <vector>
#include <array>

#include "FastCdr.h"
#include "FastBuffer.h"

using namespace std;

namespace DynamicFastBuffers
{

	/**
	* Enum tc_kind
	*/
	enum tc_kind 
	{
		TC_NOTYPE = 0,
		TC_INTEGER,
		TC_SHORT,
		TC_LONG,
		TC_FLOAT,
		TC_DOUBLE,
		TC_STRING,
		TC_CHARACTER,
		TC_BOOLEAN,
		TC_STRUCT,
		TC_UNION,
		TC_ARRAY,
		TC_SEQUENCE,
		TC_ENUM
	};

	/**
	*
	*/
	enum flag
	{
		FLAG_FALSE = 0,
		FLAG_TRUE
	};

	typedef void* (*CALLBACK) (eProsima::FastCdr* cdr, void* data, int &size);

	/**
	* Class Typecode
	*/
	class Typecode
	{
	private:
		tc_kind kind_;
		int counter_;
		vector<Typecode> members_;
		vector<int> content_;
		Typecode *type_;
		int maxLength_;
		int dimensions_;
		
		int checkType(tc_kind kind);
	public:
		Typecode();
		Typecode(tc_kind kind);
		Typecode(const Typecode& other);
		virtual ~Typecode();
		tc_kind getKind();
		int addMember(Typecode &member);
		int addMemberNoCheck(Typecode &member);
		void setContent(vector<int> &content);
		void setType(Typecode *type);
		void setMaxLength(int maxLength);
		vector<Typecode> getMembers();
		string getKindStr();
		int getConstentSize();
		vector<int> getDimensions();
		Typecode* getType();
		int getSize();
		int getArraySize();
		void setArraySize(int size);
	};

	/**
	* Class Bytecode
	*/
	class Bytecode
	{
	private:
		vector<CALLBACK>* bytecode_;
		vector<int> *pAlignment_;
		int* size_;
	public:
		Bytecode();
		~Bytecode();
		void addFunction(CALLBACK function);
		vector<int>* getAlignment();
		void addAlignment(int value);
		vector<CALLBACK>* getBytecode();
		void setSize(int &size);
		int* getSize();
	};
};

#endif //_COMMON_DATA_