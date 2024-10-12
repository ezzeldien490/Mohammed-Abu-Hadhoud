#include <iostream>
#include <cmath>

using namespace std;

double RectangleArea(short RectangleSide, short RectangleDiagonal)
{

	double RectangleArea = RectangleSide * sqrt(pow(RectangleDiagonal, 2) - pow(RectangleSide, 2));
	return RectangleArea;
}

int main()
{

	short RectangleSide, RectangleDiagonal;

	cout << "Please enter rectangle side value?\n";
	cin >> RectangleSide; cout << endl;

	cout << "Please enter rectangle diagonal value?\n";
	cin >> RectangleDiagonal;  cout << endl << endl;


	cout << RectangleArea(RectangleSide, RectangleDiagonal);

	return 0;


}

