#include "WrongParamException.h"

namespace DynamicFastBuffers
{
	WrongParamException::WrongParamException(const std::string &message) : Exception(message){}

	WrongParamException::WrongParamException(std::string&& message) : Exception(std::move(message)){}

	WrongParamException::WrongParamException(const WrongParamException &ex) : Exception(ex){}

	WrongParamException::WrongParamException(WrongParamException&& ex) : Exception(std::move(ex)){}

	WrongParamException& WrongParamException::operator=(const WrongParamException &ex)
	{
		if(this != &ex){
			Exception::operator=(ex);
		}
		return *this;
	}

	WrongParamException& WrongParamException::operator=(WrongParamException&& ex)
	{
		if(this != &ex){
			Exception::operator=(std::move(ex));
		}
		return *this;
	}

	WrongParamException::~WrongParamException(){}

	void WrongParamException::raise() const
	{
		throw *this;
	}
}