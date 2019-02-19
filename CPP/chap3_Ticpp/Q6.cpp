#include <iostream>
using namespace std;
class c1
{private:
	int a;
public:
	void m1(int x);
};
void c1::m1(int x)
{
	a = x;
	cout << "value is" << a;
}
int main() {
	c1 obj;
	obj.m1(5);
	return 0;
}