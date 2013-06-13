#ifndef _CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_
#define _CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_

#include "Cdr.h"
#include "FastBuffer.h"

namespace DynamicFastBuffers
{
	class WrongTypeException : public eProsima::Exception
	{
	public:
		WrongTypeException (const std::string &message);
		WrongTypeException (std::string&& message);
		WrongTypeException (const WrongTypeException  &ex);
		WrongTypeException (WrongTypeException && ex);
		WrongTypeException & operator=(const WrongTypeException  &ex);
		WrongTypeException & operator=(WrongTypeException && ex);
		virtual ~WrongTypeException ();
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_