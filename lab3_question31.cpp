#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    //Write a C++ program to count number of digits in any number.
    long long n ;
    int count = 0;
    cout << "enter an integer: ";
    cin >> n;
    cout << "here the number of digits in the integer "<< n <<":"<< endl;
    cout << endl;
    while (n!=0){
        n/=10;
        ++count;
    }
    cout << count << endl;

    return 0;

}
