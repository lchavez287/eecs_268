/**
*	@file : MazeWalker.cpp
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: defenition file of MazeWalker
*/
#include "MazeWalker.h"

MazeWalker::MazeWalker(char** mazePtr, int startRow, int startCol, int rows, int cols, bool dfs)
{
	m_maze= mazePtr;
	m_rows = rows;
	m_cols = cols;
	m_startPos = Position(startRow, startCol);
	m_isDFS = dfs;
	m_visited = new bool* [m_rows];
	for(int i=0; i<rows; i++)
	{
		m_visited[i]= new bool [m_cols];
	}	
	for(int i =0; i<rows; i++) //sets all value of the maze to not visited
	{
		for(int j=0; j< cols; j++)
		{
			m_visited[i][j]=  false;
		}
		
	}
m_visited[startRow][startCol]=  true; //sets start position to visited

storeValidMoves(); //stores the possible valid moves
}

	
void MazeWalker::walkMaze() 
{
	if(m_isDFS == true) //dfs traversal
	{
			for(int i =0; i<m_rows; i++) // a loop here to print visited position at [0][0]
			{
			
				
				for(int j=0; j< m_cols; j++)
			{
								
				cout << m_visited[i][j];
			}
				cout<< "\n";	
			}
			cout<< "visited position ("<<m_curPos.getRow() <<") ("<<m_curPos.getCol()<<") \n";
		
		while(m_maze[m_curPos.getRow()][m_curPos.getCol()] != 'E')
		{
			
			storeValidMoves();
			move(m_moveStack.top());
			m_moveStack.pop();
			isGoalReached();
			for(int i =0; i<m_rows; i++) //prints as it traverses and shows visited positions
			{
			
				
				for(int j=0; j< m_cols; j++)
			{
								
				cout << m_visited[i][j];
			}
				cout<< "\n";	
			}
			cout<< "visited position ("<<m_curPos.getRow() <<") ("<<m_curPos.getCol()<<") \n";
		
			walkMaze();
			return;
		
		}			
		
		
	}
	else //for bfs traversal
	{
		for(int i =0; i<m_rows; i++) // a loop here to print visited position at [0][0]
			{
			
				
				for(int j=0; j< m_cols; j++)
			{
								
				cout << m_visited[i][j];
			}
				cout<< "\n";	
			}
			cout<< "visited position ("<<m_curPos.getRow() <<") ("<<m_curPos.getCol()<<") \n";
		while(m_maze[m_curPos.getRow()][m_curPos.getCol()] != 'E')
		{
			storeValidMoves();
			move(m_moveQueue.front());
			m_moveQueue.pop();
			isGoalReached();
			for(int i =m_rows; i>0; i++) //prints as it traverses and shows visited positions
			{
			
				
				for(int j=m_cols; j> 0; j++)
			{
								
				cout << m_visited[i][j];
			}
				cout<< "\n";	
			}
			cout<< "visited position ("<<m_curPos.getRow() <<") ("<<m_curPos.getCol()<<") \n";
			walkMaze();		
			//return;
		}
	}
	
 /**
	*	@pre The maze is a valid maze.
	*	@post The maze is traversed until (either dfs or bfs) the end is reached or all moves are exhausted. The visited array printed during the traversal.
	*/
}
void MazeWalker::storeValidMoves() //all of the if statments check bounds first then if the position is a Wall then if the position has already been visited the inside pushes the position on the stack or queue
{
	if(m_curPos.getRow() != 0 && m_maze[m_curPos.getRow()-1][m_curPos.getCol()]!='W' && m_visited[m_curPos.getRow()-1][m_curPos.getCol()] == false )
	{
		if(m_isDFS == true)
		{
			m_moveStack.push(Position(m_curPos.getRow()-1, m_curPos.getCol() ));
		}
		else
		{
			m_moveQueue.push(Position(m_curPos.getRow()-1, m_curPos.getCol() ));
		}
		
	}
	if(m_curPos.getRow() != m_rows-1 && m_maze[m_curPos.getRow()+1][m_curPos.getCol()]!= 'W' && m_visited[m_curPos.getRow()+1][m_curPos.getCol()]== false )
	{
		
		if(m_isDFS == true)
		{
			m_moveStack.push(Position(m_curPos.getRow()+1, m_curPos.getCol()));
		}
		else
		{
			m_moveQueue.push(Position(m_curPos.getRow()+1, m_curPos.getCol()));
		}
		
	}
	if(m_curPos.getCol() != 0 && m_maze[m_curPos.getRow()][m_curPos.getCol()-1]!= 'W' && m_visited[m_curPos.getRow()][m_curPos.getCol()-1] ==false)
	{
		if(m_isDFS == true)
		{
			m_moveStack.push(Position(m_curPos.getRow(), m_curPos.getCol()-1));
		}
		else
		{
			m_moveQueue.push(Position(m_curPos.getRow(), m_curPos.getCol()-1));			
		}
					
	}
	if(m_curPos.getCol() != m_cols-1 && m_maze[m_curPos.getRow()][m_curPos.getCol()+1]!= 'W' && m_visited[m_curPos.getRow()][m_curPos.getCol()+1] == false)
	{
		if(m_isDFS == true)
		{
			m_moveStack.push(Position(m_curPos.getRow(), m_curPos.getCol()+1));
		}
		else
		{
		m_moveQueue.push(Position(m_curPos.getRow(), m_curPos.getCol()+1));
		}	
		
	}
}
void MazeWalker::move(Position& p)
{
	m_curPos= p;
	m_visited[m_curPos.getRow()][m_curPos.getCol()] = true;

}	
bool MazeWalker::isGoalReached() const
{
	if(m_maze[m_curPos.getRow()][m_curPos.getCol()] == 'E')
	{
		return true;
	}
	else
	{
		return false;
	}	

}

