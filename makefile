# the compiler used for the build, im 
# sure you can have different targets
# compile with different compilers
CXX = g++

CXXFLAGS = -Wall -g

# Command: make all makes all binarys
# You can select which file to make 
# For example: make array, make vector

all: array io node queue stack vector

array: array.cpp
	$(CXX) $(CXXFLAGS) -o array array.cpp

io: io.cpp
	$(CXX) $(CXXFLAGS)-o io io.cpp

node: node.cpp
	$(CXX) $(CXXFLAGS) -o node node.cpp

queue: queue.cpp
	$(CXX) $(CXXFLAGS) -o queue queue.cpp

stack: stack.cpp
	$(CXX) $(CXXFLAGS) -o stack stack.cpp

vector: vector.cpp
	$(CXX) $(CXXFLAGS) -o vector vector.cpp
