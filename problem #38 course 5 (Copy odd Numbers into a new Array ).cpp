#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 37
int GenrateRandomNumber(int From,int To) {
	return rand() % (To - From + 1) + From;
}
int ReadPositveNumber() {
	int Inputs;
	cout << "\npls enter how many inputs:\n";
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
bool cheakOddNumber(int number) {
	return number % 2 == 1;
}
void copyOddNumberArray(int OriginalArray[100], int OrignalLength, int copiedArray[100], int &copiedLength) {

	for (int i = 0; i < OrignalLength; i++) {
		if (cheakOddNumber(OriginalArray[i])) {
			AddArray(copiedArray, copiedLength, OriginalArray[i]);
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
	cout << "Array2 for odd Numbers: \n";
	copyOddNumberArray(Arr1, Length1, Arr2, Length2);
	DisplayArray(Arr2, Length2);
	return 0;
}













