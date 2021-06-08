#include<iostream>
using namespace std ;

class person {

int gender ;
string name ;


};

class employee  {
int employeeid;
public : void display(){

    cin >> employeeid;
    cout<<employeeid;
}


};

class teacher : public person, public employee {
string subject;
string schoolname;
public : void display2(){
    cin >> subject ;
    cin >> schoolname;
    cout<<schoolname<<subject;
}

};

int main(){

teacher obj1;
obj1.display();
obj1.display2();

return 1; 


}