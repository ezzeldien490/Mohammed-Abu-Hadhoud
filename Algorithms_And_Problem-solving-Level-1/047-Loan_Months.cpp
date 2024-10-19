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

float CalculateTotalMonths(float LoanAmount, float MonthPayment)
{
	return (float) LoanAmount / MonthPayment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount?");
	float MonthlyPayment = ReadPositiveNumber("Please enter the Monthly payment?");

	cout << CalculateTotalMonths(LoanAmount, MonthlyPayment) << " Months";
	return 0;
}