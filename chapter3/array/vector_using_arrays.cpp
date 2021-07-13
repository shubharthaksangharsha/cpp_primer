#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
  int a1[]= {1,2,3,4,5};

  vector<int> ivec1 (10,5);
  vector<int> ivec2 (std::begin(a1), std::end(a1)); //how this works?
  //ivec2(x,y) x basically tels the size of vector and y basically creates same element of vector. To refer check ivec
  cout<<"Display Elements of Vec1"<<endl;
  for(auto i: ivec1){ //displaying elements of ivec1
    cout<< i << " " ;
  }

  cout<<endl<<"Display Elements of Vec2"<<endl;
  for(auto i: ivec2){ //displaying elements of ivec2
    cout << i << " " ;
  }

  return 0;
}
