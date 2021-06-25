#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
   int n;
   int grades[11];
  while(cin >> n){
    if(n<= 100){
      ++grades[n/10];
    }
  }

  for(unsigned i : grades){
    cout<< i << " ";
  }

  return 0;
}
      
