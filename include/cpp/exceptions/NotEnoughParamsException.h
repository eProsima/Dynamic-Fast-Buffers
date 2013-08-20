#ifndef _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_
#define _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_

#include "cpp/DFB_dll.h"
#include "cpp/exceptions/Exception.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when no parameters have been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class Dfb_DllAPI NotEnoughParamsException : public eProsima::Exception
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
		virtual ~NotEnoughParamsException();

		//! @brief This function throws the object as exception.
		virtual void raise() const;
	};
}

#endif //_CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_