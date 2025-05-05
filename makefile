# Command: make all makes all binarys
# You can select which file to make 
# For example: make array, make vector

all: array io node queue stack vector

array: array.cpp
	g++ -o array array.cpp

io: io.cpp
	g++ -o io io.cpp

node: node.cpp
	g++ -o node node.cpp

queue: queue.cpp
	g++ -o queue queue.cpp

stack: stack.cpp
	g++ -o stack stack.cpp

vector: vector.cpp
	g++ -o vector vector.cpp
