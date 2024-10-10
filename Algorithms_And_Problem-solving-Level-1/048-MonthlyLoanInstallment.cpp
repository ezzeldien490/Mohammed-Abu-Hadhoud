#include <iostream>
using namespace std;

int main()
{
	float LoanAmount;
	short NumberOfMonths;

	cout << "Please enter Loan amount?\n";
	cin >> LoanAmount; cout << endl;

	cout << "Please enter the number of months?\n";
	cin >> NumberOfMonths; cout << endl << endl;

	float MonthlyPayment = LoanAmount / NumberOfMonths;

	cout << MonthlyPayment;

	return 0;

}