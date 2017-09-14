#include <iostream>
using namespace std;
int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
   //Write a C++ program to print all even numbers between 1 to 100. - using while loop
     int even ;

     cout <<  " here all even numbers between 1 to 100. " << endl;
     even = 1;
    while( even <= 100 ) {
            even++;
        // Even numbers are divisible by 2
        if(even%2 == 0) {
            // counter is even, print it
           cout <<  even << endl;
        }
    }
    return 0;
}
