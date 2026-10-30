#include <iostream>
#include <string>
using namespace std;
// Problem (5)

int ReadNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

void printBackWards(int num) {
	string s = to_string(num);
	
		for (int i = s.length()-1; i >= 0; i--) {
			cout << s[i] << endl;



		}
	


}






int main(){
	printBackWards(ReadNumber("please Enter  a number"));
	 return 0;
	}












