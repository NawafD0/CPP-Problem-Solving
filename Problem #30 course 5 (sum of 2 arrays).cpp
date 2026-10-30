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

void ReadArray(int arr[100],int length) {

	
	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);
	}


}
string addWall() {
	return " | ";
}
void PrintArray(int arr[100], int length) {

	for (int i = 0; i < length; i++) {
		cout <<addWall()<< arr[i] <<addWall() ;
	}
	cout << endl;
}


void sumOf2Arrays(int arr1[100], int arr2[100], int length,int arr3[100]) {


	for (int i = 0; i < length; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}



}




int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], arr3[100], length=10;

	ReadArray(arr1,length);
	ReadArray(arr2, length);
	cout << "\nArray 1: " << endl;
	PrintArray(arr1, length);
	cout << "\nArray 2: " << endl;
	PrintArray(arr2, length);
	sumOf2Arrays(arr1, arr2, length, arr3);
	cout << "\nsum of Arrays: " << endl;
	PrintArray(arr3, length);

	return 0;
}














