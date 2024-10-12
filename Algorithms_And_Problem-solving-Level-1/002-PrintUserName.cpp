#include <iostream>

using namespace std;

string PrintUserName(string UserName)
{
	cout << UserName;
}

int main()
{
	string UserName;

	cout << "Please enter your name?\n";
	getline(cin, UserName); cout << endl;

	PrintUserName(UserName);

	return 0;
}
