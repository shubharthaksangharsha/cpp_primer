#include<iostream>
#include<vector>
#include<string>
using std :: cout;
using std :: cin ;
using std :: string;
using std :: vector;
using std :: string;
using std :: endl;

int main(){
  //first way :-
  vector <int> v1(10,42);

  //second way :-
  vector <int> v2= {42, 42, 42, 42, 42, 42, 42, 42, 42, 42} ;

  //third way :-
  vector <int> v3;
  for(int i = 0 ; i<10 ; i ++ ) {
    v3.push_back(i);
  }

  return 0;
}
