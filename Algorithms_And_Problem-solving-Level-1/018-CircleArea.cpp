#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	unsigned short CircleRadius;

	cout << "Please enter the Circle radius?\n";
	cin >> CircleRadius; cout << endl << endl;


	float CircleArea = 3.14 * pow(CircleRadius, 2);
	unsigned short FinalResult = ceil(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;

	return 0;
}
