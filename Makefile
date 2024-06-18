all: build

build:
	g++ -c listas.cpp
	g++ -c polimorfismo.cpp
	g++ -c main.cpp
	g++ listas.o polimorfismo.o main.o -o main
	.\main.exe perro