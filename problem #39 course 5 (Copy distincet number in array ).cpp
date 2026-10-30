#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 39


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
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
	
	
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

int findIndexOfNumber(int arr[100], int Length,int value) {
	int index = -1;
	for (int i = 0; i < Length; i++) {
		if (value == arr[i])
			index = i;
	}
	return index;


}

bool isNumberInArray(int arr[100], int length, int number) {

	if (findIndexOfNumber(arr, length, number) == -1)
		return false;
		return true;


}
void CopyArrayOfDistnictNumber(int OrignalArray[100], int OrignalLength, int CopiedArray[100], int& CopiedLength) {

	for (int i = 0; i < OrignalLength; i++) {

		if (!(isNumberInArray(CopiedArray, CopiedLength, OrignalArray[i]))) {
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
	cout << "Array2 for Distnict Numbers: \n";
	CopyArrayOfDistnictNumber(Arr1, Length1, Arr2, Length2);
	DisplayArray(Arr2, Length2);
	return 0;
}













