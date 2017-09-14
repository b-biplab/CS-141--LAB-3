#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to find maximum between three numbers.

    int num1 ,num2,num3;

    cout << "enter the 1st number" << endl;
    cin >> num1;
    cout << "enter the 2nd number " << endl;
    cin >> num2;
    cout << "enter the 3rd number " << endl;
    cin >> num3;
    if (num1>num2){
        cout <<"the maximum is " <<num1<< endl;
    }else if (num2 > num3) {
        cout << "the maximum is " << num2<< endl;
    }else {
        cout << "the maximum is " << num3 << endl;
    }

    return 0;
}
