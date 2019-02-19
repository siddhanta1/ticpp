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
	while (getline(f, s))
	{
		v.push_back(s);
	}
	for (auto&a : v)    //instead of this line you can use this line // for (int i=0;i<v.size();i++)
	{
		reverse(begin(a), end(a));
		cout << a;
		//copy(v.begin(), v.end(),ostream_iterator<string>(cout, "\n"));
	}
		f.close();
	}
int main()
{
	ltofvector();
	return 0;
}