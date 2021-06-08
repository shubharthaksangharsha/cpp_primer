#include<iostream>
using namespace std; 

int main() {
    
  int sum = 0, val = 51 ;
  while(val<=100)
  {
      sum = sum + val;
      ++val;
      
  }
   
   cout<<"Sum of First 10 number : "<<sum<<endl;
   cout<<"value of val : "<<val;
   
    return 0;
}
