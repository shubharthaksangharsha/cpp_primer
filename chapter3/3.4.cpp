//modified using teritionary operator and auto 
#include<iostream>
using std :: cout;
using std :: cin ;
using std :: endl;
using std :: cerr;
using std:: string;
int main(){
  char choice;
  cout<<"Please enter choice"<<endl<<"For Larger press (L) and for longer press (l) "<<endl;
  cin>>choice;
  cin.ignore();

  string s1, s2 ;


  getline(cin,s1) ;

  cout<<"your s1 string : " <<s1<<endl;
  getline(cin,s2);
  cout<<"your s2 string : " <<s2 <<endl;
  auto l1 = s1.size() , l2 = s2.size();
  if(choice=='L'){
  if(s1==s2){
    cout<<"Both strings are equal"<<endl;
  }
  else {
    cout<<((s1>s2)? s1 : s2 )<< "is larger "<<endl;
  }
  }
  else if (choice == 'l'){
    if(l1==l2) {
      cout<<"Both strings have same length"<<endl;
    }
    else {
      cout<<((l1>l2) ? s1 : s2 )<<" is longer. "<<endl;
    }
    }	      
    
  else{
    cerr<<"wrong input!! "<<endl;
    return -1;
  }
  
  return 0;
}
    
    
