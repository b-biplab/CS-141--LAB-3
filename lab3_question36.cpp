#include<iostream>
using namespace std;

int numDigits(int n){
	int i=0;
	while(n>0){
		n /= 10;
		++i;
	}

	return i;
}

int exp(int base, int exponent){
	int ans=1;
	while(exponent>0){
		ans *= base;
		--exponent;
	}

	return ans;
}

int nthDigit(int number, int n){
	int nth = (number/(exp(10, (numDigits(number)-n))))%10;
	return nth;
}


int main(){
	int num, revNum;

	cout << "Enter a number: ";
	cin >> num;

	for(int i=1; i <= numDigits(num); ++i){
		revNum += (nthDigit(num, i)*(exp(10,i-1)));
	}

	cout << "Reversed number: " << revNum << endl;

	return 0;
}

