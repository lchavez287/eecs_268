/**
*	@file : MazeReader.h
*	@author :  Lacie Chavez
*	@date : 04/30/2014
*	Purpose: Header file of MazeReader
*/
#ifndef MAZEREADER_H
#define MAZEREADER_H
#include "MazeCreationException.h"
#include <fstream>
using namespace std;
class MazeReader
{
	public:
	ifstream inFile;
	int row;
	int col;
	int startRow;
	int startCol;
	char** maze;
	
	MazeReader(std::string file) throw (MazeCreationException);
	~MazeReader();
	char** getMaze() const;
	int getCols() const;
	int getRows() const;
	int getStartCol() const;
	int getStartRow() const;
	

	protected:
	void readMaze()	throw (MazeCreationException);

/*You may add any needed member variables.  At the very least, you'll need an instance of ifstream to do the file reading.*/
	
};
#endif
