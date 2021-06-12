#include<iostream>
using std:: cout;
using std :: string;

int main(){
  string s1("Hello");
  if(!s1.empty()){
    char c = toupper(s1[0]);
    cout<<c;
  }

  return 0;
}
