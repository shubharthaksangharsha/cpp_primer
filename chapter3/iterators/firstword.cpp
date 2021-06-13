#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string word;
  getline(cin,word);

  for(auto first = word.begin() ; first !=word.end() && !isspace(*first) ; ++first){
    *first = toupper(*first);


  }
  cout<<word<<endl;

  return 0;
}
    
  
