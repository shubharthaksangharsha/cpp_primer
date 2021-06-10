#include<iostream>
using namespace std;
int main(){
  int a = 0 ;
  int *x = &a ;
  int *y ;
  int &shubhi = *x;
  a = 2 ;
  
  cout << a <<endl << x << endl << y <<endl<<shubhi<<endl;

  int *p1 = nullptr;
  int *p2 = 0 ;
  int *p3 = NULL;
  cout<<"*********"<<endl;
  int var1 = 25 , *pointer = nullptr; 
  pointer = &var1 ;
  
  return 0;
  
}
