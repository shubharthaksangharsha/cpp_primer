/*Exercise 3.23: Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.*/

#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;


int main(){
  int v,value=0;
  vector<int> ivec;
  while(value<10 && cin>>v) {
    ivec.push_back(v);
    value++;
  }

  vector<int>::iterator first = ivec.begin();  
  for(; first != ivec.end() ; first++ ) {
    *first=2 * (*first);
    cout<<"New value : "<<  *first <<  endl ;
     
  }

  return 0;
  
}
