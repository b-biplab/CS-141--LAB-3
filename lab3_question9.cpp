#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input any character and check whether it is alphabet, digit or special character.

    char input;

    cout << "enter the character: " << endl;
    cin >> input ;


    if ((input >='a'&& input <='z')||(input >='A'&& input <='Z')){

        cout << " you have entered an alphabet" << endl;

    }else if (input >='0' && input <='9'){

        cout << "you have entered a digit" << endl;

    }else {

       cout << "you have entered a special character" << endl;

    }
    return 0;
}
