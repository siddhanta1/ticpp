#include<iostream>
#include <string>
using namespace std;

typedef struct structure1
	{
		string s1;
		string s2;
		int a;
	};
	
int main()
{
	structure1 str1;
	str1.s1 = "first string";
	str1.s2 = "second string";
	str1.a = 5;
	cout << "before modifying values are" << endl;
	cout << str1.s1 << endl;
	cout << str1.s2 << endl;
	cout << str1.a << endl;
	structure1 *str2 = &str1;
	str2->s1 = "modified first string";
	str2->s2 = "modified second string";
	str2->a = 10;
	cout << "after modifying using pointer values are" << endl;
	cout << str2->s1 << endl;
	cout << str2->s2 << endl;
	cout << str2->a << endl;
	return 0;
}	