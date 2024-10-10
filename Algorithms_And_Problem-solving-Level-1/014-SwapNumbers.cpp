#include <iostream>
using namespace std;

int main()
{
	short Number1, Number2;

	cout << "Please enter first Number?\n";
	cin >> Number1; cout << endl;

	cout << "Please enter second Number?\n";
	cin >> Number2; cout << endl << endl;

	cout << Number1 << endl << Number2;
	cout << endl << endl;

	short Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;

	cout << Number1 << endl << Number2 << endl;

	return 0;
}