#include<iostream>
#include<vector>
using std :: cout ;
using std :: cin ;
using std :: vector;


int main(){
  vector <int> ivector ;

  for(int i = 0 ; i < 100 ; ++i ) {
    ivector.push_back(i);
  }

  return 0;
}
