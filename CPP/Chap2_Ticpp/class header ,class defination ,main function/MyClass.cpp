#include "Header.h"
#include<iostream>
#include<string>
using namespace std;
void MyClass::foo()
{
	cout << "Void function is opened"<<endl;
}
char MyClass::crt()
{
	cout << "\n char function must return a char"<<endl<<"\n i will return c in next line"<<endl;
	return 'c';
}
int MyClass::bar()
{
	cout << "\n our lucky integer is 5"<<endl;
	return 5;
}
float MyClass::f()
{
	cout << "\n our lucky float is 9.1" << endl;
	return 9.1;
}
