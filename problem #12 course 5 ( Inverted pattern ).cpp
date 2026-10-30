#include <iostream>
#include <string>
using namespace std;
// Problem (12)
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
	for (int i = number; i >= 1; i--) {

		for ( int j=i; j>= 1; j--) {
			cout << i;
		}



		cout << endl;
	}



}




int main(){
	print(ReadNumber("Please Enter a number"));
	 return 0;
	}












