#include<iostream>
using namespace std;
int main(){
  //a) std :: cin>> int input_value ;
  /* here we are trying to declare the object input_value of built-in type int 
     but we are trying to declaring it while after initialization which gives error. 
     so first we need to declare it, then we need to initialize it.*/

  int input_value;  // fix 
  cin >> input_value;

  //b) int i = {3.14};
  // it's write as we are declaring and intializing the object i with value 3.14 which will work and gives no error :-
  int i = {3.14}

  //c) double salary = wage = 9999.99;
  // it's wrong because here we are trying to put value of salary to wage while wage is not declared. so to fix it we first
  //declare the wage variable then assing the value to salary,  or we can intilize both the object with value 9999.99, like this :-
  //method 1 :-
  double wage = 9999.99;
  wage = salary;
  //method 2 :-
  //double salary = 9999.99, wage = 9999.99;

  //d) int i = 3.14 ;
  // here we are declaring and initializing value object i with 3.14.
  
  
     
     
