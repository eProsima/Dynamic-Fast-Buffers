#include <string>
#include <vector>
#include "Cdr.h"
#include "CdrBuffer.h"
#include "eProsima_cpp\eProsima_cpp_dll.h"

using namespace std;


namespace FastBuffers
{
	enum tc_kind {
		TC_NOTYPE = 0,
		TC_INTEGER,
		TC_STRUCT,
		TC_SHORT
	};

	class TypeCode
	{
	private:
		tc_kind kind_;
		TypeCode *members_;
		int count;
	public:
		TypeCode();
		TypeCode(tc_kind kind);
		~TypeCode();
		string getKindStr();
		tc_kind getKind();
		void addMember(TypeCode member, int nMembers);
		void resetPointer();
		TypeCode* getMembers();
		int getCount();
	};

	class Serializer
	{
	private:
		//vector<void*> functions_;
		static void _generateBytecode(vector<void* (*)(eProsima::CDR* cdr, void* data)> &vec, TypeCode &typeCode, bool flag);
	public:
		Serializer();
		~Serializer();
		static vector<void* (*)(eProsima::CDR* cdr, void* data)> generateBytecode(TypeCode &typeCode, bool flag);
		static void* serializeInteger(eProsima::CDR* cdr, void* data);
		static void* serializeShort(eProsima::CDR* cdr, void* data);
		static char* serialize(void* data, char *buffer, vector<void* (*)(eProsima::CDR* cdr, void* data)> bytecode);
		static void* deserializeInteger(eProsima::CDR* cdr, void*data);
		static void* deserializeShort(eProsima::CDR* cdr, void*data);
		static char* deserialize(void* data, char *buffer, vector<void* (*)(eProsima::CDR* cdr, void* data)> bytecode);
	};

	class Parser
	{
	private:

	public:
		Parser();
		~Parser();
		void parse(vector<void*> &functions, TypeCode typeCode);
	};

	class FB_API
	{
	public:
		TypeCode createInteger();
		TypeCode createShort();
		TypeCode createStruct();
		void addStructMember(TypeCode &struc, TypeCode *member, int count);
	};



	
}