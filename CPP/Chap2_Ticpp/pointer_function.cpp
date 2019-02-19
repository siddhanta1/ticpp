#include <iostream>

using namespace std;

int foo(double);

int main() {

	int (*p)(double);
	p = &foo;
	(*p)(2.2);
	return 0;
}
int foo(double a)
{
	cout << "double is" << a;
}