#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input week number and print week day.

    int wday;
    cout << "enter weekday number(0-6)" << endl;
    cin >> wday;
    cout << endl;

    if (wday==0){
        cout << "sunday" << endl;

    }else if(wday==1){
        cout << "monday" << endl;

    }else if(wday==2){
        cout << "tuesday" << endl;

    }else if(wday==3){
        cout << "wednessday" << endl;

    }else if(wday==4){
        cout << "thusday" << endl;

    }else if(wday==5){
        cout << "friday" << endl;

    }else if (wday==6){
        cout << "saturday" << endl;

    }else {
        cout << "it is invalid input " << endl;

    }
    return 0;
}
