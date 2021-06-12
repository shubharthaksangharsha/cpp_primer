#include<iostream>
using namespace std;
int main(){
  string input ,total;
  while(getline(cin,input)){
    total= total + ' ' + input;
  }
  cout<<total<<endl;
  return 0;
}
