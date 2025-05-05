#include <iostream>

template <class T>
class Node{
  public:

    Node(){
      
    }

    Node(T v){
      value = v;
      next = nullptr;
    }

    ~Node(){}

    void setValue(T v){
      value = v;
    }
    void setNext(Node* n){
      next = n;
    }
    T getValue(){
      return value;
    }
    void printValue(){
      std::cout << value << std::endl;
    }


  private:
    T value;
    Node* next;
};


int main(){
  Node n(17);

  return 0;
}
