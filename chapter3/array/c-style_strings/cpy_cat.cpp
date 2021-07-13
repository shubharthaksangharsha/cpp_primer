#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

int main(){
  const char s1[100]= "Hi Shubhi";
  const char s2[100]= "Hello";
  char s3[100]={};

  strcpy(s3,s2);
  strcat(s3," " );
  cout<<strcat(s3, s1 );

  
  return 0;
}
