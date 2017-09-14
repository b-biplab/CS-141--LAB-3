#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input angles of a triangle and check whether triangle is valid or not.

    int angle1,angle2,angle3;

    cout << "enter the angle1 of triangle"<< endl;
    cin >> angle1;
     cout << "enter the angle2 of triangle"<< endl;
    cin >> angle2;
     cout << "enter the angle3 of triangle"<< endl;
    cin >> angle3;

    cout << endl;


    if (angle1+angle2+angle3==180){
        cout << "the triangle is valid " << endl;

    }else {
        cout << "the triangle is not valid" << endl;

     }

    return 0;
}
