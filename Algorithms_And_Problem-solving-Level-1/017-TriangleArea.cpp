#include <iostream>
using namespace std;

void ReadTringleBaseAndHigh(short &TriangleBase, short &TriangleHigh)
{
	cout << "Enter triangle base?\n";
	cin >> TriangleBase; cout << endl;

	cout << "Enter triangle high?\n";
	cin >> TriangleHigh; cout << endl << endl;
}

float TriangleAreaByBaseAndHigh(short A, short B)
{
	float TriangleArea =(float) (A / 2) * B;
	return TriangleArea;
}

void PrintTriangleArea(float TriangleArea)
{
	cout << "Triangle area = " << TriangleArea;
}

int main()
{
	short TriangleBase, TriangleHigh;
	ReadTringleBaseAndHigh(TriangleBase, TriangleHigh);
	PrintTriangleArea(TriangleAreaByBaseAndHigh(TriangleBase, TriangleHigh));
	
	return 0;
}