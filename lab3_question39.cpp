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

void toWords(int i){
	if(i == 0) {
		cout << "zero ";
	} else if(i == 1){
		cout << "one ";
	} else if(i == 2){
		cout << "two ";
	} else if(i == 3){
		cout << "three ";
	} else if(i == 4){
		cout << "four ";
	} else if(i == 5){
		cout << "five ";
	} else if(i == 6){
		cout << "six ";
	} else if(i == 7){
		cout << "seven ";
	} else if(i == 8){
		cout << "eight ";
	} else if(i == 9){
		cout << "nine ";
	}
}

int main(){
	int n;

	cout << "Enter number: ";
	cin >> n;

	for(int i=1; i<=numDigits(n); ++i){
		toWords(nthDigit(n, i));
	}

	cout << endl;

	return 0;
}
