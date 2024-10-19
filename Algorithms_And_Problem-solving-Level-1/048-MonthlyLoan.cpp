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

float CalculateMonthlyPayment(float LoanAmount, float TotalMonths)
{
	return LoanAmount / TotalMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount?");
	float TotalMonths = ReadPositiveNumber("Please enter the Monthly payment?");

	cout << CalculateMonthlyPayment(LoanAmount, TotalMonths) << "$";
	return 0;
}