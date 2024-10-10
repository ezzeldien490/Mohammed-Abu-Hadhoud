#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short TriangleSide, TriangleBase;

	cout << "Enter length of side of triangle?\n";
	cin >> TriangleSide; cout << endl;
	
	cout << "Enter length of base of triangle?\n";
	cin >> TriangleBase; cout << endl << endl;

	float CircleArea = (3.14 * pow(TriangleBase, 2) * (2 * TriangleSide - TriangleBase)) / ( 4 * (2 * TriangleSide + TriangleBase));

	unsigned short FinalResult = floor(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;
	

	return 0;



}
