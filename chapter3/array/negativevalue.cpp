#include<iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
  int ia[] = { 0,1,2,-1,3,4,44,5,6};
  int *pbeg = begin(ia), *pend= end(ia);

  while(pbeg != pend){

    if(*pbeg < 0){
      cout<<"Negative value: "<<*pbeg<<endl;
      pbeg++;
    }

    else {
    cout<<*pbeg<<endl;
    ++pbeg;
    }
  }
  

  return 0;
}
