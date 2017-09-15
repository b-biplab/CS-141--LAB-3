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
	int num, pdtDigits=1;

	cout << "Enter a number: ";
	cin >> num;

	for(int i=1; i<=numDigits(num); ++i){
		pdtDigits *= nthDigit(num, i);
	}

	cout << "Product of digits of the number: " << pdtDigits << endl;

	return 0;
}
