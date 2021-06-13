#include<iostream>
#include<vector>
#include<string>
using std :: cout ;
using std :: cin ;
using std :: endl ;
using std :: vector;
using std :: string;
int main(){
  int grades;
  vector<int> cluster (11,0);

  while(cin>>grades){
    if(grades<=100){
      ++cluster[grades/10];

    }
  }
  for(int index = 0 ; index < cluster.size() ; index ++ ) {
    cout<<cluster[index] << " " ;
  }
  return 0;
}

/* 1 2 3 4 5 6 7 8 9 10 11 = clusters 
   ++cluster[100/10] :-
   auto a = cluster[10] = 
   index = cluster - 1  //very important 
   cluster = index + 1 
   cluster = 10 + 1 = 11th
   a = a + 1; 
*/

