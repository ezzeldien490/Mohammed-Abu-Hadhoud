#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned short CircleCircumference;

	cout << "Enter circle circumference?\n";
	cin >> CircleCircumference; cout << endl << endl;

	float CircleArea = pow(CircleCircumference, 2) / (4 * 3.14);
	unsigned short FinalResult = floor(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;


	return 0;

}
