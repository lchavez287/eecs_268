#include "Node.h"


/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab5
	Description: BST 
	Last Changed: 3/28/2014 
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
