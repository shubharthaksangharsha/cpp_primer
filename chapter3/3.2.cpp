#include<iostream>
using namespace std;
int main(){
  char select;
  string line,word;
  cout<<"please enter w(word) or l(line)";
  cin>>select;
  if(select=='l'){
  /* program to read one line at a time */
  while(getline(cin,line)){
    cout<<line;
  }
  }
  else if(select=='w'){
  /*program to read one word at a time */
  while(cin>>word){
    cout<<word;
  }
  }
  else {
    cerr<<"you have entered wrong input!"<<endl;
    return -1;
  }
  
  return 0;
}
