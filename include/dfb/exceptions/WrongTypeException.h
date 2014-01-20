/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of Dynamic Fast Buffers is licensed to you under the terms described in the
 * DYNAMIC_FAST_BUFFERS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_
#define _CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_

#include "dfb/DFB_dll.h"
#include "fastcdr/exceptions/Exception.h"

namespace DynamicFastBuffers
{
	/*!
	* @brief This class is thrown as an exception when a parameter with a wrong type_ attribute has been specified.
    * @ingroup EXCEPTIONMODULE
	*/
	class Dfb_DllAPI WrongTypeException : public eprosima::Exception
	{
	public:

		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is copied.
		*/
		WrongTypeException (const std::string &message);
		
		/*!
		* @brief Default constructor.
		*
		* @param message An error message. This message is moved.
		*/
		WrongTypeException (std::string&& message);
		
		/*!
		* @brief Default copy constructor.
		*
		* @param ex WrongTypeException that will be copied.
		*/
		WrongTypeException (const WrongTypeException  &ex);
		
		/*!
		* @brief Default move constructor.
		*
		* @param ex WrongTypeException that will be moved.
		*/
		WrongTypeException (WrongTypeException && ex);
		
		/*!
		* @brief Assigment operation.
		*
		* @param ex WrongTypeException that will be copied.
		*/
		WrongTypeException & operator=(const WrongTypeException  &ex);
		
		/*!
		* @brief Assigment operation.
		*
		* @param ex WrongTypeException that will be moved.
		*/
		WrongTypeException & operator=(WrongTypeException && ex);
		
		//! @brief Default constructor
		virtual ~WrongTypeException () throw(){}
		
		//! @brief This function throws the object as an exception.
		virtual void raise() const {throw *this;}
	};
}

#endif //_CPP_EXCEPTIONS_WRONGTYPEEXCEPTION_H_
