
//To enable trigraph in vs for first time goto project->property->c/c++->
//command line->/Zc:trigraphs ->apply->ok

??=include<iostream>
??=include<string>
using namespace std;

int main()
??<
	string s = "hello strings ??/n";
	cout<<s<< endl;
	cout << "welcome trigraphs ??/
		";

	return 0;
 ??>
//Use trigraphs in C source files that use a character set that does not contain convenient graphic representations for some punctuation characters.