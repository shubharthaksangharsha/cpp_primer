#include<iostream>
using namespace std;
int main(){
  string line;
  while(getline(cin, line)){
    if(line.size()>50){
      cout<<line<<endl;
      return 0;
      
    }
    else{
      cerr<<"Please enter more than 50 characters!";
      return -1;
    }

 
  }
  return 0;     
}
