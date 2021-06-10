#include<iostream>
using namespace std;
int main(){
  auto a = 2, &b = a ;
  decltype(a) x = 5 ;
  decltype(b) y = x;
  cout << x <<"\t"<<y; 
  return 0 ;
}
  
