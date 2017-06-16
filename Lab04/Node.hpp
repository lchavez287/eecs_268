/*	File Name: Node.hpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab4
	Description: templating
	Last Changed: 3/7/2014
*/

#include "Node.h"

template<typename T>
Node<T>::Node()
{
	m_previous=nullptr;
	
}

template<typename T>
T Node<T>::getValue()
{
	return m_value;

}

template<typename T>
Node<T>* Node<T>::getPrevious()
{
	return m_previous;

}

template<typename T>
void Node<T>::setValue(T value)
{
	m_value= value;

}

template<typename T>
void Node<T>::setPrevious(Node<T>* previous)
{
	m_previous= previous;

}
