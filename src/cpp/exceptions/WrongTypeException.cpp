#include "dfb/exceptions/WrongTypeException.h"

namespace DynamicFastBuffers
{
	WrongTypeException::WrongTypeException(const std::string &message) : Exception(message){}

	WrongTypeException::WrongTypeException(std::string&& message) : Exception(std::move(message)){}

	WrongTypeException::WrongTypeException(const WrongTypeException &ex) : Exception(ex){}

	WrongTypeException::WrongTypeException(WrongTypeException&& ex) : Exception(std::move(ex)){}

	WrongTypeException& WrongTypeException::operator=(const WrongTypeException &ex)
	{
		if(this != &ex){
			Exception::operator=(ex);
		}
		return *this;
	}

	WrongTypeException& WrongTypeException::operator=(WrongTypeException&& ex)
	{
		if(this != &ex){
			Exception::operator=(std::move(ex));
		}
		return *this;
	}

}