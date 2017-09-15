#include<iostream>
using namespace std;

int main(){
	float P, C, M, B, CS, PC;

	cout << "Enter the marks (out of 100) in the following subjects." << endl;

	cout << "Physics: ";
	cin >> P;

	cout << "Chemistry: ";
	cin >> C;

	cout << "Biology: ";
	cin >> B;

	cout << "Mathematics: ";
	cin >> M;

	cout << "Computer: ";
	cin >> CS;

	PC = (P+C+B+M+CS)/5;

	cout << endl << "Percentage: " << PC << endl;

	if (PC>=90){
		cout << "Grade: A" << endl;
	} else if (PC>=80){
		cout << "Grade: B" << endl;
	} else if (PC>=70){
		cout << "Grade: C" << endl;
	} else if (PC>=60){
		cout << "Grade: D" << endl;
	} else if (PC >=40){
		cout << "Grade: E" << endl;
	} else {
		cout << "Grade: F" << endl;
	}

	return 0;
}
