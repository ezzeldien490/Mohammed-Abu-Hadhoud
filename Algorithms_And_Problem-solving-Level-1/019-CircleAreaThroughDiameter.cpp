#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short CircleDiameter;

	cout << "Enter circle diameter?\n";
	cin >> CircleDiameter; cout << endl << endl;

	float CircleArea = (3.14 * pow(CircleDiameter, 2)) / 4;
	unsigned short FinalResult = ceil(CircleArea);


	cout << "Circle area = " << CircleArea << endl;
	cout << "Final result = " << FinalResult; 

	return 0;

}
