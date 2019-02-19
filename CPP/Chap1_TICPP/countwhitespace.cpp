#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	int count = 0;
	fstream file;
	string intermediate;
	file.open("file2.txt", ios::in);
	while (getline(file, intermediate))
	{
		for (int i = 0; i < intermediate.length(); i++)
		{
			if (intermediate[i] ==' ' || intermediate[i] == '\t')
				count++;
		}
	}
	
	cout << count << endl;
	file.close();
	return 0;
}