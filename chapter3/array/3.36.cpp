#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

int main(){
  int arr1[] = {0,1,2,3,4,5};
  int arr2[] = {0,1,2,3,4};

  int *p1 = arr1, *p2 = arr2;
  cout<<"**For Comparing Arrays** "<<endl<<endl;
  for(; *p1 == *p2; p1++, p2++){
    cout<<"Element"<<*p1<<" is Equal to Element"<<*p2<< endl;
  }

  vector<int> v1= {1,2,3,4,5};
  vector<int> v2= {1,2,3};
  vector<int>::iterator b1= v1.begin(), b2= v2.begin(), e1= v1.end();

  cout<<endl<<"**For Comparing Vectors** "<<endl<<endl;
  for(;b1 != e1 ; b1++ , b2++){
    if(*b1==*b2){
    cout<<"Vector1 element"<<*b1<<" is equal to vector2 element"<<*b2<<endl;
    }
    else{
      cout<<"V1 Element"<<*b1 << " is not equal to V2 Element"<<*b2<<endl;
    }
  }
  

  

  return 0;

}
    
    
