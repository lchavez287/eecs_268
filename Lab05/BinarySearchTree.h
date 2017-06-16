/*	File Name: <main.cpp> 
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab5
	Description: BST 
	Last Changed: 3/28/2014 
*/
#include "Node.h"
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
template<typename T>
class BinarySearchTree
{
	private: //private variable
	Node<T>* m_root;

	public:	//public methods
	BinarySearchTree();
	~BinarySearchTree();
	void add(T value);
	void printTree();
	void sortedPrint();
	Node<T>* search(T value);
	
	private: //private methods
	void add(T value,Node<T>* subtree);
	void deleteTree(Node<T>* subtree);
	void printTree(Node<T>* subtree);
	void sortedPrint(Node<T>* subtree);
	Node<T>* search(T value,Node<T>* subtree);
};
#include "BinarySearchTree.hpp"
#endif

