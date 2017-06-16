/*	File Name:main.cpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab4
	Description: templating
	Last Changed: 3/7/2014
*/

#include <iostream> //std::cout std::cin
#include "StackOfNodes.h" //StackOfNodes

int main()
{
	StackOfNodes<int> myStack;	//Create an empty stack
	int sizeOfStack;	//int we'll use later to store the size of the stack
	
	//push some numbers onto the stack
	for(int i = 1; i <= 10; i++)
	{
		myStack.push( i * 5 );
	}


	//Store the size of the stack before popping anything
	sizeOfStack = myStack.size();	

	std::cout << "There are " << sizeOfStack << " items on the stack" << std::endl;

	//Think about why we don't use i<myStack.size()
	for(int i = 0; i < sizeOfStack; i++)
	{
		std::cout << "Popping the top: " << myStack.pop() << std::endl;
	}

        /* while(!myStack.isEmpty()) is another valid way to pop all the contents of the stack */

}
