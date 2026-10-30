#include <iostream>
#include <string>
using namespace std;
// Problem (11)
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
bool cheakIsPalidrome(int num) {

	if (reverseOrder(num) == num)
		return true;
	return false;

}
void displayPalindrome() {
	int number = ReadNumber("Please Enter a number: ");
	if (cheakIsPalidrome(number))
		cout << "(" << number << ") is palindrome " << endl;
	else
		cout << " isn't palindrome" << endl;
}




int main(){
	displayPalindrome();
	 return 0;
	}












