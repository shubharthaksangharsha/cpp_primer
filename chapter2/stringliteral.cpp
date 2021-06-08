#include<iostream>
using namespace std;
int main()
{
  // multiline string literal
std::cout << "a really, really long string literal "

 "that\7 spans two \12lines"<< std::endl;
 std::  cout<<1221E-3F <<std:: endl ;  //float
 cout<<10e-2l<<endl;
  cout<<'a'<<endl<<L'a'<<endl<<"a"<<endl<<L"a" << std:: endl;
  cout<<"Who goes with F\145rgus?\012"<<endl;
  cout<<3.14e1L<<endl;
  cout<<3.14L;

  return 0;
}

