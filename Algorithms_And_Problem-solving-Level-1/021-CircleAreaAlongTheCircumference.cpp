#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareCircumference()
{
	float SquareCircumference;

	cout << "Enter Square circumference?\n";
	cin >> SquareCircumference; cout << endl << endl;

	return SquareCircumference;
}

double CircleAreaThroughSquareCircumference(float SquareCircumference)
{
	const float PI = 3.141592653589793238;
	float CircleArea = pow(SquareCircumference, 2) / (4 * PI);
	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{
	cout << "Circle area = " << CircleArea << endl;
}


int main()
{
	PrintCircleArea(CircleAreaThroughSquareCircumference(ReadSquareCircumference()));
	return 0;
}
