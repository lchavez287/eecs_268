#ifndef QUEUEINTERFACE_H
#define QUEUEINTERFACE_H
#include "PreconditionViolationException.h"

template<typename T>
class QueueInterface
{
	public:
	virtual ~QueueInterface() {};
	virtual bool isEmpty()const=0;
	virtual void enqueue(const T newEntry) = 0;
	virtual T dequeue() throw(PreconditionViolationException)= 0;
	virtual T peekfront() const throw(PreconditionViolationException) = 0;
	virtual int size() const = 0;
};
#endif
