all: build

build:
	g++ -c listas.cpp
	g++ -c main.cpp
	g++ listas.o main.o -o main
	.\main.exe