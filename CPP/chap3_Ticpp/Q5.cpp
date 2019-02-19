#include <iostream>
using namespace std;
struct str1
{
	int a;
	void m1(int x);
};
void str1::m1(int x)
{
	a = x;
	cout << "value is" << a;
}
int main() {
	str1 s;
	s.m1(3);
	return 0;
}