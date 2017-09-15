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

int main(){
	char hex[50];

	cout << "Enter a hexadecimal number: ";
	cin >> hex;

	cout << "The number in decimal is: " << fromBaseN(hex, 16) << endl;

	return 0;
}
