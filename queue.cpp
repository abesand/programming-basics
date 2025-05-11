#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main(){
  std::queue<std::string> cue;

  std::vector<std::string> verse = {"the pupils burn", "from the gaze", "of the sunlight",  "tryna go legit this time", "with no gun fights"};

  for(std::string i : verse)
  {
    cue.push(i);
  }

  size_t cueSize = cue.size();
  for(size_t i = 0; i < cueSize; i++)
  {
    std::cout << cue.front() << std::endl;
    cue.pop();
  }

  verse = {"straight flights to ghana", "my man got the gold connect", "bow legged dude with chicks on deck"};
  
  //push_range only works with c++23
  cue.push_range(verse);
  cueSize = cue.size();
  for(size_t i = 0; i < cueSize; i++)
  {
    std::cout << cue.front() << std::endl;
    cue.pop();
  }
  return 0;
}
