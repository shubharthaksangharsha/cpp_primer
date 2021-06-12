#include<iostream>
#include<cctype>
using std :: cout ;
using std :: cin;
using std :: endl;
using std :: string;

int main() {
  string name;
  getline(cin,name);

  for(auto &c : name){
    c=toupper(c);
  }

  cout<<name<<endl;

  return 0;

}
  
