#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
void ltofvector()
{
	int i = 0;
	vector < float > v(25);
   
	for (; i < v.size(); i++)
	{
	   cin >> v[i];
	   cout << "\n" << "float elements are" << v[i];
	}
}
int main()
{
	ltofvector();
	return 0;
}