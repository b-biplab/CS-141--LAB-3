#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to check whether a character is uppercase or lowercase alphabet.

    char input ;

    cout << "enter the character " << endl;
    cin >> input ;


    if (input >= 'a'&& input<='z'){
        cout << "you have entered a lowercase alphabet" << endl;

    }else if(input >= 'A'&& input<='Z')  {
      cout <<"you have entered an uppercase value. " << endl;

    }else {
        cout << "you have entered a special character" << endl;
    }

    return 0;
}
