#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout  << endl;
    //Write a C++ program to find sum of first and last digit of any number.
   int n,ld,fd;
   cout << "enter any number :" << endl;
   cin >> n;
    ld = n % 10;
    fd = n;
    while(fd >= 10)
    {
        fd /=10;
    }
    cout << "the first digit : " << fd << endl;
    cout << "the last digit : "<< ld << endl;
    cout << "the sum of first and last digit of integer is : " << fd+ld <<  endl;
    return 0;
}
