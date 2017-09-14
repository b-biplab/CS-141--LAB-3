#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    /*Write a C++ program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

    float bs,hra,da,ga;
    cout << "enter your basic salary : " << endl;
    cin >> bs;
    if (bs <=10000){
        hra=bs*0.2;
        da=bs*0.8;
        ga=bs+hra+da;
        cout << "your gross salary is : "<< ga << endl;
    }else if (bs <=20000){
        hra=bs*0.2;
        da=bs*0.9;
        ga=bs+hra+da;
        cout << "your gross salary is : "<< ga << endl;
        cout<< endl;
    }else {
        hra=bs*0.3;
        da=bs*0.95;
        ga=bs+hra+da;
        cout << "your gross salary is : "<< ga << endl;
    }
    return 0;
}
