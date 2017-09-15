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
	int freqDigits[10], num;

	for(int i=0; i<10; ++i){
		freqDigits[i]=0;
	}

	cout << "Enter a number: ";
	cin >> num;

	for(int i=0; i<10; ++i){
		for(int j=1; j<=numDigits(num); ++j){
			if(nthDigit(num, j)== i){
				++freqDigits[i];
			}
		}
	}

	cout << "Frequency distribution of digits is as follows: " << endl;
	cout << "Digit \tFrequency" << endl;

	for(int i=0; i<10; ++i){
		if(freqDigits[i]!=0){
			cout << i << "\t" << freqDigits[i] << endl;
		}
	}

	return 0;
}
