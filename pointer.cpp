#include <iostream>
#include <string>

int main()
{
  char * pointer;
  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  pointer = arr;
  std::cout << pointer << std::endl;
  std::cout << &arr << std::endl;

  std::string fino = "ooga booga";
  std::string * pointer2 = &fino;
  std::cout << *pointer2 << std::endl;
  return 0;
}
