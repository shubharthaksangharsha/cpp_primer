#include<iostream>
using namespace std;
int main(){
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;
  cout << "before using incrment operator "<<endl<<"a= "<< a << endl << "b = " << b<<endl << "c= "<<c<<endl<<"d= "<<d<<endl;
  
  ++c;
  cout <<"after doing ++c :  "<<endl<<" a = " << a << endl << "b = " << b<<endl << "c= "<<c<<endl<<"d= "<<d<<endl;
  cout<<"after doing ++d : "<<endl;
  ++d;
  cout << " a = " << a << endl << "b = " << b<<endl << "c= "<<c<<endl<<"d= "<<d<<endl;

  return 0;
}
