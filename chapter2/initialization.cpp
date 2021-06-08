#include<iostream>
using namespace std;
int main(){
  int x(2);
  int y { 3};
  int z = {4} ;
  int w = 5;



  long double ld = 3.1415926536;
  int a{ld}, b = {ld}; // error: narrowing conversion required
  int c(ld), d = ld;   // ok: but value will be truncated

  cout<<ld<<"\n" << a << b<< c<< d<< endl ;
    return 0;
}
