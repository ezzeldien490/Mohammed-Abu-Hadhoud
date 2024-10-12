#include <iostream>
using namespace std;

float RectangleArea(float RectangleLength, float RectangleWidth)
{
	float RectangleArea = RectangleLength * RectangleWidth;
	return RectangleArea;
}
int main()
{
	float RectangleLength, RectangleWidth;

	cout << "Enter rectangle length?\n";
	cin >> RectangleLength; cout << endl;

	cout << "Enter rectangle width?\n";
	cin >> RectangleWidth; cout << endl << endl;



	cout << RectangleArea(RectangleLength, RectangleWidth) << endl;
	
	return 0;


}
