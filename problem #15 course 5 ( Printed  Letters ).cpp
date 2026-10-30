#include <iostream>
#include <string>
using namespace std;
// Problem (15)
int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);

	return  num;

}
void printLetters(int number) {
	cout << "*******************" << endl;

	for (int i = 65; i <= (64 + number);i++) {

		for (int j = 65; j <= i; j++) {

			cout << char(i);


		}

		cout << endl;
	}



}




int main() {
	printLetters(ReadNumber("Please Enter a number"));

	return 0;
}












