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
#include <iostream>
#include <string>
using namespace std;
// Problem (10)
int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num<0);

	return  num;

}
int reverseOrder(int num) {
	int reminder = 0, num2 = 0;
	while (num > 0) {
		reminder = num % 10;
		num = num / 10;
		num2 = num2 * 10 + reminder;
	

	}
	return num2;


}
void PrintReverseOrder(int number) {
	int reminder = 0;
	string s = "";
	while (number > 0) {
		reminder = number % 10;
		number = number / 10;
		cout << reminder << endl;

	}
}





int main(){
	PrintReverseOrder(reverseOrder(ReadNumber("Please Enter a number: ")));
		
	 return 0;
	}












int main(){
	cout<<reverseOrder(ReadNumber("Please enter a number\n"));

	 return 0;
	}












