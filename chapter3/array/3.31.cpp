//Exercise 3.31: Write a program to define an array of ten ints. Give each
//element the same value as its position in the array.
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int iarray[10] = {};

  //using subscript :-
  cout<<"Using Subscript" <<endl;
  for(int i = 0; i<10 ; i++ ){
    iarray[i] = i;
    printf("iarray[%d]: %d\n", i, iarray[i]);
  }

  int iarray2[10]= {};

  for(int i = 0; i<10; i++){
    iarray2[i] = iarray[i];
    cout<<"Elements of array 2 : " << iarray[i]<<endl;
  }

  cout<<endl<<"***********"<<endl;
    
     
  return 0;
}


  
  
  
