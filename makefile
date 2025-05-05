# the compiler used for the build, im 
# sure you can have different targets
# compile with different compilers
CXX = g++

CXXFLAGS = -Wall -Werror -g -std=c++17 -o

# Command: make all makes all binarys
# You can select which file to make 
# For example: make array, make vector

all: array io node queue stack vector

# Cleans up binaries
clean: 
	rm array io node queue stack vector

array: array.cpp
	$(CXX) $(CXXFLAGS) array array.cpp

io: io.cpp
	$(CXX) $(CXXFLAGS) io io.cpp

node: node.cpp
	$(CXX) $(CXXFLAGS) node node.cpp

queue: queue.cpp
	$(CXX) $(CXXFLAGS) queue queue.cpp

stack: stack.cpp
	$(CXX) $(CXXFLAGS) stack stack.cpp

vector: vector.cpp
	$(CXX) $(CXXFLAGS) vector vector.cpp
