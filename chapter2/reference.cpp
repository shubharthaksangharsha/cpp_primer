#include<iostream>
using namespace std;
int main(){
  int i = 2 ;
  int &ref_i = i ;
  ref_i = 4;
  cout << i<<endl<<ref_i<<endl;

  int &refcopy_i = i ;
  cout<<refcopy_i<<endl;;
  refcopy_i = 3 ;
  cout<<i<<ref_i<<refcopy_i<<endl;
  int x = i ;
  i = 100;
  cout << "i = " <<i << endl << "x = "<< x << endl << " refcopy = " << refcopy_i << endl << "ref_i = "<< ref_i << endl ; 
  double shubhi= 2.15,  &s_copy=shubhi;

  s_copy = 3.15;

  cout<<ref_i<<endl<<s_copy;
  ref_i = shubhi;
  cout<<"\t"<<ref_i << endl ;


  int z, &ri = z;
z = 5; ri = 10;
std::cout << z << " " << ri << std::endl;
  return 0;
}
