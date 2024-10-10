#include <iostream>
using namespace std;

int main()
{
	short RectangleLength, RectangleWidth;

	cout << "Enter rectangle length?\n";
	cin >> RectangleLength; cout << endl;

	cout << "Enter rectangle width?\n";
	cin >> RectangleWidth; cout << endl << endl;


	short RectangleArea = RectangleLength * RectangleWidth;
	cout << "Rectangle area is " << RectangleArea << endl;
	
	return 0;


}