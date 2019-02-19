#include<fstream>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{

	fstream f;
	char ch;
	string filename;
	int count = 0;
	filename = "file2.txt";
	f.open(filename.c_str()); 

	while (!f.eof())
	{
		f.get(ch);

		if (ch == ' ')
			count++;
	}
	cout << "\nTotal blank spaces : " << count<<endl;
	return 0;
}