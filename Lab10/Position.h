/**
*	@file : Position.h
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: header file of Position
*/
#ifndef POSITION_H
#define POSITION_H

class Position
{
	public:
	Position();
	Position(int row, int col);
	int getRow() const;
	int getCol() const;

	private:
	int m_row;
	int m_col;
};
#endif
