#include "cpp\exceptions\NotEnoughParamsException.h"

namespace DynamicFastBuffers
{
	NotEnoughParamsException::NotEnoughParamsException(const std::string &message) : Exception(message){}

	NotEnoughParamsException::NotEnoughParamsException(std::string&& message) : Exception(std::move(message)){}

	NotEnoughParamsException::NotEnoughParamsException(const NotEnoughParamsException &ex) : Exception(ex){}

	NotEnoughParamsException::NotEnoughParamsException(NotEnoughParamsException&& ex) : Exception(std::move(ex)){}

	NotEnoughParamsException& NotEnoughParamsException::operator=(const NotEnoughParamsException &ex)
	{
		if(this != &ex){
			Exception::operator=(ex);
		}
		return *this;
	}

	NotEnoughParamsException& NotEnoughParamsException::operator=(NotEnoughParamsException&& ex)
	{
		if(this != &ex){
			Exception::operator=(std::move(ex));
		}
		return *this;
	}

	NotEnoughParamsException::~NotEnoughParamsException(){}

	void NotEnoughParamsException::raise() const
	{
		throw *this;
	}
}