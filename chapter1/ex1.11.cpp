//ex1.11 that print number between the range :-
#include<iostream>
using namespace std;

int main(){

  int n1, n2;
  cout<<"Enter 2 numbers: ";
  cin>>n1>>n2;

  
  while(n1<n2-1 ){

    cout<<n1+1<<endl;
    ++n1;

  }
  

  return 0;

}
