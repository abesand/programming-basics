#include <iostream>

int main()
{

  // 2x3 array matrix
  int arr[2][3] = 
  {
    {12, 22, 32},
    {42, 52, 62}
  };

  // 1x3 array matrix
  int arr2[3] = {100, 200, 300};
  
  // print 2x3 matrix
  for(int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << arr[i][j] << std::endl;
    }
  }

  return 0;
}
