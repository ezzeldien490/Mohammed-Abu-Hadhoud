#include <iostream>
#include <cmath>

using namespace std;

float fnCircleArea(unsigned short CircleRadius)
{

	float CircleArea = 3.14 * pow(CircleRadius, 2);
	return CircleArea;

}

int main()
{
	unsigned short CircleRadius;

	cout << "Please enter the Circle radius?\n";
	cin >> CircleRadius; cout << endl << endl;

	float CircleArea = fnCircleArea(CircleRadius);
	unsigned short FinalResult = ceil(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;

	return 0;
}
