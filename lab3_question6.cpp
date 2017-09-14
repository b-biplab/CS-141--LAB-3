#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to check whether a year is leap year or not.

    int year ;

    cout << "enter the year " << endl;
    cin >> year ;
    cout << endl;

    if (year /4 && year % 4 == 0 ){
        cout << "this year is leap year " << endl;

    }else {
         cout << "this is not a leap year " << endl;

    }

    return 0;
}
