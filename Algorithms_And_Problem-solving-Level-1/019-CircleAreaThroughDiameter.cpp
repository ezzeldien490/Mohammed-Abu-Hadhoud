#include <iostream>
#include <cmath>

using namespace std;

float ReadCircleDiameter()
{
	float CircleDiameter;

	cout << "Enter circle diameter?\n";
	cin >> CircleDiameter; cout << endl << endl;
	return CircleDiameter;
}

float CircleAreaByDiameter(float CircleDiameter)
{
	const float PI = 3.141592653589793238;

	float CircleArea = (PI * pow(CircleDiameter, 2)) / 4;
	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{
	cout << "Circle area = " << CircleArea << endl;
}


int main()
{
	PrintCircleArea(CircleAreaByDiameter(ReadCircleDiameter()));
	return 0;
}
