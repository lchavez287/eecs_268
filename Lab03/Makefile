
Program: main.o StackOfBoxes.o Box.o
	g++ -g -std=c++11 main.o StackOfBoxes.o Box.o -o Program

main.o: main.cpp StackOfBoxes.h Box.h
	g++ -g -std=c++11 -c main.cpp

StackOfBoxes.o: StackOfBoxes.cpp StackOfBoxes.h
	g++ -g -std=c++11 -c StackOfBoxes.cpp

Box.o: Box.h Box.cpp
	g++ -g -std=c++11 -c Box.cpp

clean:
	rm o.* Program
