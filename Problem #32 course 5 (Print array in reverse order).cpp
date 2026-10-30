#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 29
int ReadPositveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

int Random(int From, int To) {
	return rand() % (To-From + 1) + From;
}

void ReadArray(int arr[100], int length) {


	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);
	}


}

void reverseArray(int arr[100], int reversedArray[100], int length) {

	for (int i = length-1,j=0 ; i >= 0 ; i--,j++) {
		reversedArray[j] = arr[i];
	}


}



void PrintArray(int arr[100], int length) {

	for (int i = 0; i < length; i++) {
		cout <<" | " << arr[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], length = ReadPositveNumber("please enter a positve number: ");
	cout << "Array 1: " << endl;
	ReadArray(arr, length);

	PrintArray(arr, length);
	cout << endl;
	int reverseArr[100];
	reverseArray(arr, reverseArr, length);
	cout << "Array 2: " << endl;
	PrintArray(reverseArr, length);



	return 0;
}













