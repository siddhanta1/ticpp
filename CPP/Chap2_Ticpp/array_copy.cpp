#include <iostream>
#include <string>

using namespace std;

void printArray(int a[], int size, string name) {
	cout << "Array " << name << ": ";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";

	cout << endl;
}

int main() {

	const int array_size = 10;
	int a[array_size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[array_size] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	printArray(a, array_size, "a");
	printArray(b, array_size, "b");
	copy(a + 1, a + 6, b);  //copy(element from where you want to start copying
	//,a+(number_of_elments_u_want_to_cpy+1),child array name and position)
	printArray(a, array_size, "new a");
	printArray(b, array_size, "new b");

	return 0;
}