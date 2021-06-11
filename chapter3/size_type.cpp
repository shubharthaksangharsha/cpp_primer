#include<iostream>
using namespace std ;
int main(){
  string s("hello");
  //  string :: size_type len = s.size();
  //  auto len = s.size();
  decltype(s.size()) len = s.size(); 
  cout<< len;

  return 0;
}
