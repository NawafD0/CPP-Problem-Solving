#include <iostream>
#include <string>
using namespace std;
// Problem (13)
int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num<0);

	return  num;

}
void print(int number) {
	cout << "*******************" << endl;
	for(int i=1;i<=number;i++){

		for (int j = 1; j <= i; j++) {
			cout << i;
		}


		cout << endl;
	}



}




int main(){
	print(ReadNumber("Please Enter a number"));
	 return 0;
	}












