/**
*	@file : MazeCreationException.h
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: Header file of MazeCreationException
*/
#ifndef MAZECREATIONEXCEPTION_H
#define MAZECREATIONEXEPTION_H
#include <stdexcept>
#include <string>

class MazeCreationException : public std::runtime_error
{
	public:
	MazeCreationException(const char* message);
	//MazeCreationException( std::string message);
};
#endif
