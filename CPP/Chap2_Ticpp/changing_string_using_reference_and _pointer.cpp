#include<iostream>
#include<string>
using namespace std;
void st1(string& s1)
{
	s1 = "String changed using pass by reference";
	cout << s1<<endl;
}
void st2(string* s2)
{
	*s2 = "string changed using pass by pointer";
	cout << *s2<<endl;
}
int main()
{
	string s = "hello strings";
	cout<<s<< endl;
	st1(s);
	st2(&s);

	return 0;
 }