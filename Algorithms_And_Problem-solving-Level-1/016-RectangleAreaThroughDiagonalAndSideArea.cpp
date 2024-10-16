#include <cmath>
#include <iostream>
using namespace std;

struct stRectangleInfo
{
	short RectangleSide, RectangleDiagonal;
};

stRectangleInfo ReadRectangleInfo()
{
	stRectangleInfo RectangleInfo;

	cout << "Please enter rectangle side value?\n";
	cin >> RectangleInfo.RectangleSide; cout << endl;

	cout << "Please enter rectangle diagonal value?\n";
	cin >> RectangleInfo.RectangleDiagonal;  cout << endl << endl;

	return RectangleInfo;
}

float RectangleAreaBySideAndDiagonal(stRectangleInfo RectangleInfo)
{
	double RectangleArea = RectangleInfo.RectangleSide * sqrt(pow(RectangleInfo.RectangleDiagonal, 2) - pow(RectangleInfo.RectangleSide, 2));
	return RectangleArea;
}

void PrintResult(stRectangleInfo RectangleInfo)
{
	cout << RectangleAreaBySideAndDiagonal(RectangleInfo);
}

int main()
{
	PrintResult(ReadRectangleInfo());
	
	return 0;
}