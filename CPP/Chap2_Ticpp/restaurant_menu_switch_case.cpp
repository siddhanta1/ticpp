#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (true)
	{
		char n;
		cout << "enter l for leftmenu \n r for right menu \n 1 to quit." << endl;
		cin >> n;
		switch (n)
		{
		case '1':
			cout << "quitiing"<<endl;
			break;
		case 'r':
			cout << "right menu has  a and b .choose one "<<endl;
			char y;
			cin >> y;
			switch (y)
			{
			case 'a':
				cout << "you want a"<<endl;
				break;
			case 'b':
				cout << "you want b"<<endl;
				break;
			default:
				cout << "enter only one of a and b" << endl;
				continue;
			}
		case  'l':
			cout << "left menu has p and q. choose one" << endl;
			char z;
			cin >> z;
			switch (z)
			{
			case 'p':
				cout << "you want p"<<endl;
				break;
			case 'q':
				cout << "you want q" << endl;
				break;
			default:
				cout << "wrong input<<endl" << endl;
				continue;
			}
		default :
		cout << "you didnt enter 1 or l or r" << endl;
		}

	}

	return 0;
}