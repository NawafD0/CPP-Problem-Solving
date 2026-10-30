#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 46



float ReadNumber(string message) {
	float Inputs;
	cout << message << endl;
	cin >> Inputs;
	return Inputs;

}

int myCeil(float number) {

	if (number < 0) {
		return (int)number;
	}
	else
		return number + 1;

}


int main() {
	srand((unsigned)time(NULL));
	
	float inNumber = ReadNumber("Please Enter a number: ");
	cout << "Using my ceil function: " << myCeil(inNumber) << endl;
	cout << "Using ceil function :" << ceil(inNumber) << endl;

	}


