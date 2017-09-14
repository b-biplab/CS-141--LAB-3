#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    //Write a C++ program to print all even numbers between 1 to n. - using while loop
    int i,n;
    cout << "here all the even natural number between 1 to n " << endl;
    cout << "confirm your 'n' : " << endl;
    cin >> n ;
    i=1;
    while (i <= n){
        cout << i  << endl;
        i++;
    }
    return 0;
}
