# the compiler used for the build, im 
# sure you can have different targets
# compile with different compilers
CXX = g++

CXXFLAGS = -Wall -Werror -g -std=c++23 -o

# Command: make all makes all binarys
# You can select which file to make 
# For example: make array, make vector

all: array deque fstream hash io node pointer queue sll stack vector

# Cleans up binaries
clean: 
	rm api array deque fstream hash io node pointer queue sll stack vector

api: api.cpp
	$(CXX) $(CXXFLAGS) api api.cpp

array: array.cpp
	$(CXX) $(CXXFLAGS) array array.cpp

deque: deque.cpp
	$(CXX) $(CXXFLAGS) deque deque.cpp

fstream: fstream.cpp
	$(CXX) $(CXXFLAGS) fstream fstream.cpp

hash: hash.cpp
	$(CXX) $(CXXFLAGS) hash hash.cpp

io: io.cpp
	$(CXX) $(CXXFLAGS) io io.cpp

node: node.cpp
	$(CXX) $(CXXFLAGS) node node.cpp

pointer: pointer.cpp
	$(CXX) $(CXXFLAGS) pointer pointer.cpp

queue: queue.cpp
	$(CXX) $(CXXFLAGS) queue queue.cpp

sll: sll.cpp
	$(CXX) $(CXXFLAGS) sll sll.cpp

stack: stack.cpp
	$(CXX) $(CXXFLAGS) stack stack.cpp

vector: vector.cpp
	$(CXX) $(CXXFLAGS) vector vector.cpp
