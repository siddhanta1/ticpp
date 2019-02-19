#include<iostream>
#include<string>
#include "Header.h"
using namespace std;
int main()
{
	MyClass a;
	a.foo();
	char c=a.crt();
	cout << c;
	int i=a.bar();
	cout << i;
	float fg=a.f();
	cout << fg;
}