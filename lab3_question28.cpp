#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    //Write a C++ program to find sum of all even numbers between 1 to n.
    int i,n,sum=0,a;
    cout << "i want to find out the sum of the all even number between 1 to: ";
    cin >> n;
    cout << endl;
    for (i= 2;i <=n ;i+=2){
            sum +=i;

    }
    a=n;
    cout << "here the sum of the all even number between 1 to " << a << endl;
    cout << sum <<endl;

    return 0;
}
