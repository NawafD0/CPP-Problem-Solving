#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 29

enum enPrime { prime = 1, isNotPrime = 2 };

enPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrime::isNotPrime;
	}
	return enPrime::prime;
}

int Random(int From, int To) {
	return rand() % (From - To + 1) + From;
}

void ReadArray(int arr[100], int& length) {

	cout << "Enter the length of the array: " << endl;
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);
	}


}

void PrintArray(int arr[100], int length) {

	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CopyPrimeNumbersArray(int arr[100], int length, int arr2[100], int &Copylength) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (CheckPrime(arr[i]) == enPrime::prime) {
			arr2[counter++] = arr[i];
		}

	}
	Copylength = --counter;

}



int main() {
	srand((unsigned)time(NULL));
	int arr[100], length;
	ReadArray(arr, length);
	int arr2[100],  length2 = 0;
	CopyPrimeNumbersArray(arr, length, arr2, length2);
	PrintArray(arr, length);
	cout << endl << "prime numbers: " << endl;
	PrintArray(arr2, length2);



	return 0;
}














