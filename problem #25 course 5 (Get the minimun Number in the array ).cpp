#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 21

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

void readArray(int arr[100], int &length) {

	cout << "Enter length : " << endl;
	cin >> length;

	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);
	}
}

void display(int arr[100], int length) {

	for (int i = 0; i < length; i++) {

		cout << arr[i] << " ";
	}
}
int getMax(int arr[100], int length) {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (max == 0 || max <= arr[i])
			max = arr[i];
	}
	return max;

}
int getMin(int arr[100], int length) {
	int min = 0;
	for (int i = 0; i < length; i++) {
		if (min == 0 || min >= arr[i])
			min = arr[i];

	}
	return min;
}





int main() {
	srand((unsigned)time(NULL));
	int arr[100],  length;
	readArray(arr, length);

	display(arr, length);
	cout << endl;
	cout << endl;

	cout << "Max: " << getMax(arr, length) << endl;
	cout << "Min: " << getMin(arr, length) << endl;
	return 0;
}














