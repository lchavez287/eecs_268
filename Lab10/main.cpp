/**
*	@file : main.cpp
*	@author :  Lacie Chavez
*	@date : 2014.05.8
*	Purpose: main file
*/

#include <iostream>
#include <fstream>
#include "MazeReader.h"
#include "MazeWalker.h"
//#include "MazeCreationException.h"
using namespace std;

int main(int arg, char* arga[])
{
	//varibale creation/inititalization
	string filename = arga[1];
	string dsearch = arga[2];
	MazeReader* mread =nullptr;
	MazeWalker* walker = nullptr;
	
	try
	{
	cout<<arga[2];
	mread = new MazeReader(filename);


	bool dfs;
	if(dsearch == "-dfs")
	{
		dfs = true;
	walker = new MazeWalker(mread->getMaze(), mread->getStartRow(), mread->getStartCol(), mread->getRows(), mread->getCols(), dfs);//creates a new mazewalker
	walker->walkMaze(); 
	delete mread;
	delete walker;

	}
	if(dsearch == "-bfs")
	{
		dfs = false;
		walker = new MazeWalker(mread->getMaze(), mread->getStartRow(), mread->getStartCol(), mread->getRows(), mread->getCols(), dfs);
	walker->walkMaze();
	delete mread;
	delete walker;
	}

	}
	catch(MazeCreationException e)
	{
		cout<< e.what();
	}
}
