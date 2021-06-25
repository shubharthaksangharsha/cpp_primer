#include<iostream>
using std::cout;
using std::endl;
int main(){
  int ia[]= {2,1,2,3,4,6,6,7,8,9};

  auto ia2(ia);
  *ia2= 19;
  for(auto i : ia){
    cout<<i << " " ;
  }

  //now my new ia = {5,1,2,3,4,6,6,7,8,9};
  decltype(ia) ia3= {0,1,2,3,4};

  for(auto i : ia3){
    cout<<i << endl ;
  }

  return 0;
}
    
