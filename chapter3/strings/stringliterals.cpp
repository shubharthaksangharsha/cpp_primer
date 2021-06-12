#include<iostream>
using namespace std;
int main(){
  string s1 = "hello" , s2= "world";
  string s3 = s1+", " + s2 + '\n';
  string s4 = s1 + ", ";
  string s5= "hello" + ", "+ s2;
  cout<<s3;

  return 0;
}
