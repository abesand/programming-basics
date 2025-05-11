#include <iostream>

int main()
{
  int * pointer;
  std::cout << pointer << std::endl;
  pointer = arr2;
  std::cout << *(pointer+2) << std::endl;

  return 0;
}
