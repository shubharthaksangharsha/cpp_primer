#include<iostream>
#include<string>
#include<vector>
using std :: cout ;
using std :: cin ;
using std :: string ;
using std :: endl;
using std :: vector;
int main(){
  string words;
  vector<string> text;
  while(cin>>words){
    text.push_back(words);
  }

  return 0;
} 
