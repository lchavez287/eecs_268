/**
*	@file : Queue.hpp
*	@author :  Lacie Chavez
*	@date : 04/25/2014
*	Purpose: Implementation of Queue class
*/
template<typename T>
Queue<T>::Queue() //default constructor
{
	
	frontPtr=nullptr;
	backPtr=nullptr;
	size1 = 0;
}

template<typename T>
Queue<T>::~Queue() //destructor
{
	while(!isEmpty())
	{
		dequeue();
	}	
}

template<typename T>
bool Queue<T>::isEmpty()const //checks to see if que is empty
{
	if(size()== 0)
	{
		return true;
	}
	else
		return false;
}

template<typename T> //function to enque
void Queue<T>::enqueue(const T newEntry)
{
	Node<T>* newPtr = new Node<T>();
	newPtr -> setValue(newEntry);
	newPtr->setLeft(nullptr);
	newPtr->setRight(nullptr);
	if(isEmpty())//if queue is empty
	{
		frontPtr = newPtr;
		backPtr = newPtr;
	}
	else
	{
		newPtr -> setLeft(backPtr);		
		backPtr -> setRight(newPtr);
		newPtr -> setRight(nullptr);
		backPtr = newPtr; 
	}	
	size1++;
}

template<typename T>
T Queue<T>::dequeue() throw(PreconditionViolationException)
{	
	if(!isEmpty())//if queue is not empty
		{
			Node<T>* deletePtr = frontPtr;
			if(frontPtr == backPtr)//if there is only 1 node in queue
			{
				frontPtr = nullptr;
				backPtr = nullptr;
			}
			else
			{
				frontPtr = frontPtr -> getRight();
				deletePtr -> setRight(nullptr);
			}				
			delete deletePtr;
			deletePtr = nullptr;
			size1--;
		}
	else 
		throw PreconditionViolationException("Dequeue tried on an empty queue. ");
	


}

template<typename T>
T Queue<T>::peekfront() const throw(PreconditionViolationException)//function to peek at front value
{
	if(isEmpty())
	{
		throw PreconditionViolationException("Peek attempted on an empty queue");
	}
	else
	{
		return frontPtr->getValue();
	}	
}

template<typename T>
int Queue<T>::size() const //function to get the size
{
	return size1;
}

