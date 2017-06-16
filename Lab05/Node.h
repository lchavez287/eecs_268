/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab5
	Description: BST 
	Last Changed: 3/28/2014 
*/
#ifndef NODE_H
#define NODE_H
template<typename T>
class Node
{
	private:
	Node<T>* m_left;
	Node<T>* m_right;
	T m_value;
	
	public:
	Node();
	T getValue();
	Node<T>* getLeft();
	Node<T>* getRight();
	void setValue(T value);
	void setLeft(Node<T>* left);
	void setRight(Node<T>* right);


};
#include "Node.hpp"
#endif

