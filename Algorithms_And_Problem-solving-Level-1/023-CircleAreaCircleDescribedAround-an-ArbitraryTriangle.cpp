#include <iostream>
#include <cmath>

using namespace std;

float CircleAreaThroughArbitaryTriangle(unsigned short TriangleSideA, unsigned short TriangleBase, unsigned short TriangleSideC)
{

	float P = (TriangleSideA + TriangleBase + TriangleSideC) / 2;

	float CircleArea = 3.14 * pow((TriangleSideA * TriangleBase * TriangleSideC) 
				/ (4 * sqrt(P * (P - TriangleSideA) 
			* (P - TriangleBase) * (P - TriangleSideC))) ,2);
	
	return CircleArea;
}

int main()
{
	unsigned short TriangleSideA, TriangleBase, TriangleSideC;

	cout << "Please enter triangle side a?\n";
	cin >> TriangleSideA; cout << endl;

	cout << "Please enter triangle base?\n";
	cin >> TriangleBase; cout << endl;

	cout << "Please enter triangle side c?\n";
	cin >> TriangleSideC; cout << endl << endl;

	float CircleArea = CircleAreaThroughArbitaryTriangle(TriangleSideA, TriangleBase, TriangleSideC);
	unsigned short FinalResult = round(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;

	return 0;
}
