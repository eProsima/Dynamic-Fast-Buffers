#ifndef _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
#define _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
#include "Cdr.h"
#include "FastBuffer.h"

namespace DynamicFastBuffers
{
	class WrongParamException : public eProsima::Exception
	{
	public:
		WrongParamException(const std::string &message);
		WrongParamException(std::string&& message);
		WrongParamException(const WrongParamException &ex);
		WrongParamException(WrongParamException&& ex);
		WrongParamException& operator=(const WrongParamException &ex);
		WrongParamException& operator=(WrongParamException&& ex);
		virtual ~WrongParamException();
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_