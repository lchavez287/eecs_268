/**
*	@file : MazeReader.cpp
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: defenition file of MazeReader
*/
#include "MazeReader.h"
#include <iostream>
MazeReader::MazeReader(std::string file)throw (MazeCreationException)
{
	inFile.open(file);
	if(!inFile) //or if rows or cols are zero or less or the start pos is outside the ranges 
	{
		inFile.close();
		throw(MazeCreationException("File could not be opened"));
	}
	else
	{
		inFile >> row;
		inFile >> col;
		inFile >> startRow;
		inFile >> startCol;
		maze = new char* [row];
		for(int i=0; i<row; i++)
		{
			maze[i]= new char [col];	
		}			
		readMaze();
		
	}
}

	
MazeReader::~MazeReader()
{
	for(int i = 0; i< col; i++)
	{
		delete [] maze[i];
	}
	delete [] maze;
}

	
char** MazeReader::getMaze() const
{
	return maze;
}	
int MazeReader::getCols() const
{
	return col;
}
int MazeReader::getRows() const
{
	return row;
}	
int MazeReader::getStartCol() const
{
	return startCol;
}
	
int MazeReader::getStartRow() const
{
	return startRow;
}
void MazeReader::readMaze()	throw (MazeCreationException)
{
	
	
		for(int value=0; value < row; value++)
		{
			for(int value2=0; value2<col;value2++)
			{
				if(!inFile.eof())//if end of file
					{		
						
					inFile >> maze[value][value2];
					 
					}
			else
			{
				throw(MazeCreationException("cannot read maze"));
			}
}
			}
		} 
	
	

	
