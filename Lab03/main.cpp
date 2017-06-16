/*	File Name: main.cpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab3 
	Description: creating a stack of boxes and impliment the functionalities of a stack
	Last Changed: 2/28/2014
*/
#include <iostream>
#include "StackOfBoxes.h"

int main()
{	StackOfBoxes myStack;
	int sizeOfStack;
	
	for(int i= 1; i<=10; i++)
	{
		myStack.push(i * 5);
	}
sizeOfStack = myStack.size();
std::cout<<"There are " <<sizeOfStack<<" items on the stack"<<std::endl;

	for(int i =0; i<sizeOfStack; i++)
	{
	std::cout<<"Popping the top: " << myStack.pop() <<std::endl;
	}

}
