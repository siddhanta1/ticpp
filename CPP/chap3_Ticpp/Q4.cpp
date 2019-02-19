#include <iostream>
using namespace std;
struct str1
{
	int a;
};
void m1(str1 *p, int x)
{
	p->a = x;
	cout << "value is" << p->a;
}
int main() {
	str1 s;
	m1(&s,3);
	return 0;
}