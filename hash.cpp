#include <map>
#include <vector>
#include <string>
using namespace std; 

void setHashFunction(map<int, string>& m, vector<string>& v){
  for(auto& pair : m){
    int key = pair.first;
    string value = pair.second;
    key = key % v.capacity();     // hash function
    v[key] = value;
  }
}

string retrieveHashValue(int key, const vector<string>& v){
  return v.at(key % v.capacity());
}

int main(){
  map<int, string> dora {{100, "bob"}, {200, "sara"}, {305, "tom"}};
  vector<string> hashTable;


  
  return 0;
}
