#include<iostream>
using namespace std;

int main(){
	char generalKenobi;
	cout << "ASCII Value \tASCII Character" << endl;

	for(int i=0; i<128; ++i){
		generalKenobi = char(i);
		cout << i << "\t" << generalKenobi << endl;
	}

	return 0;
}
