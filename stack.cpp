#include <iostream>
#include <stack>

int main(){
  std::stack<int> st;
  for(int i = 0; i < 199; i++){
    st.push(i);
  }
  st.pop();
  int x = st.top();
  std::cout << x << std::endl;
  return 0;
}
