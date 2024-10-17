#include <iostream>
using namespace std;

struct stPiggyBankContent
{
	int Pennies;
	float Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Pleas enter the number of Pennies?\n";
	cin >> PiggyBankContent.Pennies; cout << endl;

	cout << "Please eter the number of Nickels?\n";
	cin >> PiggyBankContent.Nickels; cout << endl;

	cout << "Please enter the number of Dimes?\n";
	cin >> PiggyBankContent.Dimes; cout << endl;

	cout << "Please enter the number of Quarters?\n";
	cin >> PiggyBankContent.Quarters; cout << endl;

	cout << "Please enter the number of Dollars?\n";
	cin >> PiggyBankContent.Dollars; cout << endl << endl;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	return (int) PiggyBankContent.Pennies + (PiggyBankContent.Nickels * 5) + (PiggyBankContent.Dimes * 10) + (PiggyBankContent.Quarters * 25) + (PiggyBankContent.Dollars * 100);
}

void PrintTotalPenniesAndDollars(int TotalPennies)
{
	cout << "Total Pennies = " << TotalPennies << " Pennies." << endl;
	cout << "Total Dollars = " << (float) TotalPennies / 100 << " Dollars.";
}

int main()
{
	PrintTotalPenniesAndDollars(CalculateTotalPennies(ReadPiggyBankContent()));
	return 0;
}