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
	std::vector<float> vc2;
	std::vector<float> vc3;
	vc3.resize(vc1.size());
	cout << "How many Numbers you want to enter : ";
	cin >> sizz;
	cout << "Input Data set1: " << endl;
	for (int i = 0; i < sizz; i++) {//for taking input form the user
		cin >> input;
		vc1.push_back(input);
	}
	cout << "print data of vector : " << endl;
	for (int i = 0; i < sizz; i++) {
		cout << vc1[i] << endl;
	}
	cout << "Input Data set2: " << endl;
	for (int i = 0; i < sizz; i++) {//for taking input form the user
		cin >> input;
		vc2.push_back(input);
	}
	cout << "print data of vector : " << endl;
	for (int i = 0; i < sizz; i++) {
		cout << vc2[i] << endl;
	}
	cout << "before addition vc3 is" << endl;
	for (int i = 0; i < sizz; i++) {
		vc3.push_back(0);
		cout << vc3[i] << endl;
	}
	std::transform(vc1.begin(), vc1.end(), vc2.begin(), vc3.begin(), std::plus<float>());

	cout << "Sum of set1 and set 2 after addition is" << endl;
	for (vector<float>::iterator it = vc3.begin(); it != vc3.end(); ++it)
	{
		cout << ' ' << *it;
		cout << '\n';
	}
}
int main()
{
	ltofvector();
	return 0;
}


