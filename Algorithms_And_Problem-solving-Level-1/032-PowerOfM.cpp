#include <iostream>
#include <cmath>

using namespace std;

struct stPowerOfNumber
{
	float Number;
	unsigned short PowerValue;
};

stPowerOfNumber ReadNumberAndPowerValue()
{
	stPowerOfNumber PowerOfNumber;
	cout << "Please enter the number?\n";
	cin >> PowerOfNumber.Number; cout << endl;

	cout << "Please enter the power value?\n";
	cin >> PowerOfNumber.PowerValue; cout << endl << endl;

	return PowerOfNumber;
}

float PowerOfM(stPowerOfNumber PowerOfNumber)
{
	if (PowerOfNumber.PowerValue == 0)
		return 1;
	float Result = 1;
	for (short Counter = 0; Counter < PowerOfNumber.PowerValue; Counter++)
	{
		 Result *= PowerOfNumber.Number;
	}
	return Result;
}

void PrintResult(stPowerOfNumber PowerOfNumber)
{
	cout << PowerOfNumber.Number << " ** " << PowerOfNumber.PowerValue << " = " << PowerOfM(PowerOfNumber);
}


int main()
{
	PrintResult(ReadNumberAndPowerValue());

	return 0;
}