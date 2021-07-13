#include<iostream>
#include<vector>
int main(){
    using namespace std;   
    vector<int> v1{10, 30, 20, 40, 50};
    vector<int> v2{10, 20, 30, 40, 50};

    if(v1==v2)
        cout<<"equal";
    else
        cout<<"unequal";

    return 0;
} 
