#include <iostream>

using namespace std;

string ReadName()
{
	string Name;
	cout << "Please enter your name?\n";
	getline(cin, Name); cout << endl;
	return Name;
}

void PrintUserName(string UserName)
{
	cout << "Your name is: " <<  UserName ;
}

int main()
{
	PrintUserName(ReadName());

	return 0;
}
