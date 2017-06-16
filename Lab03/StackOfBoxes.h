/*	File Name: StackOfBoxes.h
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab3 
	Description: creating a stack of boxes and impliment the functionalities of a stack
	Last Changed: 2/28/2014
*/
#ifndef STACKOFBOXES_H
#define STACKOFBOXES_H
#include "Box.h"

class StackOfBoxes
{	
	public:
	StackOfBoxes();
	bool isEmpty() const;
	int size() const;
	void push(int n);
	int pop();

	
	private: 
	Box* m_top;
	int m_size;

};

#endif
	
