#include <iostream>
using namespace std;

int main()
{
	float BillValue;

	cout << "Please enter bill value?\n";
	cin >> BillValue; cout << endl << endl;

	float BillValueWithServiceFees = BillValue * 1.1,
		TotalBill = BillValueWithServiceFees * 1.16;

	cout << TotalBill << endl;

	return 0;

}