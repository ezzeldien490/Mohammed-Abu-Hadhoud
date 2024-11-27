#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{	
	float Number;
	cout << "Enter a number?" << endl;
	cin >> Number; cout << endl;

	return Number;
}

int MyFloor(float Number)
{
	int IntPart = (int)Number;
	float FractionPart = Number - IntPart;

	if(FractionPart >= 0)
		return IntPart;
	else
		return --IntPart;
}


int main()
{
	float Number = ReadNumber();

	cout << "My MyFloor Result: " << MyFloor(Number) << endl;
	cout << "C++ floor Result: " << floor(Number) << endl;

	return 0;
}
