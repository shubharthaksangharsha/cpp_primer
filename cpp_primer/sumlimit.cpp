#include<iostream>
using namespace std;

int main(){

int limit = 0 , sum = 0,value=0 ; 
cout<<"Please enter the integers you like to enter: ";
cin>>limit;

while(cin>>value && (--limit!=0))
{	sum+=value;

}

cout<<"Sum: "<< sum<< endl;

return 0;

}
