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
void CopyArray(int OriginalArray[100], int OrignalLength, int copiedArray[100], int &copiedLength) {

	for (int i = 0; i < OrignalLength; i++) {
		AddArray(copiedArray, copiedLength, OriginalArray[i]);
	}


}

int main() {
	srand((unsigned)time(NULL));

	int Arr1[100], Length1 = ReadPositveNumber();
	int Arr2[100], Length2 = 0;
	FillElementsOfArray(Arr1, Length1);
	cout << "Array1: \n";
	DisplayArray(Arr1, Length1);
	CopyArray(Arr1, Length1, Arr2, Length2);
	cout << "Array2: \n";
	DisplayArray(Arr2, Length2);
	return 0;
}













