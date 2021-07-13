#include<iostream>
using std::cout;
using std::endl;

int main(){
  int arr[] = {1,2,3,4,5};
  int sz= (sizeof(arr)/sizeof(arr[0]));
  int *p = arr, *l = &arr[sz];

  while(p != l){
    *p = 0;
    p++;
  }

  for(auto i: arr){
    cout<<i<<endl;
  }
  
  return 0;
}
   

	     
