#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main(){
  vector<int> v1{10};
  vector<int> v2;
  vector<int> v3;
  vector<int> v4;
  vector<int> v5;
  vector<int> v6;
  vector<int> v7;

  for(auto first = v1.begin(); first != v1.end() ; first++){
    cout<<*first<< " " ;
  }
  
  return 0;
}
