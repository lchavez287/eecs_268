#ifndef QUEUE_H
#define QUEUE_H
#include "QueueInterface.h"
#include "Node.h"
#include "PreconditionViolationException.h"

template<typename T>
class Queue : public QueueInterface<T>
{
	public:
		Queue();//default constructor
		//Queue(const Queue& aQueue);//copy constructor	
		~Queue();//destructor
		
		bool isEmpty()const;
		void enqueue(const T newEntry);
		T dequeue() throw(PreconditionViolationException);
		T peekfront() const throw(PreconditionViolationException);
		int size() const;

	
	private:
		int size1;
		Node<T>* frontPtr;
		Node<T>* backPtr;	
};
#include "Queue.hpp"
#endif
	
