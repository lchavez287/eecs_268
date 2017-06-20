/**
*	@file : Position.cpp
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: defenition file of Position
*/
#include "Position.h"

Position::Position()
{
}	
Position::Position(int row, int col)
{
	m_row = row;
	m_col = col;
}
int Position::getRow() const
{
	/**
	*	@return row value
	*/
	return m_row;
}
int Position::getCol() const
{
	return m_col;
}
