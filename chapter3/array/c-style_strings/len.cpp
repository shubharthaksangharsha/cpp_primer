#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

int main(){
  char s[]= {'C', '+', '+', '\0'}; //disaster, must be null terminated 
  cout<<strlen(s)<<endl;

  return 0;
}
    
  
