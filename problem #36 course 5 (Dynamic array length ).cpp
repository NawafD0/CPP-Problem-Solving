#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 36

int read() {
	int number;
	do {
		cout << "Please Enter a number ?" << endl;
		cin >> number;
	} while (number < 0);
	return number;


}
void addArray(int arr[100],  int &length,int value) {

	arr[length] = value;
	length++;
}
void displayArray(int arr[100], int length) {
	string s = "\nElemnets of the array: ";
	cout << "\nLength of Array: " << length;
	for (int i = 0; i < length; i++) {
		s += to_string(arr[i]) + " ";
	}
	cout << s;

}
void readArray(int arr[100]) {
	bool addMore = true;
	int counter = 0;
	int value = 0;
	while (addMore) {
		value = read();
		
		addArray(arr, counter, value);
		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
		cin >> addMore;
	}
	displayArray(arr, counter);

}





int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	readArray(arr);


	return 0;
}













