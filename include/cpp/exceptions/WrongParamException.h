#ifndef _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
#define _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
#include "FastCdr.h"
#include "FastBuffer.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when a wrong parameter has been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class eProsima_cpp_DllVariable WrongParamException : public eProsima::Exception
	{
	public:

		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is copied.
		*/
		WrongParamException(const std::string &message);

		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is moved.
		*/
		WrongParamException(std::string&& message);

		/*!
		* @brief Default copy constructor.
		*
		* @param ex WrongParamException that will be copied.
		*/
		WrongParamException(const WrongParamException &ex);
		
		/*!
		* @brief Default move constructor.
		*
		* @param ex WrongParamException that will be moved.
		*/
		WrongParamException(WrongParamException&& ex);
		
		/*!
		* @brief Assigment operation.
		*
		* @param ex WrongParamException that will be copied.
		*/
		WrongParamException& operator=(const WrongParamException &ex);
		
		/*!
		* @brief Assigment operation.
		*
		* @param ex WrongParamException that will be moved.
		*/
		WrongParamException& operator=(WrongParamException&& ex);
		
		//! @brief Default constructor
		virtual ~WrongParamException() EPROSIMA_USE_NOEXCEPT;
		
		//! @brief This function throws the object as exception.
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_