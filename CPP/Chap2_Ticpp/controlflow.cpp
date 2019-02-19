#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (true)
	{
		string n;
		cout << "enter what you like to do at your free time such as playing/dancing/reading/watching/coding" << endl;
		cin >> n;
		int choice;
		if (n == "playing")
			choice = 1;
		else if (n == "dancing")
			choice = 2;
		else if (n == "reading")
			choice = 3;
		else if (n == "watching")
			choice = 4;
		else if (n == "coding")
			choice = 5;
		else if (n == "stop")
			choice = 0;

		else

			break;
		switch (choice)
		{
		case 1:
			cout << "You like cricket" << endl;
			break;
		case 2:
			cout << "you like to dance with your head rolling" << endl;
			break;
		case 3:
			cout << "you read novels" << endl;
			break;
		case 4:
			cout << "you watch game of thrones" << endl;
			break;
		case 5:
			cout << "you code in c++" << endl;
			break;
		case 0:
			cout << "you are exhausted now _try later" << endl;
			break;
		default:
			cout << "wrong input" << endl;
			break;
		}

	}

	return 0;
}