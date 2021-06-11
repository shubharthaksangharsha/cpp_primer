#include<iostream>
using namespace std;
int main(){
  string input ,total;
  while(getline(cin,input)){
    total= total + ' ' + input<<endl;;
  }
  cout<<total;
  return 0;
}
