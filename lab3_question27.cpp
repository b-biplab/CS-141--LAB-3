#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    //Write a C++ program to find sum of all natural numbers between 1 to n.
    int i,n,sum;
     cout <<  "you want to find the sum of all numbers between 1 to ";
     cin >> n;
     for( i = 1;i <= n;++i) {
            sum = (n*(n+1))/2;

     }
     cout << endl;
     cout <<"here the sum : " << sum << endl;
    return 0;
}
