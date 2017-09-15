#include<iostream>
#include<cmath>
using namespace std;

char toChar(int a){
	if (a == 0){
		return '0';
	}
	else if(a == 1){
		return '1';
	} else if(a == 2){
		return '2';
	} else if(a == 3){
		return '3';
	} else if(a == 4){
		return '4';
	} else if(a == 5){
		return '5';
	} else if(a == 6){
		return '6';
	} else if(a == 7){
		return '7';
	} else if(a == 8){
		return '8';
	} else if(a == 9){
		return '9';
	} else if(a == 10){
		return 'A';
	} else if(a == 11){
		return 'B';
	} else if(a == 12){
		return 'C';
	} else if(a == 13){
		return 'D';
	} else if(a == 14){
		return 'E';
	} else if(a == 15){
		return 'F';
	} else {
		return 0;
	}
}

int log_n(int base, int number){
	int foo = int(log(number)/log(base));
	return foo;
}


void toBaseN(int num10, int n){
	char numN[50];
	for(int i=0; i<50; ++i){
		numN[i] = '\0';
	}

	int numDigits = log_n(n, num10);

	for(int i=0; num10>0; ++i){
		numN[numDigits-i] = toChar(num10%n);
		num10 /= n;
	}

	cout << numN;
}
int main(){
	int dec;

	cout << "Enter a decimal number: ";
	cin >> dec;

	cout << "The number is binary is: ";
	toBaseN(dec, 2);
	cout << endl;

	return 0;
}
