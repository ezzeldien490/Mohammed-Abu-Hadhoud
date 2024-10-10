#include <iostream>
using namespace std;

int main()
{
	float Pennies, Nickels, Dimes, Quarters, Dollars;

	cout << "Pleas enter the number of Pennies?\n";
	cin >> Pennies; cout << endl;

	cout << "Please eter the number of Nickels?\n";
	cin >> Nickels; cout << endl;

	cout << "Please enter the number of Dimes?\n";
	cin >> Dimes; cout << endl;

	cout << "Please enter the number of Quarters?\n";
	cin >> Quarters; cout << endl;

	cout << "Please enter the number of Dollars?\n";
	cin >> Dollars; cout << endl << endl;
	 
	float TotalPennies = Pennies + (Nickels * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
	float TotalDollars = TotalPennies / 100;

	cout << TotalPennies << " Pennnies" << endl << TotalDollars << " Dollars" << endl;

	return 0;

}