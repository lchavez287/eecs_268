/**
*	@file : PreconditionViolationException.h
*	@author :  Lacie Chavez
*	@date : 04/25/2014
*	Purpose: Header file of PreconditionViolationException
*/

#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H
#include <stdexcept>
#include <iostream>

class PreconditionViolationException : public std::runtime_error
{
	public:
	PreconditionViolationException(const std::string& message = "");
};
#endif
