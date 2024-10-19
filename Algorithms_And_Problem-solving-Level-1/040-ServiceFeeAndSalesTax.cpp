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


float CalculateTotalBillAfterServiceAndTax(float BillValue)
{
		float BillValueWithServiceFees = BillValue * 1.1;
		return BillValueWithServiceFees * 1.16;
}

void PrintTotalBill(float BillValue)
{
	cout << "Total Bill = " <<  BillValue << "$" << endl;
	cout << "Total Bill After Service fees and Sales tax = " << CalculateTotalBillAfterServiceAndTax(BillValue) << "$";
}


int main()
{
	PrintTotalBill(ReadPositiveNumber("Please enter the Bill Value?"));
	return 0;

}