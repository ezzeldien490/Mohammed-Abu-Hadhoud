#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaThroughSquareSide(unsigned short SquareSide)
{

 	double CircleArea = (3.14 * pow(SquareSide, 2)) / 4;
	return CircleArea;
}
int main()
{
	unsigned short SquareSide;

	cout << "Please enter square side?\n";
	cin >> SquareSide; cout << endl << endl;
	
	double CircleArea = CircleAreaThroughSquareSide(SquareSide);
	unsigned short FinalResult = ceil(CircleArea);

	cout << "Circle area = " << CircleArea <<  endl;
	cout << "Final result = " << FinalResult;

	return 0;
}
