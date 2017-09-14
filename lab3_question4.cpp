#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to check whether a number is divisible by 5 and 11 or not.

    int num;

    cout << "enter your number " << endl;
    cin >> num;

    if (num / 55 && num % 55 ==0){
            cout << "the number is divisible by both 5 & 11 " << endl;
    }else if (num / 5 && num % 5==0){
        cout << "the number divisible by 5 ,but not divisible by 11" << endl;

    }else if (num / 11 && num % 11==0){
        cout << "the number divisible by 11 ,but not divisible by 5" << endl;

    }else {
            cout << "the number is not divisible by 5 or 11"<< endl;

    }

    return 0;
}
