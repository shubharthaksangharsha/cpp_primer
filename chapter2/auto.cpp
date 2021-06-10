#include<iostream>
using namespace std;
int main(){
  int s = 2;
  auto x = 3.14 + s;
  auto y = 3.23+ 2;
  cout <<endl<< x<<endl ;
  auto a = &s;
  auto *p = &s;
  cout<<&a<<endl<<p<<endl<<*p<<endl;
  return 0;
}
