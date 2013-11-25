/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_
#define _CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_

#include "dfb/DFB_dll.h"
#include "fastcdr/exceptions/Exception.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when no parameters have been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class Dfb_DllAPI NotEnoughParamsException : public eprosima::Exception
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
		virtual ~NotEnoughParamsException() throw(){}

		//! @brief This function throws the object as exception.
		virtual void raise() const {throw *this;}
	};
}

#endif //_CPP_EXCEPTIONS_NOTENOUGHEXCEPTION_H_
