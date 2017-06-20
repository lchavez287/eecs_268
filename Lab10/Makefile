Lab10: main.o MazeReader.o MazeWalker.o Position.o MazeCreationException.o 
	g++ -g -std=c++11 main.o MazeReader.o MazeWalker.o Position.o MazeCreationException.o -o Lab10

main.o: main.cpp MazeReader.h MazeWalker.h Position.h MazeCreationException.h
	g++ -g -std=c++11 -c main.cpp

MazeReader.o: MazeReader.cpp MazeReader.h
	g++ -g -std=c++11 -c MazeReader.cpp

MazeWalker.o: MazeWalker.cpp MazeWalker.h
	g++ -g -std=c++11 -c MazeWalker.cpp

Position.o: Position.cpp Position.h
	g++ -g -std=c++11 -c Position.cpp

MazeCreationException.o: MazeCreationException.cpp MazeCreationException.h
	g++ -g -std=c++11 -c MazeCreationException.cpp

clean: 
	rm *.o Lab10
