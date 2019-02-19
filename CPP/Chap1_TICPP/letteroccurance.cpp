#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
void countoneword()
{
	fstream f;
	string s;
	unsigned int i=0;
	int count=0;
	f.open("file2.txt", ios::in);
	while (getline(f, s))
	{
		for ( ; i < s.length(); i++)
		{
			if (s[i] == 'A')
				count++;
		}
	}
	cout << "a occured " << count << "times in our file" << endl;
	f.close();
}
int main()
{
	countoneword();
	return 0;
}