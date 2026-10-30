#include <iostream>
#include <string>
using namespace std;
// Problem (3)
enum enPerfectOrNot { Perfect = 1,NotPerfect=2 };
int readPosiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
enPerfectOrNot cheakIsPerfect(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			sum += i;
		else
			continue;
	}
	if (sum == n)
		return enPerfectOrNot::Perfect;
	else
		return enPerfectOrNot::NotPerfect;


}

void displayAllPerfectNumbers(int to) {
	cout << "******************" << endl;
	for (int i = 1; i < to; i++) {
		if (cheakIsPerfect(i) == enPerfectOrNot::Perfect)
			cout << i << endl;
	}



}



int main(){
	displayAllPerfectNumbers(readPosiveNumber("Please Ente a positve number!"));
	return 0;
	}












