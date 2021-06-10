#include<iostream>
using namespace std ;
int main(){
  int i = 42;
  int *p1 = &i ;
  *p1 = *p1 * *p1; // this will change value of i = i * i i.e 42*42 = 1764
  cout<<i<<endl << *p1<<endl;
  int *shubhi = i ;
  return 0;
}
  
