#include <iostream>
#include <string>

void multiply(int x, int y){
  std::cout << x + y << std::endl;
}


int main(){
  std::string phrase;
  std::cout << "write something here" << std::endl;
  std::cin >> phrase;                               // how come it doesnt print multiply lines? just one word
  std::cout << phrase << std::endl; 

  std::cout << "give me two numbers" << std::endl;
  int x, y;

  std::cin >> x;
  std::cin >> y;

  multiply(x,y);

  return 0;
}
