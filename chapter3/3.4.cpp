#include<iostream>
using namespace std;
int main(){
  char choice;
  cout<<"Please enter choice"<<endl<<"For Larger press (L) and for longer press (l) "<<endl;
  cin>>choice;
  
  string s1, s2 ;
  getline(cin,s1);
  getline(cin,s2);
  if(choice=='L'){
  if(s1!=s2){
    if(s1>s2) {
      cout << "string which is larger is : " <<s1<<endl;
    }
    else{
      cout<<"string which is larger is : " <<s2<<endl;
    }
  }
  else{
    cout<<"Both strings are equal "<<endl ;
  }
  }
  else if (choice == 'l'){
    if(s1.size() != s2.size()){
      if(s2.size()> s1.size()){
	cout<<"Longer string : "<<s2<<endl;
      }
      else {
	cout<<"Longer string : " << s1<<endl;
      }
    }
    else {
      cout<<"Both strings have same length" <<endl;
    }
  }
  else{
    cerr<<"wrong input!! "<<endl;
    return -1;
  }
  
  return 0;
}
    
    