#include <iostream>
#include <array>

int main(){
  std::array<int, 10> arr;
  for(int i = 0; i < 10; i++){
    arr[i] = 0;
  }
  size_t arrSize = arr.size();
  for(size_t i = 0; i < arrSize; i++){
    arr[i] += i;
    std::cout << arr[i] << std::endl;
  }
  return 0;
}
