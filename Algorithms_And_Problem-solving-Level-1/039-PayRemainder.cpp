#include <iostream>
using namespace std;

int main()
{
	float TotalBill, CashPaid;

	cout << "Enter value of total bill?\n";
	cin >> TotalBill; cout << endl;

	cout << "Enter value of Cash paid?\n";
	cin >> CashPaid; cout << endl << endl;

	float Remainder = CashPaid - TotalBill;

	cout << Remainder << endl;

	return 0;
}