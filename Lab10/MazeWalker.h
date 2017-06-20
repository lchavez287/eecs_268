/**
*	@file : MazeWalker.h
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: Header file of MazeWalker
*/
#ifndef MAZEWALKER_H
#define MAZEWALKER_H
#include "MazeReader.h"
#include "Position.h"
#include <stack>
#include <queue>
#include <iostream>

class MazeWalker
{
	  public:
 	MazeWalker(char** mazePtr, int startRow, int startCol, int rows, int cols, bool dfs);
	void walkMaze();

	protected:
	void storeValidMoves();
	void move(Position& p);		
	bool isGoalReached() const;
	void print(bool visited, int row, int col);

        //member variables
	bool m_isDFS;
	char** m_maze;
	bool** m_visited;
	int m_rows, m_cols;
	Position m_curPos;
	Position m_startPos;

	std::stack<Position> m_moveStack;
	std::queue<Position> m_moveQueue;
};
#endif
