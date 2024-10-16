#include <iostream>
#include <cmath>

using namespace std;

struct stTriangleDimensions
{
	float TriangleSide, TriangleBase;
};

stTriangleDimensions ReadTriangleDimensions()
{
	stTriangleDimensions TriangleDimensions;
	cout << "Enter length of side of triangle?\n";
	cin >> TriangleDimensions.TriangleSide; cout << endl;
	
	cout << "Enter length of base of triangle?\n";
	cin >> TriangleDimensions.TriangleBase; cout << endl << endl;

	return TriangleDimensions;
}

float CircleAreaInscribedInTriangle(stTriangleDimensions TriangleDimensions)
{
	const float PI = 3.141592653589793238;
	float CircleArea = (PI * pow(TriangleDimensions.TriangleBase, 2) * (2 * TriangleDimensions.TriangleSide - TriangleDimensions.TriangleBase)) 
		/ ( 4 * (2 * TriangleDimensions.TriangleSide + TriangleDimensions.TriangleBase));
	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{
	cout << "Circle area = " << CircleArea << endl;
}

int main()
{
	PrintCircleArea(CircleAreaInscribedInTriangle(ReadTriangleDimensions()));
	return 0;
}
