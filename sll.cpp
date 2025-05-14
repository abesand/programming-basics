#include <iostream>
#include <forward_list>

int main()
{
  std::forward_list<int> sll = {1, 2, 3};
  sll.push_front(9);
  std::cout << sll.front() << std::endl;
  //sll.push_front(8);
  //std::cout << sll.front() << std::endl;
  sll.pop_front();
  std::cout << sll.front() << std::endl;
 return 0;
}
