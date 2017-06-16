/*	File Name: StackOfNodes.cpp
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab4
	Description: templating
	Last Changed: 3/7/2014
*/


#include "StackOfNodes.h"
#include "iostream"

template<typename T>
StackOfNodes<T>::StackOfNodes()
{
	m_size=0;
	m_top=nullptr;
}

template<typename T>
bool StackOfNodes<T>::isEmpty()const
{
	if(m_size==0)
	{
		return true;
	}	
return false;
}

template<typename T>
int StackOfNodes<T>::size()const
{
	return m_size;
}

template<typename T>
void StackOfNodes<T>::push(T value)//needs more work!!!
{
	Node<T>* Pointer; //creates new pointer
	Pointer= m_top;
	m_top = new Node<T>();//creates a new node
	m_top->setValue(value); //sets the new top value	
	m_top->setPrevious(Pointer); //the pointer is set to the previous value
	//std::cout<<m_top->getValue()<<"\n";
	m_size++; //increases the size by 1
}

template<typename T>
T StackOfNodes<T>::pop()
{
	T copyValue; //new variable
	copyValue=m_top->getValue();//copies the value of the top node
	Node<T>* copyPtr;//new pointer
	copyPtr=m_top->getPrevious();//copys the previous value	
	delete m_top;
	m_top=copyPtr; //the previous value is now on top
	m_size--;
	return(copyValue);

}
