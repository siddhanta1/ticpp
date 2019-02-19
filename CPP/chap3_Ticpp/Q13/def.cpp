#include<iostream>
#include "video.h"
#include<string>
using namespace std;
void vid::setid(int x)
{
	id = x;
}
int vid::getid()
{
	cout << "id is" << id;
	return 0;
}
void vid::setlength(int x)
{
	length = x;
}
int vid::getlength()
{
	cout << "length is" << length<<"minute";
	return 0;
}
void vid::setname(string n)
{
	name = n;
}
string vid::getname()
{
	cout << "name is" << name;
	return 0;
}
