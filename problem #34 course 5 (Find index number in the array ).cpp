#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 29






int readPositveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}


int printRandomFrom_To(int From, int to) {

	return rand() % (to - From + 1) + From;
}

void readArray(int arr[100], int &length) {

	for (int i = 0; i < length; i++) {
		arr[i] = printRandomFrom_To(1, 100);
	}


}

void displayArray(int arr[100], int length) {
	cout << "Array: " << endl;
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int SearchNumber(int arr[100], int length, int numberLookingFor) {
	int index = -1;

	for (int i = 0; i < length; i++) {
		if (numberLookingFor == arr[i]) {
			index = i;
		}
	}
	return index;


}

void DisplayNumber(int numberLookingFor, int arr[100], int length) {

	int index = SearchNumber(arr, length, numberLookingFor);
	cout << "The number you'r looking for is :" << numberLookingFor<<endl;

	if (index == -1) {
		cout << "Sorry! we couldn't find the number your looking for (-" << endl;
	}
	else
	{
		cout << "Number is found at postion: " << index << endl;
		cout << "Number is at order :  " << index + 1 << endl;


	}

	
}




int main() {
	srand((unsigned)time(NULL));
	int arr[100], length = readPositveNumber("please enter how many inputs:");
	readArray(arr, length);
	displayArray(arr, length);
	DisplayNumber(readPositveNumber("Please Enter the number you'r looking for: "),arr,length);
	return 0;
}













