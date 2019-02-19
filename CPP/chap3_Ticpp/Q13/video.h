#ifndef Video_h
#define Video_h
#include <string>
#include<iostream>
using namespace std;
struct vid
{
	int id=3;
	int length=5;
	string name="Batman vs Superman";
	void setid(int id);
	int getid();
	void setlength(int length);
	int getlength();
	void setname(string name);
	string getname();

};
#endif