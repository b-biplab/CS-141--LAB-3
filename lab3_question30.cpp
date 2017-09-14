#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    //Write a C++ program to print multiplication table of any number.
    int i,n,r,sum=0,a;
    cout << "enter a integer: ";
    cin >> n;
    cout << "enter your range: ";
    cin >> r;
    cout << "here the multiplication table of " << n << endl;
    cout << endl;
    for (i= 1;i <=r ;++i){
            cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}
