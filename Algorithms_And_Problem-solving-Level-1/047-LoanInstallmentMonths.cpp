#include <iostream>
using namespace std;

int main()
{
	float LoanAmount, MonthlyPayment;

	cout << "Please enter the Loan amount?\n";
	cin >> LoanAmount; cout << endl;

	cout << "Please enter the Monthly payment?\n";
	cin >> MonthlyPayment; cout << endl << endl;

	short TotalMonths = LoanAmount / MonthlyPayment;


	cout<<  TotalMonths << " Months";

	return 0;

}