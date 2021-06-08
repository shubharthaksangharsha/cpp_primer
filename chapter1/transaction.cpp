#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(){
  
  Sales_item obj, sum;
  
  if(cin>>obj){
  int count=1;
  
  while(cin>>sum){
    
    if(obj.isbn()==sum.isbn())
      count++;
    else{
      
      cout<<obj.isbn()<<"occurs" <<count<<"times"<<endl;
      count=1;
      obj=sum;
    }

  }

  cout<<obj<<" counts " << count << "times" <<endl;
  }
  
  
  
  return 0;
}
 
    
  
