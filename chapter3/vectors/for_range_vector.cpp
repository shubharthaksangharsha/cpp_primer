#include<iostream>
#include<vector>
using std :: vector;
using std :: cout ;
using std :: endl;

int main(){
  vector <int> ivec ;
  for(int i = 0 ; i <10 ; i ++ ) {
    ivec.push_back(i);
      }

  for ( auto c : ivec ) {
    cout<<c <<" ";
  }

  return 0;
}
    
