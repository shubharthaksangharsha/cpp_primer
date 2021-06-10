#include<iostream>
using namespace std;
int main(){
  int i=1,x=5 , *p, *&r = p ,&s=x ;

  cout<<&s<<endl;
  cout<<s<<endl;
  cout<<r<<endl;
  cout<<&r<<endl;
  cout<<p<<endl;
  

  r = &i;
  cout<<*p<<endl;
    cout<<r<<endl<<&r<<endl<<&i<<endl<<p<<endl;
  return 0 ;

}
