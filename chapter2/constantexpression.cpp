#include<iostream>
constexpr int a = 2;
int j = 2 ;
using namespace std;
int main(){
  constexpr int var1 = 20 ; // constant expression
  const int var2 = var1 + 20;  // constant expression
  constexpr int var3 = var2 + 20 ; // constant expression
  // constexpr string shubhi;  // error : string isn't literal for constexpr
  const int var4 = var1;
  constexpr  int *pointer = &j;//legal
  constexpr const int *shubhi= &a;
  
  cout<< var1;
 

  return 0;
}
