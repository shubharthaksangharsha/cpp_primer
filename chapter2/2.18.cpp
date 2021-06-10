#include<iostream>
using namespace std;
int main(){
  int var1=10,var2=5, *pvar, *pvar2;
  pvar = &var1 ;
  cout<<"previous value of pvar : " <<pvar <<" and previous value pointer points to : " << *pvar <<endl ;
  
  pvar = pvar2 ;
  *pvar = 15;
  cout<<"new value of pvar : " << pvar << "and new value pointer points to : " << *pvar<<endl ; 
  

  return 0 ;
}
