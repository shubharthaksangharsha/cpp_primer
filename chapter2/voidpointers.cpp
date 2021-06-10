#include<iostream>
using namespace std;
int main(){
  int var = 25, *pvar = &var;
  void *vp;
  cout << vp << endl << pvar << endl<<&var << endl;

  vp = pvar;
  cout<<"****new values******"<<endl;
  cout << vp << endl << pvar << endl<<&var << endl;  

  return 0 ;
}
  
