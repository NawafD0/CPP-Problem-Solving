#include <iostream>
#include <string>
using namespace std;
// Problem (1)
enum enPrime { prime = 1, isNotPrime = 2 };
int readNum(string message) {
	int number;
	do {
		cout << message;
		cin >> number;
	} while (number<=0);
	return number;
}

enPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrime::isNotPrime;
	}
	return enPrime::prime;
}

string PrintNumberType(enPrime en) {

	if (enPrime::prime==en)
		return "Prime";
	
	return "Not Prime";

}

void display(int num) {
	
	for (int i = 1; i <= num; i++) {
		if (PrintNumberType(CheckPrime(i)) == "Prime")
			cout << i << endl;
	}


}


int main(){
	display(readNum("Please Enter a number "));
	return 0;
	}























