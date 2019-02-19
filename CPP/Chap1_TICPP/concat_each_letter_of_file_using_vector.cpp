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
	while (getline(f, s,' '))
	{
		v.push_back(s);
	}
	for (int i=0;i<v.size();i++)
	{
		cout << v[i];
	}
		f.close();
	}
int main()
{
	ltofvector();
	return 0;
}