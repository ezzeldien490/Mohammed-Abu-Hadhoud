#include <iostream>
using namespace std;

int main()
{
	short A, B;

	cout << "Please enter the first number A?\n";
	cin >> A; cout << endl;

	cout << "Please enter the second number B?\n";
	cin >> B; cout << endl << endl;

	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B);

	return 0;
}