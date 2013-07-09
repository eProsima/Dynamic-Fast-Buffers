#include "cpp/CommonData.h"
#include <iostream>

namespace DynamicFastBuffers
{
	/**
	* Class Typecode
	*/
	
	Typecode::Typecode() : kind_(TC_NOTYPE), members_(0), counter_(0), type_(0), dimensions_(1), structSize_(0){};

	Typecode::Typecode(tc_kind kind) : kind_(kind), members_(0), counter_(0), type_(0), dimensions_(1), structSize_(0){};

	Typecode::Typecode(const Typecode& other) : kind_(other.kind_), counter_(other.counter_), members_(other.members_),
		content_(other.content_), type_(other.type_), maxLength_(other.maxLength_), dimensions_(other.dimensions_), structSize_(other.structSize_)
	{
		if(other.type_ != NULL)
		{
			type_ = new Typecode(*other.type_);
		}
	}

	Typecode::~Typecode(){
		if(kind_ == TC_SEQUENCE || kind_ == TC_ARRAY){
			delete(type_);
		}
	};

	tc_kind Typecode::getKind()
	{
		return kind_;
	};

	int Typecode::addMember(Typecode &member) 
	{
		int res = checkType(member.getKind());
		if(res == 0){ //Se puede añadir
			members_.push_back(member);
			int size = member.getSize();
			if(structSize_ < size && member.getKind() != TC_STRUCT){
				structSize_ = size;
			}
			counter_++;
		}
		return res;
	};

	int Typecode::addMemberNoCheck(Typecode &member)
	{
		//testing

//#define __linux 1

		//endTesting


		members_.push_back(member);
		int size = member.getSize();
#if defined(__linux)
		if(structSize_ < size){
			structSize_ = size;
		}
#else
		if(structSize_ < size/* && member.getKind() != TC_STRUCT*/){
			structSize_ = size;
		}
#endif
		++counter_;
		return 0;
	}

	int Typecode::checkType(tc_kind kind)
	{
		switch(kind_)
		{
		case TC_NOTYPE:
		case TC_INTEGER:
		case TC_SHORT:
		case TC_LONG:
		case TC_FLOAT:
		case TC_DOUBLE:
		case TC_STRING:
		case TC_CHARACTER:
		case TC_BOOLEAN:
			return -1;
		case TC_STRUCT:
		case TC_UNION:
			return 0;
		case TC_ARRAY:
				return -2;
		case TC_SEQUENCE:
		case TC_ENUM:
			if((kind >=TC_INTEGER) && (kind < TC_STRUCT)){ //Intentando añadir tipo primitivo, struct o union
				return 0;
			}else{
				return -3;
			}
		}
		return 0;
	}

	void Typecode::setContent(vector<int> &content)
	{
		content_ = content;
	}

	int Typecode::getArraySize()
	{
		if(kind_ == TC_STRUCT){
			return counter_;
		}
		return dimensions_;
	}

	void Typecode::setArraySize(int size)
	{
		dimensions_ = size;
	}

	void Typecode::setType(Typecode *type)
	{
		type_ = type;
	}

	void Typecode::setMaxLength(int maxLength)
	{
		maxLength_ = maxLength;
	}

	string Typecode::getKindStr(){
		switch(kind_)
		{
			case TC_NOTYPE:
				return "TC_NOTYPE";
			case TC_INTEGER:
				return "TC_INTEGER";
			case TC_SHORT:
				return "TC_SHORT";
			case TC_LONG:
				return "TC_LONG";
			case TC_FLOAT:
				return "TC_FLOAT";
			case TC_DOUBLE:
				return "TC_DOUBLE";
			case TC_STRING:
				return "TC_STRING";
			case TC_CHARACTER:
				return "TC_CHARACTER";
			case TC_BOOLEAN:
				return "TC_BOOLEAN";
			case TC_STRUCT:
				return "TC_STRUCT";
			case TC_UNION:
				return "TC_UNION";
			case TC_ARRAY:
				return "TC_ARRAY";
			case TC_SEQUENCE:
				return "TC_SEQUENCE";
			case TC_ENUM:
				return "TC_ENUM";
			default:
				return "ERROR";
		}
	}

	vector<Typecode> Typecode::getMembers()
	{
		return members_;
	}

	int Typecode::getConstentSize()
	{
		return content_.size();
	}

	vector<int> Typecode::getDimensions()
	{
		return content_;
	}

	Typecode* Typecode::getType()
	{
		return type_;
	}

	int Typecode::getSize()
	{
		switch(kind_)
		{
		case TC_NOTYPE:
			break;
		case TC_INTEGER:
			return sizeof(int32_t);
			break;
		case TC_SHORT:
			return sizeof(short);
			break;
		case TC_LONG:
#if defined(__linux)
#if defined(__i386)
			return sizeof(int32_t);
#else
			return sizeof(int64_t);
#endif
#else
			return sizeof(int64_t);
#endif
			break;
		case TC_FLOAT:
			return sizeof(float);
			break;
		case TC_DOUBLE:
			//return sizeof(double);
#if defined(__linux)
#if defined(__i386)
			return sizeof(int32_t);
#else
			return sizeof(int64_t);
#endif
#else
			return sizeof(int64_t);
#endif
			break;
		case TC_STRING:
			return sizeof(void*);
			break;
		case TC_CHARACTER:
			return sizeof(char);
			break;
		case TC_BOOLEAN:
			return sizeof(bool);
			break;
		case TC_STRUCT:
#if defined(__linux)
			return sizeof(void*);
#else
			return structSize_;
#endif
			//return structSize_;
			break;
		case TC_UNION:
		case TC_ARRAY:
			{
				switch(type_->getKind())
				{
				case TC_NOTYPE:
					break;
				case TC_INTEGER:
					return sizeof(int32_t);
					break;
				case TC_SHORT:
					return sizeof(short);
					break;
				case TC_LONG:

					return sizeof(int64_t);
					break;
				case TC_FLOAT:
					return sizeof(float);
					break;
				case TC_DOUBLE:
					return sizeof(double);
					break;
				case TC_STRING:
					//Not supported
					break;
				case TC_CHARACTER:
					return sizeof(char);
					break;
				case TC_BOOLEAN:
					//Not supported
					break;
				}
			}
			break;
		case TC_SEQUENCE:
			return sizeof(void*);
			break;
		case TC_ENUM:
			break;
		}
		return sizeof(int);
	}

	/**
	* Class Bytecode
	*/
	Bytecode::Bytecode(){
		pAlignment_ = new vector<int>;
		bytecode_ = new vector<CALLBACK>;
		size_ = new int;
	};

	Bytecode::~Bytecode(){};

	void Bytecode::addFunction(CALLBACK function)
	{
		bytecode_->push_back(function);
	}

	vector<CALLBACK>* Bytecode::getBytecode()
	{
		return bytecode_;
	}

	vector<int>* Bytecode::getAlignment()
	{
		return pAlignment_;
	}

	void Bytecode::addAlignment(int value)
	{
		pAlignment_->push_back(value);
	}

	void Bytecode::setSize(int &size)
	{
		*size_ = size;
	}
};
