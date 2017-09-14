#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to check whether a character is alphabet or not.

    char character ;

    cout << "enter a character" << endl;
    cin >> character ;

    if (character >=  'a' && character <= 'z') {
       cout << "the character is alphabet" << endl;

    }else if (character >=  'A' && character <= 'Z') {

        cout << "the character is alphabet" << endl;
    } else {

        cout << "the character is not an alphabet " << endl;
    }

    return 0;
}
