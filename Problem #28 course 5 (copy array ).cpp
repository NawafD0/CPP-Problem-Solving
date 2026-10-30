#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 29

int readNumber(string message) {
	int number;
	do
	{
		cout << "Enter a Number: " << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

int Random(int From, int To) {
	return rand() % (From - To + 1) + From;
}

void readArray(int arr[100], int& length) {

	cout << "Enter length : " << endl;
	cin >> length;

	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);
	}
}

void copyArray(int arr[100], int copyArr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		copyArr[i] = arr[i];


}

void displayArray(int arr[100], int length) {

	for (int i = 0; i < length; i++) {

		cout << arr[i] << " ";
	}
}




int main() {
	srand((unsigned)time(NULL));
	int arr[100], length;
	readArray(arr, length);
	displayArray(arr, length);
	int arr2[100];
	copyArray(arr, arr2, length);
	cout << endl;
	displayArray(arr2, length);

	return 0;
}














