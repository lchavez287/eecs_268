/*	File Name: StackOfBoxes.cpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab3 
	Description: creating a stack of boxes and impliment the functionalities of a stack
	Last Changed: 2/28/2014
*/

#include "StackOfBoxes.h"
#include "iostream"


StackOfBoxes::StackOfBoxes()//creates a stack of boxes
{
	m_top = nullptr;	
	m_size =0;

}

bool StackOfBoxes::isEmpty() const //checks to see the size of the stack but does not alter stack
{
	if(m_size == 0)

	{
		return true;
	}
		return false;

}

int StackOfBoxes::size() const //returns the size of the stack but does not alter stack
{
	return m_size;

}

void StackOfBoxes::push(int value)
{
	
	Box* ptr;//creates a pointer 
	ptr= m_top;//the pointer stores copies m_top
	m_top= new Box();//m_top is changed to the new box. 
	m_top->m_value= value; // the value of m_top is now the value of the new box
	m_top->m_previous= ptr;	//the pointer is coppied to m_previous
	m_size++;//the size of the stack is increased by 1
	
}

int StackOfBoxes::pop()
{
	int copyValue; 
	Box* copyPtr; //a new pointer
	copyValue= m_top->m_value; //the new int copyValue is now equal to the current m_top value
	copyPtr=m_top->m_previous;// the pointer is equal to m_top previous value
	delete m_top;//the top box is deleted from the stack
	m_top=copyPtr;//m_top is now the previous value
	m_size--;//the size of the stack is decreased by 1
	return(copyValue);// the value of the new m_top is returned.

}
