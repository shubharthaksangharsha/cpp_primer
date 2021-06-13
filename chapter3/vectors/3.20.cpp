/*Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.*/
#include<iostream>
#include<vector>
using std:: vector;
using std:: cout;
using std:: cin ;
using std:: endl;

int main(){
  int num=0,sum=0;
    
  vector <int> ivec ;
  
  while(cin>>num) {
    //num = 2 ;
    ivec.push_back(num); //vec = {2
    int next =0;
    cin>>next;  // next = 4;
    ivec.push_back(next); //vec = {2, 4
    cout<<"Pair sum : "<< sum = ivec[num] + ivec[next];         
  }

  // 1 , 2 ,3 , 4 1, 2, 3, 4, 5
  // 
  return 0 ; 
}
