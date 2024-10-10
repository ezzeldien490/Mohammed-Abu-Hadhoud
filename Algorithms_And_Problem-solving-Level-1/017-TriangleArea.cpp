#include <iostream>
using namespace std;

int main()
{
	short TriangleBase, TriangleHigh;

	cout << "Enter triangle base?\n";
	cin >> TriangleBase; cout << endl;

	cout << "Enter triangle high?\n";
	cin >> TriangleHigh; cout << endl << endl;


	short TriangleArea = (TriangleBase / 2) * TriangleHigh;
	cout << "Triangle area is " << TriangleArea << endl;

	return 0;


}