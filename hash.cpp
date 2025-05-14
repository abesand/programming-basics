#include <map>
#include <vector>
#include <string>
#include <forward_list>
#include <iostream>

int main()
{
  std::map<int, std::string> cypher = {{1, "bob"}, {2, "sara"}, {3, "moe",}, {4, "joe"}, {5, "bo"}};

  std::vector<forward_list> hashTable;

  void hashFunction(std::vector<forward_list>  &ht, std::map<int, std::string> cy)
  {
    ht.insert(
  }


  std::cout << cypher.at(2) << std::endl;
  return 0;
}
