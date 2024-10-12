#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaThroughSquareCircumference(unsigned short SquareCircumference)
{

	float CircleArea = pow(SquareCircumference, 2) / (4 * 3.14);
	return CircleArea;
}
int main()
{
	unsigned short SquareCircumference;

	cout << "Enter Square circumference?\n";
	cin >> SquareCircumference; cout << endl << endl;
	
	double CircleArea = CircleAreaThroughSquareCircumference(SquareCircumference);
	unsigned short FinalResult = floor(CircleArea);

	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult;


	return 0;

}
