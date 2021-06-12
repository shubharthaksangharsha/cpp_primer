//change all chars of string to 'X' 
#include<iostream>
using std :: cout ;
using std :: cin ;
using std :: endl;
using std :: string;

int main(){
  string name ;
  getline(cin, name);

  for(auto &c : name ) {
    c='X';
  }

  cout<<name<<endl;
}
