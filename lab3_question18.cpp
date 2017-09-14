#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

    //Write a C++ program to calculate profit or loss.

    float cp,sp,profit,loss;

    cout << "enter your cost price :  " << endl;
    cin >> cp ;
    cout << "enter your selling price :  " << endl;
    cin >> sp ;

    if (cp < sp){

        profit = sp-cp;

        cout << "Hurrey! here you got profit : " << profit << endl;

    }else if (cp > sp){

        loss = cp-sp;

        cout << "Oops! here you got loss : " << loss << endl;
    }else {

         cout << "There is no loss or profit. " << endl;
    }

    return 0;
}
