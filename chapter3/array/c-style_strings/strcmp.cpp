#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

int main(){
  const char s1[]= "A string variable";
  const char s2[]= "A different string";

  if(strcmp(s1,s2)<=0){
    cout<<"Hi";
  }

  return 0;
}
