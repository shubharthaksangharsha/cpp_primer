#include<iostream>
using namespace std;

struct Sales_data {
  double revenue = 0.0;
  string book_no;
  string book_name;
  double price = 0.0;
  unsigned unit_sold = 0;
};

int main(){
  Sales_data obj1,obj2;
  double price = 0.0;
  cin >> obj1.book_no>>obj1.unit_sold>>price;
  obj1.revenue = obj1.unit_sold * price ;

  cin >> obj2.book_no>>obj2.unit_sold>>price;

  obj2.revenue = obj2.unit_sold * price ;

  if(obj1.book_no==obj2.book_no) {
    unsigned count = obj1.unit_sold+obj2.unit_sold;
    double total = obj1.revenue + obj2.revenue;
    cout<< obj1.book_no<<" " <<count<< " " << total<< " ";
    if(count!=0){
      cout<<total/count<<endl;
    }
    else
      cout<<"(no sales)"<<endl;
    return 0;
  }
  else {
    cerr<< "Data must refer to same ISBN" << endl;
    return -1; //failure
  }
     
  
 

  return 0;
}
