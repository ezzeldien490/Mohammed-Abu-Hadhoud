#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do 
    {   
        cout << Message << endl;
        cin >> Number; cout << endl; 
    }while (Number <= 0);
   
    return Number;
}

float CalculateBillRemainder(float CashPaid, float TotalBill)
{
	return CashPaid - TotalBill;

}

void PrintBillInfo(float CashPaid, float TotalBill, float BillRemainder)
{
	cout << "Total Bill = " << TotalBill << "$" << endl;
	cout << "Total Cash Paid = " << CashPaid << "$" << endl << endl;
	cout << "***************************" << endl;
	cout << "Remainder = " << BillRemainder << "$";
}


int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total bill?");
	float CashPaid = ReadPositiveNumber("Please enter the cash paid?");
	PrintBillInfo(TotalBill, CashPaid, CalculateBillRemainder(CashPaid, TotalBill));
	return 0;
}