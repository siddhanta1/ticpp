#include<iostream>
#include <string>
using namespace std;
	enum a { red=5,black,blue,maroon,white,green,yellow };
int main()
{
	int i = red;

	for (;i<yellow; i++);
	{
		cout << i<<endl;
	}
	return 0;
}	