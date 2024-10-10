#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	short RectangleSide, RectangleDiagonal;

	cout << "Please enter rectangle side value?\n";
	cin >> RectangleSide; cout << endl;

	cout << "Please enter rectangle diagonal value?\n";
	cin >> RectangleDiagonal;  cout << endl << endl;

	double RectangleArea = RectangleSide * sqrt(pow(RectangleDiagonal, 2) - pow(RectangleSide, 2));

	cout << RectangleArea;

	return 0;


}

