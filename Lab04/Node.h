/*	File Name: Node.h
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab4
	Description: templating
	Last Changed: 3/7/2014
*/

#ifndef NODE_H
#define NODE_H


template<typename T>
class Node
{
	public: //public method declarations
	Node();
	T getValue();
	Node<T>* getPrevious();
	void setValue(T value);
	void setPrevious(Node<T>* previous);
	
	private: //private member variables
	Node<T>* m_previous;
	T m_value;
	
};
	
	
#include "Node.hpp"
#endif
