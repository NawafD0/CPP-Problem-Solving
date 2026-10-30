#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 21


int readNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;

	} while (number < 0);
	return number;
}


void readArray(int arr[100], int &length) {

	for (int i = 0; i < length; i++) {
		cout << "Enter Elemnet [" << i + 1 << "]" << endl;
		cin >> arr[i];
	}


}

void printArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << ",";
	}
}

int TimesRepeted(int number,int arr[100],int &length) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == number)
			counter++;
	}
	

	return counter;
}





int main() {
	srand((unsigned)time(NULL));
	int arr[100], length, numbertoCheak;
	cout << "Please enter the length of the array: " << endl;
	cin >> length;

	if (length > 100 || length <= 0)
	{
		cout << "Invalid length. Please enter a number from 1 to 100.";
		return 0;
	}

	readArray(arr, length);

	cout << "Array order:" << endl;
	printArray(arr, length);

	cout << endl;
	cout << "Enter number to check: " << endl;
	cin >> numbertoCheak;

	cout << "It has been repeated: "
		<< TimesRepeted(numbertoCheak, arr, length);

	return 0;
	
}














