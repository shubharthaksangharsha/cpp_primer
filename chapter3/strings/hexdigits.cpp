#include<iostream>
using std :: cout ;
using std :: cin ;
using std :: endl;
using std :: string;

int main(){
  const string hex("0123456789ABCDEF"); //hex digits
  cout << " Please enter the numbers between the range of 0 and 15 (0 and 15 are included) " <<endl;
  string result; //hold hex values
  string :: size_type n ; //hold number from input

  while(cin>>n){
    if( n < hex.size()){
      result += hex[n];
    }
  }
  cout<<"Hex number is : " << result<<endl;

  return 0;
}
  
  
  
  
