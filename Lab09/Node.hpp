#include "Node.h"


/*	File Name: Node.hpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab9
	Description: implementation of Node class
	Last Changed: 4/25/2014
*/
template<typename T>
Node<T>::Node()
{
	m_left= nullptr;
	m_right= nullptr;
}

template<typename T>
T Node<T>::getValue()
{	
	return m_value;
}

template<typename T>
Node<T>* Node<T>::getLeft()
{
	return m_left;
}

template<typename T>
Node<T>*Node<T>::getRight()
{
	return m_right;
}

template<typename T>
void Node<T>::setValue(T value)
{
	m_value= value;
}

template<typename T>
void Node<T>::setLeft(Node<T>*left)
{
	m_left= left;
}

template<typename T>
void Node<T>::setRight(Node<T>*right)
{
	m_right= right;
}
