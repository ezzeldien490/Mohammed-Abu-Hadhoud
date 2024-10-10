#include <iostream>
using namespace std;

int main()
{
	short NumA, NumB;

	cout << "Please enter the firtst Number A?\n";
	cin >> NumA; cout << endl;

	cout << "Please enter the second Number B?\n";
	cin >> NumB; cout << endl << endl;


	cout << NumA << " + " << NumB << " = " << NumA + NumB << endl;
	cout << NumA << " - " << NumB << " = " << NumA - NumB << endl;
	cout << NumA << " * " << NumB << " = " << NumA * NumB << endl;
	cout << NumA << " / " << NumB << " = " << NumA / NumB << endl;
	cout << NumA << " % " << NumB << " = " << NumA % NumB << endl;

	return 0;
}