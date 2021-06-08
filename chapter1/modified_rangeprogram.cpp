#include<iostream>
using namespace std;
int main(){
  int n1,n2;
  cout<<"Enter 2 numbers ";
  cin>>n1>>n2;

  if(n1>n2){
    while(n1>=n2){
      cout<<n1<<endl;
    n1--;
  }
  }
  else{
    while(n1<=n2){
      cout<<n1<<endl;
      n1++;
    }
  }
  return 0;

}
