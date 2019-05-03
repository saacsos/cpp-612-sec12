main : Member.o Party.o main.o
	g++ Member.o Party.o main.o -o main

Member.o :
	g++ -c Member.cpp -o Member.o

Party.o :
	g++ -c -std=c++11 Party.cpp -o Party.o

main.o :
	g++ -c main.cpp -o main.o

clean :
	rm *.o main.exe