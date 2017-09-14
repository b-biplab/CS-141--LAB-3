#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to check whether a number is negative, positive or zero.

    int num;
     cout << "enter the number" << endl;
     cin >> num;
     cout << endl;

     if (num==0 ){
        cout << "the number is zero" << endl;
     }else if (num < 0){
         cout << "the number is negative " << endl;

     }else {
         cout << "the number is positive " << endl;

     }
    return 0;
}
