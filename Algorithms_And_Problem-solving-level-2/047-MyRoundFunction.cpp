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

int MyRound(float Number)
{
	int IntPart = (int)Number;
	float FractionPart = Number - IntPart;
	

	if (abs(FractionPart) >= 0.5)
	{
		if (IntPart > 0)
			return ++IntPart;
		else
			return --IntPart;
	}

	else
		return IntPart;
}


int main()
{
	float Number = ReadNumber("Enter a number to Round it?\n");

	cout << "My Round Result: " << MyRound(Number) << endl;
	cout << "C++ Round Result: " << round(Number) << endl;

	return 0;
}
