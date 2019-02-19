#include <iostream>
using namespace std;

void printc(void* vptr, int c, int iz) {
	for (int i = 0; i < c; i++)
	{
		int *ip = static_cast<int*>(vptr);
		*ip = iz;
		cout << *ip;
	}
}

int main() {
	const int size = 4;
	int a[size] = { 0 };
	void *vptr = static_cast<void*>(a);
	printc(vptr, 4, 2);
	return 0;
}