#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 41



int ReadPositveNumber(string message) {
	int Inputs;
	cout << message << endl;
	cin >> Inputs;
	return Inputs;

}
void FillElementsOfArray(int arr[100], int &length) {
	length = ReadPositveNumber("Please Enter how many inputs: ");
	for (int i = 0; i < length; i++) {
		arr[i] = ReadPositveNumber("Please Enter  ["+to_string(i+1)+"] : ");

	}
	
}
void DisplayArray(int arr[100], int length) {
	
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}



bool cheakPalindrome(int arr[100], int length) {

	for (int i = 0; i <= length; i++) {
		if (arr[i] != arr[length - 1 - i]) {
			return false;
		}

	}
	return true;

}



int main() {
	srand((unsigned)time(NULL));

	int Arr1[100], Length1;
	int Arr2[100], Length2 = 0;
	FillElementsOfArray(Arr1, Length1);
	cout << "Array1: \n";
	DisplayArray(Arr1, Length1);

	if (cheakPalindrome(Arr1, Length1)) 
		cout << "Yes it is palindrome" << endl;
	else
		cout << "It isn't Palindrome " << endl;
	}














