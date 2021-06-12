#include<iostream>
using std :: cout ;
using std :: cin ;
using std :: string ;
using std :: endl;
using std :: cerr;

int main(){
  char choice ;
  cout<<"Please choose (w) for while loop execution or (f) for for loop execution" << endl;
  cin >> choice ;
  cin.ignore();
  
  string name;
  getline(cin , name );
  decltype(name.size()) index = 0 ;  
  auto l = name.size();
  if(choice=='w'){
  while(index < l) {
    name[index] = 'X';
    index++;
  }
  cout<<name<<endl;
  }
  else if(choice =='f') {
    for(index = 0 ; index < l ; index++ ) {
      name[index] = 'X';

    }
    cout<<name<<endl;
  }
    else {
      cerr << "wrong choice!!" ;
      return -1;
    }
    
  return 0;
}
    
    
