#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to input month number and print number of days in that month.

    int mday;

    cout << "are you interested to find out the days in a month ?" << endl;
    cout << "for january put 1" << endl;
    cout << "for february put 2" << endl;
    cout << "for march put 3" << endl;
    cout << "for april put 4" << endl;
    cout << "for may put 5" << endl;
    cout << "for june put 6" << endl;
    cout << "for july put 7" << endl;
    cout << "for august put 8" << endl;
    cout << "for september put 9" << endl;
    cout << "for october put 10" << endl;
    cout << "for november put 11" << endl;
    cout << "for december put 12" << endl;

    cout << endl;

    cin >> mday;

    cout << endl;


    if (mday==1){
        cout << "the january has 31 days "<< endl;
    }else if(mday==2){
        cout << "the february has 28 days "<< endl;
    }else if (mday==3){
        cout << "the march has 31 days "<< endl;
    }else if(mday==4){
        cout << "the april has 30 days "<< endl;
    }else if(mday==5){
        cout << "the may has 31 days "<< endl;
    }else if (mday==6){
        cout << "the june has 30 days "<< endl;
    }else if (mday==7){
        cout << "the july has 31 days "<< endl;
    }else if (mday==8){
        cout << "the august has 31 days "<< endl;
    }else if (mday==9){
        cout << "the september  has 30 days "<< endl;
    }else if (mday==10){
        cout << "the october has 31 days "<< endl;
    }else if (mday==11){
        cout << "the november has 30 days "<< endl;
    }else if (mday==12){
        cout << "the december has 31 days "<< endl;
    }else {
         cout << "it is a invalid input" << endl;

         }
    return 0;
}
