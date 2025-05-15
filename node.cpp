#include <iostream>
template <class T>
class Node
{
  public:

    Node()
    {
      next = nullptr;
    }
    /* What should the default constructor have? It will have a T type value, 
     * essentially anything. I believe the Node pointer member should point
     * to nullptr. So that is a good design implementation.
     */

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
    /* Here's another design decision to consider. Should we return
     * a copy of the value or the pointer to the value? It could very
     * well be the case we are dealing with a type that isn't basic. 
     * It could be a user define class in which case we are not sure
     * what T can be. I believe it wise to perhaps return as a reference.
     */
    
    Node * getNext() const
    {
      return next;
    }
    /* Passing around pointers here, shouldn't need to be a reference */
    
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

    /* Great recursive function implementation. Prints all values in 
     * singly linked list. We could add on to the implementation and 
     * keep track of the first and last node. We can abstract this class 
     * higher and make our own linked list. Each node can keep track of 
     * it's previous node as well. A doubly linked list.
      */
  private:
    T value;
    Node* next;

    /* Here's a design decision. Should the Node pointer member be of a smart pointer?
     * If I remember correctly, it would be wise. Reason for it was that when the 
     * destructor is called on it, the smart pointer knows how to destructor itself. 
     * As do some of the basic types such as int. 
     */
};


int main()
{
 // Node u;
  Node a(1);
  Node b(2, &a);
  Node c(3, &b);
  Node d(4, &c);
  Node e(5, &d);

  Node str("alphabet");
  if(str.getNext() == nullptr)
  {
    std::cout << "nullptr" << std::endl;
  }

  Node test(12, &a);
  Node test2("decimals", &str); 
  /* Here, the compiler isn't finding a matching constructor that takes explicit 
   * type int and a Node<T> * node. Essentially, we are seeing that this node 
   * implementation so far can only be of one type and can not take other types.
   */
  e.linearTraverse();
  test2.linearTraverse();
  return 0;
}

