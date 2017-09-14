#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    // Write a C++ program to check whether the triangle is equilateral, isosceles or scalene triangle.

    int s1,s2,s3;
    cout << endl;

    cout << "enter the side1 of the triangle " << endl;
    cin >> s1;

    cout << "enter the side2 of the triangle " << endl;
    cin >> s2;

    cout << "enter the side3 of the triangle " << endl;
    cin >> s3;
     if (s1+s2<s3 || s1+s3<s2 || s3+s2<s1){
             cout << "the triangle is not valid "<< endl;
    }else if (s1==s2==s3  ){
              cout << "the triangle is valid"<< endl;
              cout << "it is a equilateral triangle " << endl;
    }else if (s1==s2 || s2==s3||s3==s1 ){
             cout << "the triangle is valid"<< endl;
             cout << "it is a isosceles triangle " << endl;
    }else if (s1!= s2 && s2!=s3 && s1!=s3 ){
             cout << "the triangle is valid" <<  endl;
             cout << "it is a scalene triangle " << endl;
    }else {}
    return 0;
}
