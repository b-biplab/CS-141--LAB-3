#include <iostream>

using namespace std;

int main()
{
    cout << "hello, user " << endl;
    cout << endl;

    //Write a C++ program to find maximum between two numbers.

    int num1 ,num2;
    cout << "enter the 1st number" << endl;
    cin >> num1;
    cout << "enter the 2nd number " << endl;
    cin >> num2;
    if (num1>num2){
        cout <<"the maximum is " <<num1<< endl;
    }else {
        cout << "the maximum is " << num2 << endl;
    }

    return 0;
}
