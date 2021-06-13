#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string word;
  getline(cin,word);

  if(word.begin() != word.end()){ //check if string not empty 
    auto first = word.begin();  //first is first character in word
    *first = toupper(*first);  //make first char uppercase
    cout<< word<<endl;
  }



  return 0;
}

  
