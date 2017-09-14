#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.

    int s1,s2,s3;

    cout << "enter the side1 of the triangle " << endl;
    cin >> s1;

    cout << "enter the side2 of the triangle " << endl;
    cin >> s2;

    cout << "enter the side3 of the triangle " << endl;
    cin >> s3;

    if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2 ){
        cout << "the triangle is valid"<< endl;

    }else {
       cout << "the triangle is not valid"<< endl;

    }
    return 0;
}

