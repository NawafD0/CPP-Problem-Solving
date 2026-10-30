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

int Random(int From,int To) {
	return rand() % (To - From + 1) + From;
}

void FillElementsOfArray(int arr[100], int &length) {
	length = ReadPositveNumber("Please Enter how many inputs: ");
	for (int i = 0; i < length; i++) {
		arr[i] = Random(1, 100);

	}
	
}

void DisplayArray(int arr[100], int length) {
	
	for (int i = 0; i < length; i++) {
		cout<<arr[i] << " ";
	}
	cout << endl;
}
bool cheakEvenNumber(int number) {
	return number % 2 == 0;
}
int countEvenNumber(int arr[100],int length) {
	int counter = 0;

	for (int i = 0; i < length; i++) {
		if (cheakEvenNumber(arr[i]))
			counter++;
	}

	return counter;
}





int main() {
	srand((unsigned)time(NULL));
	int arr[100], length;
	FillElementsOfArray(arr, length);
	cout << "Array: " << endl;
	DisplayArray(arr, length);
	cout << endl;
	cout<<"even Numbers in the array: "<< countEvenNumber(arr, length);


	}














