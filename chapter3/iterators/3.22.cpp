#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main(){
  string line;
  vector<string> word;
  while(cin>>line){
    word.push_back(line);
  }
  
  vector<string>::iterator first = word.begin();
  for(; first != word.end() && !first->empty() ; first++){

    for(char &c  : *first) {
      c= toupper(c);
  }
    cout<<*first<< " ";
  }
  
  return 0;
}
  
