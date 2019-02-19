#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
void ltofvector()
{
	fstream f;
	vector<string>v;
	string s;
	//unsigned int i;
	int count = 0;
	string filename = "file2.txt";

	f.open(filename.c_str(), ios::in);
	char key;
	while (getline(f, s))
	{
		cout << s << "\n";
		cout << "Press y or n If you want continue ";
		cin >> key;
		if (key == 'y') continue;
		else break;

		
	}
	f.close();
	}
int main()
{
	ltofvector();
	return 0;
}