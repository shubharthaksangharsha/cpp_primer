#include<iostream>
using std :: cout ;
using std :: cin ;
using std :: string;
using std :: endl;

int main(){
  string name ;
  getline(cin , name ) ;


  decltype(name.size()) index = 0;

  for(index = 0 ; index < name.size(); index++ ) {
    if(ispunct(name[index])){
      name[index]=' ';
      cout<<name[index];
    }
    else{
      cout<<name[index];
    }
  }

  return 0;
}
    
