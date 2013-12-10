/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
#define _CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_

#include "dfb/DFB_dll.h"
#include "fastcdr/exceptions/Exception.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when a wrong parameter has been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class Dfb_DllAPI WrongParamException : public eprosima::Exception
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
		virtual ~WrongParamException() throw(){}
		
		//! @brief This function throws the object as an exception.
		virtual void raise() const {throw *this;}
	};
}

#endif //_CPP_EXCEPTIONS_WRONGPARAMEXCEPTION_H_
