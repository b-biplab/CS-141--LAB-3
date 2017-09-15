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

bool isPalindrome(int number){
	int val=0;
	for(int i=1; i<=numDigits(number); ++i){
		if(nthDigit(number,i) == nthDigit(number, (numDigits(number)-i+1))){
			++val;
		}
	}

	if(val==numDigits(number)){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if(isPalindrome(num)){
		cout << "The number is a palindrome." << endl;
	} else {
		cout << "The number is not a palindrome." << endl;
	}

	return 0;
}
