#include<iostream>
#include<vector>
#include<string>

using std :: string;
using std :: vector;
using std :: cout ;
using std :: cin ;
using std :: endl;

int main(){
  vector <string> svec ; 
  string word;

  while(cin>> word){
    svec.push_back(word);
    }

  for(decltype(svec.size()) index = 0 ; index < svec.size() ; index++){
    cout<<svec[index]<< " ";
  }
  cout<<endl;
  
  return 0;
}
