#include<iostream>
using namespace std; 

int main() {
    
  int num1,num2,value;
  cout<<"Please enter the first number : ";
  cin>>num1;
  cout<<"Please enter the second number : ";
  cin>>num2;
 //for exclusive
 num1= num1 + 1;
 while(num1<num2)
  {
      cout<<num1<<endl;
      num1++;      
  }

return 0;

}
