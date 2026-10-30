#include <iostream>
#include <string>
using namespace std;
// Problem (9)
int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num<0);

	return  num;

}

int DigitFrequncy(int EnteredNumber,int digit) {
	int reminder = 0;
	int counter = 0;

	while (EnteredNumber > 0) {

		reminder = EnteredNumber % 10;
		EnteredNumber = EnteredNumber / 10;
		if (digit == reminder)
			counter++;



	}
	return counter;
	

}

void countDigit() {
	int Number = ReadNumber("Please Enter a number :  ");
	int counter = 0;
	for (int i = 0; i <=9; i++) {
		counter = DigitFrequncy(Number, i);
		if (counter > 0) {
			cout << i << " Frequncy is : " << counter<<endl;
		}

	}
	
	




	


}



int main(){
	countDigit();
		
	 return 0;
	}












