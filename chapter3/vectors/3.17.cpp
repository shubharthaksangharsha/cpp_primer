/*Exercise 3.17: Read a sequence of words from cin and store the values a
vector. After you’ve read all the words, process the vector and change
each word to uppercase. Print the transformed elements, eight words to a
line.*/
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using std::cout;
using std::cin ;
using std::string;
using std::vector;
using std::string;
using std::endl;

int main(){
  string word,s;
  int count = 0;
  vector<string> svec ;

  while(cin>>word){
    svec.push_back(word); 
  }
  
  for(string &word : svec) {
    for(char &c : word){
     c =  toupper(c); 
    }
  }

  for(int index = 0 ; index < svec.size() ; index++  ) {
    cout<< svec[index] << " " ;
    count++;
    if(count == 8 ) {  //or if ( count %8 == 0 ) both are valid 
      cout << endl;
    }

  }
 
  
  return 0;
}
