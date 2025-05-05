# Command: make all makes all binarys
# You can select which file to make 
# For example: make array, make vector

all: array io node vector

array: array.cpp
	g++ -o array array.cpp

io: io.cpp
	g++ -o io io.cpp

node: node.cpp
	g++ -o node node.cpp

vector: vector.cpp
	g++ -o vector vector.cpp
