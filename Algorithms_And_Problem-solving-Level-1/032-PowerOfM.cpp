#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float Number;
	unsigned short PowerValue;

	cout << "Please enter the number?\n";
	cin >> Number; cout << endl;

	cout << "Please enter the power value?\n";
	cin >> PowerValue; cout << endl << endl;

	float Result = pow(Number, PowerValue);

	cout << Result << "  Round : " << round(Result);

	return 0;
}
