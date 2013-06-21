#ifndef _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_
#define _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_

#include "FastCdr.h"
#include "FastBuffer.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when no parameters have been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class eProsima_cpp_DllVariable NotEnoughParamsException : public eProsima::Exception
	{
	public:

		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is copied.
		*/
		NotEnoughParamsException(const std::string &message);

		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is moved.
		*/
		NotEnoughParamsException(std::string&& message);

		/*!
		* @brief Default copy constructor.
		*
		* @param ex NotEnoughParamsException that will be copied.
		*/
		NotEnoughParamsException(const NotEnoughParamsException &ex);

		/*!
		* @brief Default move constructor.
		*
		* @param ex NotEnoughParamsException that will be moved.
		*/
		NotEnoughParamsException(NotEnoughParamsException&& ex);

		/*!
		* @brief Assigment operation.
		*
		* @param ex NotEnoughParamsException that will be copied.
		*/
		NotEnoughParamsException& operator=(const NotEnoughParamsException &ex);

		/*!
		* @brief Assigment operation.
		*
		* @param ex NotEnoughParamsException that will be moved.
		*/
		NotEnoughParamsException& operator=(NotEnoughParamsException&& ex);

		//! @brief Default constructor
		virtual ~NotEnoughParamsException() EPROSIMA_USE_NOEXCEPT;

		//! @brief This function throws the object as exception.
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_