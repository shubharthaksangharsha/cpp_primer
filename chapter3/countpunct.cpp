#include<iostream>

using std :: cout;
using std :: string;
using std :: cin;
using std :: endl;

int main(){
  string name;
  decltype(name.size()) count = 0 ;
  getline(cin, name);

  for(auto c : name){
    if(ispunct(c)){
      count++;
    }
  }

  cout<<"Total punctuation character : " << count<<endl;

  return 0;
}
      
