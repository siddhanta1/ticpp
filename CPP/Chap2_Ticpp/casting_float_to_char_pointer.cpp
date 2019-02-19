#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
	for (int i = 0; i <=sizeof(val); i++)
		if (val & (1 << i))
			cout << "1";
		else
			cout << "0";
}

int main() {
	float f=2.2;
	unsigned char *p = reinterpret_cast<unsigned char*>(&f);
	for (int i =0; i <sizeof(f); i +=2) {
		printBinary(p[i - 1]);
		printBinary(p[i]);
	}
	cout << endl;
	return 0;
}