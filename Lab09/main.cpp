/**
*	@file : main.cpp
*	@author :  Lacie Chavez
*	@date : 04/25/2014
*	Purpose: main
*/
#include <iostream>
#include <stack>
#include "QueueInterface.h"
#include "PreconditionViolationException.h"
#include "Queue.h"


template<typename T>
void printQueue(QueueInterface<T>& q)
{
	int m_size;
	m_size = q.size();
	std::stack<T> stack1;
	while(m_size != 0)
	{
		std::cout << q.peekfront() << " ";
		stack1.push(q.peekfront());
		q.dequeue();
		m_size = q.size();
		std::cout << std::endl;
	}
	while(stack1.empty() == false)
	{
		q.enqueue(stack1.top());
		stack1.pop();
	}
	m_size = q.size();
	while(m_size != 0)
	{
		stack1.push(q.peekfront());
		q.dequeue();
		m_size = q.size();
	}
	while(stack1.empty()==false)
	{
		q.enqueue(stack1.top());
		stack1.pop();
	}			
}

void printMenu()
{	
	std::cout<<"\n\n";
	std::cout<<"Select an action: \n"<<"1) Enqueue a number \n" << "2) Dequeue a number \n";
	std::cout<<"3) Peak at front \n"<< "4) Print the queue \n"<< "5) Quit \n"<<"Enter choice: ";
		
}
	
int main()
{
	int input;
	Queue<int> queue1;
	int number;

	do
	{
		printMenu();
		std::cin >> input;
		if(input == 1)
		{
			std::cout<< "enter number: ";
			std::cin >> number;
			queue1.enqueue(number);
			std::cout << number << " successfully added to the queue";
		}
		else if(input == 2)
		{
			try
			{
				queue1.dequeue();
				std::cout<<  "successfully removed to the queue\n";
			}
			catch(PreconditionViolationException e)
			{
				std::cout<<e.what();
			}
		}
		else if(input== 3)
		{
			try
			{
				int peek = queue1.peekfront();
				std::cout << peek << " is at the front of the queue. ";
			}
			catch(PreconditionViolationException e)
			{
				std::cout<< e.what();
			}
		}
		else if(input == 4)
		{
			if(queue1.size() != 0)
			{
				printQueue(queue1);
				std::cout << std::endl;
			}
			else
			{	
				std::cout<<"Queue Empty";
			}	
			
		}
		else if(input == 5)
		{
			abort();
		}
		else
		{
			std::cout<<"invalid\n";
		}
	}while(input !=5);
}
