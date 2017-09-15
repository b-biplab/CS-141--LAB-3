#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Enter exponent:  " << endl;
    cin >> exponent;
    cout << "Enter base:  " << endl;
    cin >> base;

    cout << base << "^" << exponent << " = " << endl;

    for (exponent != 0;exponent <= result;--exponent) {
        //result *= base;--exponent;
        result *= base;


    }cout << result;



    return 0;
}
