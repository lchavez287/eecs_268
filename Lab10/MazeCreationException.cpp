/**
*	@file : MazeCreationException.cpp
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: defenition of MazeCreationException
*/
#include "MazeCreationException.h"

MazeCreationException::MazeCreationException(const char* message) : std::runtime_error(message)
{
	
}
//MazeCreationException::MazeCreationException(std::string message) : std::runtime_error("Exception: " + message)
//{
	
//}
