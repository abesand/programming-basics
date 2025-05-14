#include <iostream>
template <class T>
class Node
{
  public:

    Node()
    {
      next = nullptr;
    }

    ~Node()
    {

    }

    Node(T v, Node * node)
    {
      value = v;
      next = node;
    }

    Node(T v)
    {
      value = v;
      next = nullptr;
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
      std::cout << this->getValue() << std::endl;
      if(this->getNext() == nullptr)
      {
        return;
      }
      else 
      {
        this->getNext()->linearTraverse();
      }
    }

  private:
    T value;
    Node* next;
};


int main()
{
  Node a(1);
  Node b(2, &a);
  Node c(3, &b);
  Node d(4, &c);
  Node e(5, &d);
  e.linearTraverse();
  return 0;
}

