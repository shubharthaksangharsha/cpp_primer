#include<iostream>
#include<string>
using namespace std;
int main(){
  string s ;
  getline(cin,s);
  if(!s.empty()){
    cout<<s.size();
  }
  else{
    cout<<"Hello world";
  }

  return 0;
}
      
