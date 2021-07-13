#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;

int main(){
  int grades;
  vector<int> ivec(11,0);

  while(cin>>grades){
    auto first = ivec.begin();
    (*first)++;// 
  }
    
  

  for(int i = 0 ; i < ivec.size() ; i++ ) {
    cout<<ivec[i]<< " " ;
  
}

  return 0;
}

/*cluster[grades/10] = cluster[grades/10] + 1
  cluster[100/10] = cluster[100/10] + 1 
  cluster[10] = cluster[10] + 1
  cluster[10] = 0 + 1 = 1 

  0 0 0 0 0 0 0 0 0 1 
  
  cluster[10]  1 + 1 = 2 ; 
  cluster[
  
  
*/
