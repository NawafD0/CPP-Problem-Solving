#include <iostream>
#include <string>
using namespace std;
// Problem (14)
int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num<0);

	return  num;

}
void printInvertedLetters(int number) {
	cout << "*******************" << endl;
		
	
	for (int i = 64+number; i>=65; i--) {

		for (int j = i; j >= 65; j--) {
			cout << char(i);
		}


		cout << endl;
	}



}




int main(){
	printInvertedLetters(ReadNumber("Please Enter a number"));
	 return 0;
	}












