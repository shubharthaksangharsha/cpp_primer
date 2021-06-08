#include<iostream>
using namespace std; 

int main() {

	int value=0,curvalue=0;
	if(cin>>curvalue) {
		int count = 1;
		
	while(cin>>value){
	if(value==curvalue){

	++count;
	
	}
	else{
	
	cout<<endl<<curvalue<<"occurs"<<count<<"times"<<endl;
	curvalue=value;
	count =1 ;
	
	cout<<"value: "<<value<<endl<<"current value : "<<curvalue<<endl;
	
	
	}
	}

		cout<<endl<<curvalue<<"occurs"<<count<<"times"<<endl<<"value: "<<value<<endl<<"current value : "<<curvalue<<endl;
	cout<<endl<<curvalue<<"occurs"<<count<<"times"<<endl;
	
} 



return 0 ; 
}
