/*	File Name: StackOfNodes.h
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab4
	Description: templating
	Last Changed: 3/7/2014
*/


#ifndef StackOfNodes_H
#define StackOfNodes_H
#include "Node.h"



template<typename T>
class StackOfNodes
{

	public: //public method declaration
	StackOfNodes();
	bool isEmpty() const;
	int size() const;
	void push(T value);
	T pop();	


	private: //private memeber variables
	Node<T>* m_top;
	int m_size;
	

};
#include "StackOfNodes.hpp"
#endif
