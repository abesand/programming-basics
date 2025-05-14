#include <iostream>
template <class T>
class Node
{
  public:

    Node()
    {

    }

    ~Node()
    {

    }

    Node(T v, Node * node)
    {
      value = v;
      next = node;
    }

    void setValue(T v)
    {
      value = v;
    }
    void setNext(Node* n)
    {
      next = n;
    }

    T getValue() const
    {
      return value;
    }
    
    Node * getNext() const
    {
      return next;
    }
    
    void linearTraverse() const
    {
      while(this.getnext() != nullptr)
      {
        std::cout << this->getValue() << std::endl;
      }
    }

  private:
    T value;
    Node* next;
};


int main(){

  return 0;
}

