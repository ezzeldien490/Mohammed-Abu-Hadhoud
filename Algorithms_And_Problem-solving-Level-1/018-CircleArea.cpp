#include <iostream>
#include <cmath>

using namespace std;

void ReadCircleRadius(unsigned short &CircleRadius)
{
	cout << "Please enter the Circle radius?\n";
	cin >> CircleRadius; cout << endl << endl;
}

float CircleAreaByRadius(unsigned short CircleRadius)
{

	float CircleArea = 3.14 * pow(CircleRadius, 2);
	return CircleArea;

}

void PrintCircleArea(float CircleArea)
{
	cout << "Circle area = " << CircleArea << endl;
}


int main()
{
	unsigned short CircleRadius;
	ReadCircleRadius(CircleRadius);
	PrintCircleArea(CircleAreaByRadius(CircleRadius));

	return 0;
}