#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class EncryptData {
private:
	int a, b;
public:
	int g, p;
	int geta() { return a; }
	int getb() { return b; }
	EncryptData(int a, int b, int g, int p) {this->a = a; this->b = b; this->g = g; this->p = p;}
	int A() {
		int biga = static_cast<int>(pow(g, geta())) % p;
		return biga;

		
	}
	int B() {
		int bigb = static_cast<int>(pow(g, getb())) % p;
		return bigb;
	}
	int s1() {
		int s1 = static_cast<int>(pow(B(), geta())) % p;
		return s1;
	}
	int s2() {
		int s2 = static_cast<int>(pow(A(), getb())) % p;
		return s2;
	}
};
int main() {
	EncryptData Data(6, 9, 5, 23);
	Data.A();
	Data.B();
	Data.s1();
	Data.s2();
}