#include <iostream>
using namespace std;
struct a {
	void add(int ,int);
};

void a::add(int a,int b)
{
	cout << "addition is" << a + b << endl;
}
int main() {
	a add;
	add.add(5, 3);
	return 0;
}