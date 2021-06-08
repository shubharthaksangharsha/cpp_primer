#include<iostream>
using namespace std;
int main(){
  int curvalue = 0, value = 0;
  if(cin>>curvalue){
    int count=1;
    while(cin>>value){
      if(curvalue==value)
	count++;
      else{
	cout<<curvalue<<" occurs "<<count<<" times"<<endl;
	curvalue=value;
	count=1;;
      }
    }
  }
  return 0;
}
