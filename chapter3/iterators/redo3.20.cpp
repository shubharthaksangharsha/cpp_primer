#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::cerr;

int main(){
  char choice;
  cout<<"Please choose : adjacent sum(a) or first_and_last sum(l) :- "<<endl;
  cin>>choice;
  cin.ignore();

  vector <int> ivec;
  int num=0 ;
  while(cin>>num){
    ivec.push_back(num);
  }
  vector<int>::iterator first = ivec.begin();
  vector<int>::iterator last = ivec.end()-1;
  vector<int>::iterator mid = first + (ivec.end()-first)/2;

  if(choice=='a'){
   for (; first!= ivec.end()-1; first++){
     cout<<"Adjacent sum: "<<(*first)+((*first)+1)<<endl;
    }
  }
  else if(choice=='l'){
    for( ; first<=mid, last >= mid  ; first++ , last --){
      if(first == last) {
      cout<<"First and last sum: " << *first<<endl;
    }
  
    else if(first!=last ) {
      cout<<"First  and last sum: " <<(*first) + (*last)<<endl;
    }
  }
  }
  else{
    cerr<<"Wrong input!";
    return -1;
  }

       

 return 0;
}
  
   
