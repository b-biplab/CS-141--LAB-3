#include<iostream>
#include<cmath>
using namespace std;

int toInt(char a){
	if (a == '0'){
		return 0;
	}
	else if(a == '1'){
		return 1;
	} else if(a == '2'){
		return 2;
	} else if(a == '3'){
		return 3;
	} else if(a == '4'){
		return 4;
	} else if(a == '5'){
		return 5;
	} else if(a == '6'){
		return 6;
	} else if(a == '7'){
		return 7;
	} else if(a == '8'){
		return 8;
	} else if(a == '9'){
		return 9;
	} else if(a == 'a' || a == 'A'){
		return 10;
	} else if(a == 'b' || a == 'B'){
		return 11;
	} else if(a == 'c' || a == 'C'){
		return 12;
	} else if(a == 'd' || a == 'D'){
		return 13;
	} else if(a == 'e' || a == 'E'){
		return 14;
	} else if(a == 'f' || a == 'F'){
		return 15;
	} else {
		return 0;
	}
}

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
int stringLength(char str[50]){
	int len=0;
	for(int i=1; str[i] != '\0'; ++i){
		++len;
	}

	return len+1;
}

int fromBaseN(char num[50], int n){
	int num10 = 0;

	for(int i=0; i<stringLength(num); ++i){
		num10 += toInt(num[i])*pow(n, (stringLength(num)-i-1));
	}

	return num10;
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

void twosComplement(char n0[50]){
	char n1[50], n2[50];

	for(int i=0; i<50; ++i){
		n1[i] = '\0';
	}

	for(int i=0; i<50; ++i){
		n2[i] = '\0';
	}

	for(int i=0; n0[i]!='\0'; ++i){
		if(n0[i] == 48){
			n1[i] = 49;
		} else if(n0[i] == 49){
			n1[i] = 48;
		}
	}

	toBaseN((fromBaseN(n1, 2)+1), 2);
}
int main(){
	char n[50];

	cout << "Enter binary number: ";
	cin >> n;

	cout << "Two's complement: ";
	twosComplement(n);
	cout << endl;

	return 0;
}
