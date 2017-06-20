Lab9: main.o PreconditionViolationException.o
	g++ -g -std=c++11 main.o PreconditionViolationException.o -o Lab9

main.o: main.cpp QueueInterface.h Queue.h Queue.hpp Node.h Node.hpp PreconditionViolationException.h 
	g++ -g -std=c++11 -c main.cpp


PreconditionViolationException.o: PreconditionViolationException.cpp PreconditionViolationException.h
	g++ -g -std=c++11 -c PreconditionViolationException.cpp

clean: rm *.o Lab9
