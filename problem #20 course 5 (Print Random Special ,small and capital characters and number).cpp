#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//problem 19

enum enRandom { SmallLetters = 1, CapitalLetters = 2,SpicalCharacter=3,Digit=4 };
int printRandomFrom_To(int From ,int To) {

	
	return rand() % (To - From + 1)+From;


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

int main() {
	srand((unsigned)time(NULL));

	
	cout << printRandom(enRandom::SmallLetters) << endl;
	cout << printRandom(enRandom::CapitalLetters) << endl;
	cout << printRandom(enRandom::SpicalCharacter) << endl;
	cout << printRandom(enRandom::Digit) << endl;




	return 0;
}












