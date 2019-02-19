#include <iostream>
using namespace std;

void func() {
	//static
	int i = 0; //If i is not static its value will change only once when 
	//compiler reaches func() again i would be assigned to 0 and increasing 1 
	//it will print 1 ,10 times
	//if we use static i will be a global variable its value will be changed
	//it will print from 1 to 10
	cout << "i = " << ++i << endl;
}

int main() {
	for (int x = 0; x < 10; x++)
		func();
}