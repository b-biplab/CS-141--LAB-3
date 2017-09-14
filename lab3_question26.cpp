#include <iostream>
using namespace std;
int main()
{

     cout << "Hello user!" << endl;
     cout << endl;

     //Write a C++ program to print all odd number between 1 to 100.
      int odd;
      cout <<  " here all odd numbers between 1 to 100. " << endl;
      for(odd = 1; odd <= 100; odd++) {
      if(odd%2 == 1) {
      cout <<  odd << endl;
        }
    }
     return 0;
}

