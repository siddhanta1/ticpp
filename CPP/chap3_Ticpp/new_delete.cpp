#include <iostream>
#include<string>
using namespace std;

int main() {
	int *intptr = new int(1);
	long *longptr = new long(120);
	float *floatptr = new float[100];
	char *charptr = new char[100];
	cout << "addresses"
		<< "\n int pointer\t" << intptr
		<< "\n long pointer\t" << longptr
		<< "\n float pointer\t" << floatptr
		<< "\n char pointer \t" << charptr;
	delete intptr;
	delete longptr;
	delete []floatptr;
	delete []charptr;
	return 0;

}