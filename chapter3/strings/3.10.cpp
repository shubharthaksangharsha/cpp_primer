#include<iostream>
using std :: cout ;
using std :: cin ;
using std :: endl;
using std :: string;

int main(){
  string name ;
  getline(cin, name ) ;

  for(auto c : name ) {
    if(ispunct(c)){
      c=' ';
      cout<<c;
    }
    else{
      cout<<c;
    }
  }

  return 0;
}
