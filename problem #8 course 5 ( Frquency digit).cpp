#include <iostream>
#include <string>
using namespace std;
// Problem (8)

int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
int DigitFrequncy(int num) {
	cout << "*************" << endl;
	int FNum = ReadNumber("Please Enter the number you want to count:");
	short counter = 0;
	int reminder = 0;
	cout << "\n*****************************\n";
	cout << "The number ("<<FNum<<") has been detected in the sequnce: " << endl;
	while (num > 0) {

		reminder = num % 10;
		if (reminder == FNum)
			counter++;
		num = num / 10;
		


	}
	return counter;


}
int main(){
	cout<<DigitFrequncy(ReadNumber("Please enter a number\n"));
		
	 return 0;
	}












