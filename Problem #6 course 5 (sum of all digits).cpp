#include <iostream>
#include <string>
using namespace std;
// Problem (6)

int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
int sumOfDigits(int num) {
	int sum = 0;
	cout << "******************" << endl;
	while (num > 0)
	{
		sum += num % 10;
		num = num / 10;
		
	}
	return sum;


}






int main(){
	cout<<sumOfDigits(ReadNumber("Please enter a number"));

	 return 0;
	}












