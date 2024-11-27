#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number;
	cout << Message;
	cin >> Number; cout << endl;

	return Number;
}

float MyAbs(float Number)
{
	if (Number < 0)
		return Number * -1;

	return Number;
}


int main()
{
	float Number = ReadNumber("Enter Negative number?\n");

	cout << "\nMy abs Result : " << MyAbs(Number) << endl;
	cout << "C++ abs Result : " << abs(Number) << endl;

	return 0;
}
