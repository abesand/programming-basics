#include <iostream>
#include <deque>
#include <vector>

int main()
{
  std::deque<std::string> dcue;
  std::vector<std::string> verse = {"50 years of hip hop", "new york is the mascot", "city is the back drop", "you can holla at me"};
  dcue.push_front(verse[0]);
  std::cout << dcue.front() << std::endl;
  dcue.push_back(verse[2]);
  std::cout << dcue.back() << std::endl;
  dcue.push_front(verse.back());
  std::cout << dcue.front() << std::endl;
 return 0;
}
