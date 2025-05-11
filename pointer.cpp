#include <iostream>
#include <string>

int main()
{
  // note the differences between array pointers
  char * pointer;
  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  pointer = arr;
  std::cout << pointer << std::endl;
  std::cout << &arr << std::endl;

  // and string pointers, or rather anything other than
  // arrays. arrays are pointers. and pointers are arrays.
  // sorta.
  std::string fino = "ooga booga";
  std::string * pointer2 = &fino;
  std::cout << *pointer2 << std::endl;
  return 0;
}
