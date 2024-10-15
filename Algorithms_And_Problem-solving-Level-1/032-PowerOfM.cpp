#include <iostream>
#include <cmath>

using namespace std;

void ReadInfo(float &Number, unsigned short &PowerValue)
{
	cout << "Please enter the number?\n";
	cin >> Number; cout << endl;

	cout << "Please enter the power value?\n";
	cin >> PowerValue; cout << endl << endl;
}

float PowerOfM(float Number, unsigned short PowerValue)
{
	if (PowerValue == 0)
		return 1;
	float Result = 1;
	for (short Counter = 0; Counter < PowerValue; Counter++)
	{
		 Result*= Number;
	}
	return Result;
}
int main()
{
	float Number;
	unsigned short PowerValue;
	
	ReadInfo(Number, PowerValue);
	cout << PowerOfM(Number, PowerValue);

	return 0;
}
