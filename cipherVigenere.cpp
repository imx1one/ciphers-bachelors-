#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char encryptch(char ch, int keych) {
	if (isalpha(ch)){
		bool isUpper = isupper(ch);
		char base = isUpper ? 'A' : 'a';
		return base + (ch - base + keych - base) % 26;
	}
	else {
		return ch;
	}
}

string cipher(string text, string key) {
	string res = "";
	int keyid = 0;
	for (char ch : text) {
		char keych = toupper(key[keyid]);
		res += encryptch(ch, keych);
		keyid = (keyid + 1) % key.length();
	}
	return res;
}

int main() {
	string text;
	string key;
	cout << "Enter the text: " << endl;
	getline(cin, text);
	cout << "Enter the key: " << endl;
	cin >> key;
	string encrypttext = cipher(text, key);
	cout << "Encrypted text: " << encrypttext << endl;

}