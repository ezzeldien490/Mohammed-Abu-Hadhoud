#include <iostream>
#include <cmath>

using namespace std;

float CircleAreaThroughDiameter(short CircleDiameter)
{

	float CircleArea = (3.14 * pow(CircleDiameter, 2)) / 4;
	return CircleArea;
}

int main()
{
	short CircleDiameter;

	cout << "Enter circle diameter?\n";
	cin >> CircleDiameter; cout << endl << endl;
	
	float CircleArea = CircleAreaThroughDiameter(CircleDiameter);
	unsigned short FinalResult = ceil(CircleArea);


	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult; 

	return 0;

}
