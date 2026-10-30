#include <iostream>
#include <string>
using namespace std;
//problem 17

string readPassword(string message) {
	string password;
	cout << message << endl;
	cin >> password;
	return password;
}
bool cheakPassword(string password, string Tpassword) {
	return password == Tpassword;

}
void FindPassword(string password) {
	string tPasword="";
	int counter=1;
	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int k = 65; k <= 90; k++) {
				tPasword += char(i);
				tPasword += char(j);
				tPasword += char(k);
				bool Cheak = cheakPassword(password, tPasword);
				cout << "Password is " << tPasword << endl;
				if (Cheak) {
					
					cout << "Found after  (" << counter << ") trail(s)" << endl;
					return;
				}
				else {
					counter++;
						tPasword = "";
				}
			}
		}
	}


}






int main() {
	FindPassword(readPassword("Please Enter a password: "));

	return 0;
}












