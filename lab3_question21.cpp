#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;
    /*Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

    float e,a,b,c,d,f,g,h,i,w,y,z,bill;
    cout << "enter your electricity used in units : " << endl;
    cin >> e ;

    g=50*0.50;
    h=50*0.75;
    i=150*1.20;
    if (e<=50){
        a=e*0.50;
        bill =a+(a*0.2);
        cout << "the electricity bill : " << bill <<  endl;
    }else if (50<e<=100){
        b=(e-50)*0.75;
        y=g+b;
        bill =y+(y*0.2);
        cout << "the electricity bill : " << bill <<  endl;
    }else if (100<e<=250){
        c=(e-100)*1.20;
        z=g+h+c;
        bill =z+(z*0.2);
        cout << "the electricity bill : " << bill <<  endl;
    }else {
        d=(e-150)*1.50;
        w=d+g+h+i;
        bill =w+(w*0.2);
        cout << "the electricity bill : " << bill <<  endl;
    }
    return 0;
}
