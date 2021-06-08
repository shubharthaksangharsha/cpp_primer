//exercise1.9:-
#include<iostream>
using namespace std;


int main(){

  int  i = 50, sum =0;
  while(i<101){

    sum=i+sum;
    
    ++i;


  }
  cout<<"sum : "<<sum<<endl;
  cout<<"value of i : "<<i<<endl;

  return 0;

}
