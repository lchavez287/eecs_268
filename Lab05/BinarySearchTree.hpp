/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab5
	Description: BST 
	Last Changed: 3/28/2014 
*/
#include "BinarySearchTree.h"
#include<iostream>
using namespace std;

//public methods
template<typename T>
BinarySearchTree<T>::BinarySearchTree()
{
	m_root = nullptr;
}

template<typename T>
BinarySearchTree<T>::~BinarySearchTree()
{
	deleteTree(m_root);
}

template<typename T>
void BinarySearchTree<T>::add(T value)
{
	if(m_root == nullptr)
	{
		Node<T>* Node1=new Node<T>();//creates new node
		Node1->setValue(value);
		m_root=Node1;
	
	}
	else 
	{
		add(value, m_root);
	}
}

template<typename T>
void BinarySearchTree<T>::printTree()
{
	if(m_root==nullptr)
	{
		cout<<"Tree empty" ;
	}
	else
	{
		printTree(m_root);
	}
}

template<typename T>
void BinarySearchTree<T>::sortedPrint()
{
	if(m_root== nullptr)
	{
		cout<<"Tree empty" ;
	}
	else
	{
		sortedPrint(m_root);
	}
}

template<typename T>
Node<T>* BinarySearchTree<T>::search(T value)
{
	return search(value,m_root);
}

//Private methods

template<typename T>
void BinarySearchTree<T>::add(T value,Node<T>* subtree)
{
	if(value < subtree->getValue())
	{
		if(subtree->getLeft()==nullptr)
		{
			Node<T>* Node2= new Node<T>();//creates a new node
			Node2->setValue(value);
			subtree->setLeft(Node2);
		}
		else
		{
			add(value,subtree->getLeft()); //recurse call the function again
		}
	}
	if(value >= subtree->getValue())
	{
		if(subtree->getRight()==nullptr)
		{
			Node<T>* Node3= new Node<T>();//creates new node
			Node3->setValue(value);
			subtree->setRight(Node3);
		}
		else		
		{
			add(value,subtree->getRight()); //recurse
		}
	}
}

template<typename T>
void BinarySearchTree<T>::deleteTree(Node<T>* subtree)
{
	if(subtree->getLeft() !=nullptr)
	{
		deleteTree(subtree->getLeft()) ;//recurse down left tree
	}
	if(subtree->getRight() != nullptr)
	{
		deleteTree(subtree->getRight());//recurse down right tree
	}
	delete subtree;//deletes 
}


template<typename T>
void BinarySearchTree<T>::printTree(Node<T>* subtree)
{
	if(subtree != nullptr)
	{
		cout<< subtree->getValue()<< " ";
		if(subtree->getLeft()!=nullptr)
		{
			printTree(subtree->getLeft());
		}
		if(subtree->getRight()!=nullptr)
		{			
			printTree(subtree->getRight());
		}
	}			
}

template<typename T>
void BinarySearchTree<T>::sortedPrint(Node<T>* subtree)
{
	if(subtree != nullptr)
	{
		if(subtree->getLeft() != nullptr)
		{
			sortedPrint(subtree->getLeft());

		}
	cout<< subtree->getValue()<<" " ;//prints
		
		if(subtree->getRight() != nullptr)
		{
			sortedPrint(subtree->getRight());
		}
	}
}


template<typename T>
Node<T>* BinarySearchTree<T>::search(T value, Node<T>* subtree)//questions on this method!!
{
	if(subtree->getValue() == value)
	{
		return subtree; //am I returning a new pointer?
	}
	if(subtree->getLeft() == nullptr)
	{
		return nullptr; // to indicate we did not find a value
	}
	if(subtree->getRight() == nullptr)
	{
		return nullptr;
	}
	if(value < subtree->getValue())
	{
		return search(value, subtree->getLeft()); //how to return the value of the left search
	}
	if(value >= subtree->getValue())
	{
		return search(value, subtree->getRight()); // how to search the value of right
	}	
}



























