/**
*	@file : PreconditionViolationException.cpp
*	@author :  Lacie Chavez
*	@date : 04/25/2014
*	Purpose: Implementation of PreconditionViolationException class
*/

#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(const std::string& message) : runtime_error("Exception: " + message)
{
	
}


