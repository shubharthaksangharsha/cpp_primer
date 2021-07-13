#include<iostream>
using std::cout;
using std::endl;

int main(){
  constexpr int sz = 5;
  int arr[sz]= {1,2,3,4,5};

  int *b = arr, *e = arr + sz;
  while(b<e){
    cout<<*b<<endl;
    ++b;
    
  }

  //pointing two unrelated objects
  int a = 0, z = 100;

  int *p = &a+1,  *q = &z;
  while(p<q){
    cout<<*p<<endl;
    cout<<*q<<endl;
    p++;
  }
  return 0;
}
