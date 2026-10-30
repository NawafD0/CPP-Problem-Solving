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

bool SearchNumber(int arr[100], int &length, int numberLookingFor) {
	

	for (int i = 0; i < length; i++) {

		if (arr[i] == numberLookingFor) {
			return true;
		}
	}
	return false;

}


void DisplayNumber(int arr[100],int length,int numberLookingFor) {
	bool Exist =SearchNumber(arr, length, numberLookingFor);
	if (Exist)
	{
		cout << "The number is founded" << endl;
	}
	else
		cout << "The number is not found! " << endl;
	
}




int main() {
	srand((unsigned)time(NULL));
	int arr[100], length = readPositveNumber("please enter how many inputs:");
	readArray(arr, length);
	displayArray(arr, length);
	int numberYouLookingFor = readPositveNumber("please enter the number your looking for");
	DisplayNumber(arr, length, numberYouLookingFor);
	return 0;
}













