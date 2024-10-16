#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
	float SquareSide;

	cout << "Please enter square side?\n";
	cin >> SquareSide; cout << endl << endl;

	return SquareSide;
}

float CircleAreaBySquareSide(float SquareSide)
{
	const float PI = 3.141592653589793238;
 	float CircleArea = (PI * pow(SquareSide, 2)) / 4;
	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{
		cout << "Circle area = " << CircleArea <<  endl;
}


int main()
{
	PrintCircleArea(CircleAreaBySquareSide(ReadSquareSide()));
	return 0;
}
