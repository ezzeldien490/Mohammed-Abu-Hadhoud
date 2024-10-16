#include <iostream>
#include <cmath>

using namespace std;

struct stTriangleDimensions
{
	float TriangleSideA, TriangleBase, TriangleSideC;
};

stTriangleDimensions ReadTriangleDimensions()
{
	stTriangleDimensions TriangleDimensions;
	cout << "Please enter triangle side a?\n";
	cin >> TriangleDimensions.TriangleSideA; cout << endl;

	cout << "Please enter triangle base?\n";
	cin >> TriangleDimensions.TriangleBase; cout << endl;

	cout << "Please enter triangle side c?\n";
	cin >> TriangleDimensions.TriangleSideC; cout << endl << endl;

	return TriangleDimensions;
}

float CircleAreaThroughArbitaryTriangle(stTriangleDimensions TriangleDimensions)
{;
	const float PI = 3.141592653589793238;
	float P = (TriangleDimensions.TriangleSideA + TriangleDimensions.TriangleBase + TriangleDimensions.TriangleSideC) / 2;

	float CircleArea = PI * pow((TriangleDimensions.TriangleSideA * TriangleDimensions.TriangleBase * TriangleDimensions.TriangleSideC) 
				/ (4 * sqrt(P * (P - TriangleDimensions.TriangleSideA) 
			* (P - TriangleDimensions.TriangleBase) * (P - TriangleDimensions.TriangleSideC))) ,2);
	
	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{
	cout << "Circle area = " << CircleArea << endl;
}

int main()
{
	PrintCircleArea(CircleAreaThroughArbitaryTriangle(ReadTriangleDimensions()));
	return 0;
}