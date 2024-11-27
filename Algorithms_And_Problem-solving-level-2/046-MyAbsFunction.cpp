#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber(string Message)
{
	int Number;
	cout << Message;
	cin >> Number; cout << endl;

	return Number;
}

int MyAbs(int Number)
{
	if (Number < 0)
		return Number * -1;
}


int main()
{
	int Number = ReadNumber("Enter Negative number?\n");

	cout << "\nMy abs Result : " << MyAbs(Number) << endl;
	cout << "C++ abs Result : " << abs(Number) << endl;

	return 0;
}
