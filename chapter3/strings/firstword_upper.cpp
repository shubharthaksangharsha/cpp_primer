#include<iostream>
#include<cctype>
#include<string>
using std :: cin ;
using std :: cout;
using std :: endl;
using std :: string;

int main(){
  string name ;
  getline(cin,name);

  for(decltype(name.size()) index = 0 ; index != name.size() && !isspace(name[index]) ; index++ ){
    name[index] = toupper(name[index]);
  }

  cout<<name;
  return 0;
}
    
    
