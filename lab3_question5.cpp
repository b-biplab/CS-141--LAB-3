#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

     //Write a C++ program to check whether a number is even or odd.

     int num;

    cout << "enter the number " << endl;
    cin >> num ;
    cout << endl;

    if (num/2 && num %2==0){
        cout << "the number is even"<< endl;

    }else {
            cout << "the number is odd"<< endl;
    }

    return 0;
}
