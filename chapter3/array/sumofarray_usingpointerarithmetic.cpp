#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int size;
  cout<< "Please enter size of array: ";
  cin>> size;
  int arr[size];
  cout<<"Please enter elements in array:-" <<endl;
  for(int i = 0 ; i < size ; i++){
    cin>>arr[i];
    cout<<"Element stored at array["<<i<<"]: "<<arr[i]<<endl;
  }
  cout<<endl<<"Your stored elements are as follows:- "<<endl;
  
  for(int i = 0; i < size ; i++){
    cout<<"Element stored at array["<<i<<"]: "<<arr[i]<<endl;
  }

 
  int sum = 0;
  int *p = arr;
  
  /*  for(int i = 0; i < size; i++){
    sum+=*p;
    *p++;

    }*/
  
  // cout<<"Sum of the array: " <<sum<<endl;

  for(auto *p : arr){
    
    *p = *p + *(p+1);
    cout<<*p;
  }
  return 0;

}
  
    
