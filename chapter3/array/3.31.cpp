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
  //using ranged-for :-
  cout<<"Using ranged-for" << endl;
  for(auto i : iarray ){

    iarray[i] = i ;
    cout<<"Elements: "<<iarray[i]<<endl;
  }

unsigned scores[] = {}; // 11 buckets, all value initialized to 0
unsigned grade;
while (cin >> grade) {
  if (grade <= 100)
    ++scores[grade/10]; // increment the counter for the current cluster

}

 for(int i =0 ; i < 11 ; i++){
   cout<<scores[i]<< " ";
 }
     
  return 0;
}


  
  
  
