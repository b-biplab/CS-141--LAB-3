#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input any alphabet and check whether it is vowel or consonant.

    char alpha;
    int lower,upper;

    cout << "enter the alphabet" << endl;
    cin >> alpha ;
    lower=alpha == 'a'|| alpha =='e'||alpha =='i'||alpha =='o'||alpha =='u';
    upper=alpha == 'A'|| alpha =='E'||alpha =='I'||alpha =='O'||alpha =='U';


    if (lower || upper){

        cout << "the alphabet is vowel" << endl;

    }else {
        cout << "the alphabet is consonant" << endl;

    }
    return 0;
}
