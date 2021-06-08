#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ //setfill and setw
    // cout << setfill('*');
    // cout << setw(5) << "1" << endl;
    // cout << setfill(' ');
    // cout << setw(5) << 100 << endl;

    //setprecision
    cout << endl
         << "Before precision : " << 22 / 7.0 << endl;
    cout << endl
         << "using setprecision: ";
    cout << setprecision(2) << 22 / 7.0;

    return 0;
}