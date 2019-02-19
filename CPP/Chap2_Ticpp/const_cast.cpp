#include <iostream>
using namespace std;

void printc(double *a, int c, int iz) {
	for (int i = 0; i < c; i++)
	{
		cout << *(a+i)<<" " ;
	}
	cout << endl;
}

int main() {
	const int size = 4;
	const double a[size] = { 0 };
	volatile double b[size] = { 0 };

	printc(const_cast<double*>(a), size, 2);
	printc(const_cast<double*>(b), size, 3);
	cout << "after removing casting" << endl;
	double *modifyingptr = 0;
	for (int i = 0; i < size; i++)
	{
		modifyingptr = const_cast<double*>(a + i);
		*modifyingptr = i * 3;
		modifyingptr = const_cast<double*>(b + i);
		*modifyingptr = i * 5;
	}
	cout << "modified arrays are" << endl;
	printc(const_cast<double*>(a), size, 2);
	printc(const_cast<double*>(b), size, 3);
	return 0;
}