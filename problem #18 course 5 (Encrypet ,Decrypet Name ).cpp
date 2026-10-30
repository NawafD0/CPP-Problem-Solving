#include <iostream>
#include <string>
using namespace std;
//problem 17

string readName() {
	string name;
	cout << "Please Enter your name: " << endl;
	getline(cin, name);
	return name;

}
char exeses3(char Letter) {

	return Letter + 3;
}
char dexeses3(char Letter) {
	return Letter - 3;
}
string encrypetName(string name) {
	string EncrypetedName = "";
	char encrypetedLetter;
	for (int i = 0; i < name.length(); i++) {
		encrypetedLetter = exeses3( name[i]);
		EncrypetedName += encrypetedLetter;
	}
	return EncrypetedName;



}
string decriptedName(string encName) {
	string decName = "";
	char decLetter;
	for (int i = 0; i < encName.length(); i++) {
		decLetter = dexeses3(encName[i]);
		decName += decLetter;

	}
	return decName;




}



int main() {
	string name = readName();
	string encName=encrypetName(name);
	string decName = decriptedName(encName);
	cout << "Your Name before encryption : " << name << endl;
	cout << "Your Name after encryption : " <<encName  << endl;
	cout << "Your name after decryption: " << decName << endl;


	return 0;
}












