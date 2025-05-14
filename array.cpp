#include <iostream>

int main()
{

  // 2x3 array matrix
  int arr[2][3] = 
  {
    {12, 22, 32},
    {42, 52, 62}
  };

  /* It would be interesting to see an implementation of 
   * matrix multiplication
   * Completed.
   */

  // 2x3 array matrix
  int arr2[2][3] = 
  {
    {100, 200, 300},
    {400, 500, 600}
  };

  int ans[2][3];
  
  // print 2x3 matrix
  for(int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      //std::cout << arr[i][j] * arr2[i][j] << std::endl;
      ans[i][j] = arr[i][j] * arr2[i][j];
      std::cout << ans[i][j] << std::endl;
    }
  }
  std::cout << " -----------------------" << std::endl;
  std::cout << "| " << ans[0][0] <<  "  | " << ans[0][1] << "  | " << ans[0][2] << "  |" << std::endl;
  std::cout << " -----------------------" << std::endl;
  std::cout << "| " << ans[1][0] <<  " | " << ans[1][1] << " | " << ans[1][2] << " |" << std::endl;
  std::cout << " -----------------------" << std::endl;
  return 0;
}
