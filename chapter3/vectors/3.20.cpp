/*Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.*/
#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin ;
using std::endl;

int main(){
  int num=0,sum=0;
  char choice;
  cout<<"Please choose : adjacent sum(a) or first_and_last sum(l) :- "<<endl;
  cin>>choice;
  cin.ignore();

  vector <int> ivec ;
  
  while(cin>>num) {
    ivec.push_back(num); //reading input and storing in ivec
    }

  if(choice == 'a'){

    for(int index = 0 ; index < ivec.size() ; index++) { //let ivec = {1,2,3,4,5}
      if(index!= ivec.size()-1){
      sum=  (ivec[index]+ ivec[index+1]); // sum = 1 + 2 = 3 
      cout<< "Adjacent sum = " <<sum<< endl; // sum = 3 
      sum = 0;  //reset the sum 
      }
    } 
  }

 else if(choice == 'l') {
   for(int index = 0, last = ivec.size()-1 ; index <= ivec.size()/2, last>= ivec.size()/2  ; index++, last--){
     if(index == last ){ //odd case
       cout<< "First and last sum = " << ivec[index]<< endl;
       }
     else if(index != last) {
     cout<< "First and last sum = " << ivec[index]+ ivec[last]<< endl;
     } 
   }
 }


  return 0 ; 
}

