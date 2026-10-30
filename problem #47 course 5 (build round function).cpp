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
int myAbs(int number) {
	if (number < 0)
		return number * -1;
	return number;
}
int MyRound(float number) {  
	float x = number * 10.0;   
	int Reminder = (int)x % 10;

	if (myAbs(Reminder) >= 5) {
		if (number < 0) {
			number = -1 * (myAbs(number) + 1);
			return (int)number;
		}
		else
			return (int)number + 1;
		
	}
	else
	{
		return (int)number;
	}
}


int main() {
	srand((unsigned)time(NULL));
	float inNumber= ReadNumber("Please Enter a number: ");
	cout << "Using my round : " << MyRound(inNumber)<<endl;
	cout << "using round function: "<<round(inNumber);
	}














