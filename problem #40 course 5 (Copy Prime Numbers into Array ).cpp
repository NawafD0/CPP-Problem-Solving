#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 39
enum EnPrimeOrNotPrime { prime = 1, notPrime = 2 };

EnPrimeOrNotPrime CheakPrime(int number) {

	for (int i = 2; i < number/2; i++) {
		if (number % i == 0)
			return EnPrimeOrNotPrime::notPrime;
	}
	return EnPrimeOrNotPrime::prime;


}

int GenrateRandomNumber(int From,int To) {
	return rand() % (To - From + 1) + From;
}
int ReadPositveNumber() {
	int Inputs;
	cout << "Please enter how many inputs:\n";
	cin >> Inputs;
	return Inputs;

}
void FillElementsOfArray(int arr[100], int &length) {

	for (int i = 0; i < length; i++) {
		arr[i] = GenrateRandomNumber(1, 100);
	}
}
void DisplayArray(int arr[100], int length) {
	
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void AddArray(int arr[100], int& length,int ValueOfElement) {
		arr[length] = ValueOfElement;
		length++;
}
void CopyPrimeNumbersArray(int OrignalArray[100], int OrignalLength, int CopiedArray[100], int& CopiedLength) {

	for (int i = 0; i < OrignalLength; i++) {
		if (CheakPrime(OrignalArray[i]) == EnPrimeOrNotPrime::prime) {
			AddArray(CopiedArray, CopiedLength, OrignalArray[i]);
		}
	}


}


int main() {
	srand((unsigned)time(NULL));

	int Arr1[100], Length1 = ReadPositveNumber();
	int Arr2[100], Length2 = 0;
	FillElementsOfArray(Arr1, Length1);
	cout << "Array1: \n";
	DisplayArray(Arr1, Length1);
	cout << "Array2 for Prime Numbers: \n";
	CopyPrimeNumbersArray(Arr1, Length1, Arr2, Length2);
	DisplayArray(Arr2, Length2);
	return 0;
}













