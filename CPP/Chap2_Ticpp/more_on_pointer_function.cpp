#include <iostream>

using namespace std;
int foo(int i)
{
	cout << "double value is \n"<<i <<endl;
	return 0;

}
float chf(char c)
{
	cout << "character is \n" << c<<endl;
	return 0;
}
int main()
{
	int(*p1)(int);
	p1 = &foo;
	(*p1)(2.2);

	float(*p2)(char);
	p2 = &chf;
	(*p2)('a');
	
}
