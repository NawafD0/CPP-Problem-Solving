#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 29



enum enRandom { SmallLetters = 1, CapitalLetters = 2, SpicalCharacter = 3, Digit = 4 };


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

char printRandom(enRandom en) {

	switch (en) {
	case enRandom::SmallLetters:
		return char(printRandomFrom_To(97, 122));
		break;
	case enRandom::CapitalLetters:
		return char(printRandomFrom_To(65, 90));
		break;
	case enRandom::Digit:
		return  char(printRandomFrom_To(48, 57));
		break;
	case enRandom::SpicalCharacter:
		return char(printRandomFrom_To(33, 47));
		break;

	}



}


string generateWord(enRandom en, int length) {
	string word = "";

	for (int i = 0; i < length; i++) {
		word += printRandom(en);
	}
	return word;
}

string keyGenerator() {
	string key = "";
	int counter = 3;
	while (counter > 0) {
		counter--;
		key += generateWord(CapitalLetters, 4) + "-";
	}
	if (counter == 0)
		return key += generateWord(CapitalLetters, 4);


}


void readArray(string arr[100], int &length) {

	for (int i = 0; i < length; i++) {
		arr[i] = keyGenerator();
	}


}

void displayArray(string arr[100], int length) {

	for (int i = 0; i < length; i++) {
		cout <<"Array ["<<i <<"] : " << arr[i] << endl;
	}
}




int main() {
	srand((unsigned)time(NULL));
	string arr[100]; int length = readPositveNumber("Please enter the size of the array: ");
	readArray(arr, length);
	displayArray(arr, length);

	return 0;
}













