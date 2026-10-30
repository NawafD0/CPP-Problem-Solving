#include <iostream>
#include <string>
using namespace std;
// Problem (7)

int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
int reverseOrder(int num) {
	int reminder = 0, num2 = 0;
	while (num > 0) {

		reminder = num % 10;
		num = num / 10;
		num2 = num2 * 10+ reminder;


	}
	return num2;


}
int main(){
	cout<<reverseOrder(ReadNumber("Please enter a number\n"));

	 return 0;
	}












