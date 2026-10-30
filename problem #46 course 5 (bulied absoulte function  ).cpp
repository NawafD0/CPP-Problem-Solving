#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 46



int ReadNumber(string message) {
	int Inputs;
	cout << message << endl;
	cin >> Inputs;
	return Inputs;

}
int myAbs(int number) {
	int counter = 0;
	if (number >= 0)
		return number;
	else
		return number*-1;


}


int main() {
	srand((unsigned)time(NULL));
	int inNumber = ReadNumber("Please Enter a number :");
	cout << "Myabsoulte : " << myAbs(inNumber)<<endl;
	cout << "Using absoulte function: " << abs(inNumber)<<endl;


	}














