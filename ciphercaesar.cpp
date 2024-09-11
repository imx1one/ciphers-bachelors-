#include <iostream>
#include <string>
using namespace std;

char encryptch(char ch, int shift) {
	if (isalpha(ch)) {
		bool Isupper = isupper(ch);
		char base = Isupper ? 'A' : 'a';
		return base + (ch - base + shift) % 26;
	}
	else {
		return ch;
	}
}
string caesarcipher(string text, int shift) {
	string res = "";
	for (char ch : text) {
		res += encryptch(ch, shift);
	}
	return res;
}
int main() {
	string text;
	int shift;
	cout << "Enter the text: " << endl;
	getline(cin, text);
	cout << "Enter the shift: "<< endl;
	cin >> shift;
	string encrypttext = caesarcipher(text, shift);
	cout << "Encrypted text: " << encrypttext << endl;
}