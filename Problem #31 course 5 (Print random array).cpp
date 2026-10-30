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
		arr[i] = i + 1;
	}


}



void swapNumbers(int& num1, int& num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;


}

void PrintArray(int arr[100], int length) {

	for (int i = 0; i < length; i++) {
		cout << arr[i]<<" ";
	}
}

void RandomizeArray(int arr[100], int length) {


		// Loop through each element of the array.
		// For each iteration, swap two randomly chosen elements.
		for (int i = 0; i < length; i++)
		{
			// RandomNumber(1, arrLength) generates a random number between 1 and arrLength.
			// Subtract 1 to convert it to a valid 0-based index.
			int index1 = Random(1, length)-1;
			int index2 = Random(1, length)-1 ;
			// Swap the elements at the two randomly chosen indices.
			swap(arr[index1], arr[index2]);
		}
	}









int main() {
	srand((unsigned)time(NULL));
	int arr[100], length = ReadPositveNumber("Please enter how  inputs : ");
	ReadArray(arr, length);
	cout << "Before randomize: " << endl;
	PrintArray(arr, length);
	cout << endl;
	cout << "After randomize: " << endl;
	RandomizeArray(arr, length);
	PrintArray(arr, length);



	return 0;
}













