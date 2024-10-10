#include <iostream> 
using namespace std;

int main()
{
	short Mark1, Mark2, Mark3;

	cout << "Please enter First Mark?\n";
	cin >> Mark1; cout << endl;

	cout << "Please enter second Mark?\n";
	cin >> Mark2; cout << endl;

	cout << "Please enter third Mark?\n";
	cin >> Mark3; cout << endl << endl;

	cout << "Average of 3 Marks is " << (Mark1 + Mark2 + Mark3) / 3 << endl;

	return 0;

}