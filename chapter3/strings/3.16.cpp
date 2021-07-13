#include<iostream>
#include<vector>
#include<string>
using std :: cout ;
using std :: cin ;
using std :: vector ;
using std :: string;

using std :: endl;

int main(){
  vector<int> v1 ;
  vector<int> v2(10);
  vector<int> v3 (10,42);
  vector<int> v4{10};
  vector<int> v5{10,42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  for ( auto c : v1){
    cout<<c<< " ";
  }
  
  cout<<"v1 size = "<<v1.size()<<endl;

  return 0;
}
