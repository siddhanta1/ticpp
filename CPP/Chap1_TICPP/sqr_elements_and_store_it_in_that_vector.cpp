#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
void ltofvector()
{
	int sizz; float input;
	std::vector<float> vc1;
	cout << "How many Numbers you want to enter : ";
	cin >> sizz;
	cout << "Input Data set1: " << endl;
	for (int i = 0; i < sizz; i++) {
		cin >> input;
		vc1.push_back(input);
	}
	cout << "print data of vector before squaring: " << endl;
	for (int i = 0; i < sizz; i++) {
		cout << vc1[i] << endl;
	}


	std::transform(vc1.begin(), vc1.end(), vc1.begin(), vc1.begin(), std::multiplies<float>());
	cout << "print data of vector after squaring: " << endl;
	for (int i = 0; i < sizz; i++) {
		cout << vc1[i] << endl;
	}
}
int main()
{
	ltofvector();

	return 0;
}

