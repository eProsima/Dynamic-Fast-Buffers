#ifndef _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_
#define _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_

#include "Cdr.h"
#include "FastBuffer.h"

namespace DynamicFastBuffers
{
	class NotEnoughParamsException : public eProsima::Exception
	{
	public:
		NotEnoughParamsException(const std::string &message);
		NotEnoughParamsException(std::string&& message);
		NotEnoughParamsException(const NotEnoughParamsException &ex);
		NotEnoughParamsException(NotEnoughParamsException&& ex);
		NotEnoughParamsException& operator=(const NotEnoughParamsException &ex);
		NotEnoughParamsException& operator=(NotEnoughParamsException&& ex);
		virtual ~NotEnoughParamsException();
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_