#include <iostream>
class Node{
  public:

    Node(){
      value = 0;
      next = nullptr;
    }

    ~Node(){}

    void setValue(int v){
      value = v;
    }
    void setNext(Node* n){
      next = n;
    }
    int getValue(){
      return value;
    }
    void printValue(){
      std::cout << value << std::endl;
    }


  private:
    int value;
    Node* next;
};


int main(){
  Node n;
  Node m;
  n.setValue(10);
  n.printValue();
  m.setValue(20);
  m.printValue();
  n.setNext(&m);
  return 0;
}
