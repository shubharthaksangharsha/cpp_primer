//Exercise 3.42: Write a program to copy a vector of ints into an array of ints.
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
  vector<int> ivec= { 1,2,3,4,5};
  const int length = ivec.size();
  int arr[length]={};

  for(int i = 0; i <length; i++){
    arr[i]=ivec[i];
  }

  //Display the Array
  for(auto i : arr){
    cout<<i<<endl;
  }

  return 0;
}
    
