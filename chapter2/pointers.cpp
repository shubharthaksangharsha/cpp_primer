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
  // int var1 = 25 , *pointer = nullptr, *pointer2 = NULL; 
  // pointer = &var1 ;
  // cout << *pointer<<endl;
  // pointer2 = pointer;
  // pointer2 = 0 ;
  // cout<< pointer2<<endl<<*pointer<<endl<<pointer;
  int i = 42;
  int *pi = 0 ;
  int *pi2 = &i;
  int *pi3;
  cout<<"pi2 = "<< pi2<<endl<<"pi  = " << pi << endl;
  cout<<pi3<<endl;
  pi3= pi2;
  cout<<pi3<<endl;
  pi=&i;
  *pi3=0;
  cout<<*pi;
  cout<<endl<<pi<<endl<<pi2<<endl<<pi3;
  
  return 0;
  
}
