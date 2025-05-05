#include <map>
#include <vector>
#include <string>
#include <iostream>
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
  map<int, string> dora {{777, "bob"}, {200, "sara"}, {305, "tom"}};
  dora.insert({42, "answer"});
  dora.insert({17, "lucky"});
  dora.insert({99, "problems"});
  dora.insert({512, "bytes"});
  dora.insert({1000, "grand"});
  dora.insert({25, "quarter"});
  dora.insert({7, "lucky"});    
  dora.insert({107, "prime"});
  dora.insert({307, "collision"});
  vector<string> hashTable;
  hashTable.resize(10);
  setHashFunction(dora, hashTable);
  int x = 0;
  while(x != 1){

  
  cin >> x;
  string hashOutput = retrieveHashValue(x, hashTable);

  cout << hashOutput << endl;
  }

  
  return 0;
}
