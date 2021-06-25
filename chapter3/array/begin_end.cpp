#include<iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
  //using pointers
  cout<<"**Using Pointers**"<<endl;
  int ia[]= {0,1,2,3,4,5,6,7,8,9};
  int *last = &ia[10];

  for(int *beg = ia; beg != last; beg++){
    cout<<*beg<<endl;
  }

  cout<<"**Using begin() and end()**"<<endl;
  int *beg= begin(ia);
  int *e= end(ia);
  for(; beg != e; beg++){
    cout<<*beg<<endl;
  }
  
  return 0;
}
    
    
