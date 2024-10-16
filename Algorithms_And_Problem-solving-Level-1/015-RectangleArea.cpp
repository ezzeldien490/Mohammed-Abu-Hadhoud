#include <iostream>
using namespace std;

struct stRectangleInfo
{
	float RectangleLength, RectangleWidth;
};

stRectangleInfo ReadRectangleInfo()
{
	stRectangleInfo RectangleInfo;

	cout << "Enter rectangle length?\n";
	cin >> RectangleInfo.RectangleLength; cout << endl;

	cout << "Enter rectangle width?\n";
	cin >> RectangleInfo.RectangleWidth; cout << endl << endl;

	return RectangleInfo;
}

float RectangleArea(stRectangleInfo RectangleInfo)
{
	float RectangleArea = RectangleInfo.RectangleLength *  RectangleInfo.RectangleWidth;
	return RectangleArea;
}

void PrintResult(stRectangleInfo RectangleInfo)
{
	cout << RectangleArea(RectangleInfo);
}

int main()
{
	PrintResult(ReadRectangleInfo());
	
	return 0;
}
