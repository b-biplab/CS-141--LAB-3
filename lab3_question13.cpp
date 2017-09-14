#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << endl;

   //Write a C++ program to count total number of notes in given amount.

   int amount,R2000,R500,R100,R50,R20,R10,R5,R2,R1;
   cout << "enter the amount : " << endl;
   cin >> amount;

   R2000=amount/2000;
	amount=amount%2000;
   R500=amount/500;
	amount=amount%500;
	R100=amount/100;
	amount=amount%100;
	R50=amount/50;
	amount=amount%50;
	R20=amount/20;
	amount=amount%20;
	R10=amount/10;
	amount=amount%10;
	R5=amount/5;
	amount=amount%5;
	R2=amount/2;
	amount=amount%2;
	R1=amount;

	cout<<"Rs.2000 : " << R2000 << endl;
	cout<<"Rs.500  : " << R500 << endl;
	cout<<"Rs.100  : " << R100 << endl;
	cout<<"Rs.50   : " << R50 << endl;
	cout<<"Rs.20   : " << R20 << endl;
    cout<<"Rs.10   : " << R10 << endl;
    cout<<"Rs.5    : " << R5 << endl;
    cout<<"Rs.2    : " << R2 << endl;
    cout<<"Rs.1    : " << R1 << endl;

    return 0;
}
