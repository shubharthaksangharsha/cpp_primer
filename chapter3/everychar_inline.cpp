#include<iostream>
using std :: cout ;
using std :: cin;
using std :: endl;
using std :: string;
int main(){
  string name;
  getline(cin,name);
  cout<<endl;
  
  for ( auto c : name ){
    cout<<c<<endl;
  }

  return 0;
}
