#include<iostream>
#include<string>
#include<cctype>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
  string word,c;
  while(getline(cin,word)){
    c = word;
  }
  string::iterator first = c.begin();
  for(; first != c.end() && !first->empty() ; first++){
    *first=toupper(*first);
  }
  
  return 0;
}
  
