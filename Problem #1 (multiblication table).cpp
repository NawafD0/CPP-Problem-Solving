#include <iostream>
#include <string>
using namespace std;
// Problem (1)





void printTableHeader() {
	cout << "\n\t\t\t\t\t Multiblication Table \n\t\n\t";
	for (int i = 1; i <= 10; i++) {
		cout << i << "\t";

	}
	cout << "\n-----------------------------------------------------------------------------------------------" << endl;
}
string wallSperator(int i) {
	if (i < 10)
		return " |";
	else
		return "|";
}
void printMultiblicationTable() {
	printTableHeader();
	for (int i = 1; i <= 10; i++) {
		cout << i << wallSperator(i);
		for (int j = 1; j <= 10; j++) {
			cout << "\t" << i * j;
		}
		cout << endl;
		
	}



}













int main(){
	printMultiblicationTable();
	return 0;
	}












