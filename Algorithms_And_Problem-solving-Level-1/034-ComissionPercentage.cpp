#include <iostream>

using namespace std;

float ReadTotalSales()
{
    float TotalSales;
    cout << "Please enter total Sales: " << endl;
    cin >> TotalSales; cout << endl;
    return TotalSales;
}

float GetCommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0;
}

float CalculateTotalCommission(float TotalSales)
{
    return GetCommissionPercentage(TotalSales) * TotalSales;
}

void PrintCommission(float TotalSales)
{
    cout << "Your Commission on $" << TotalSales << " is $" << CalculateTotalCommission(TotalSales);
}


int main()
{
    PrintCommission(ReadTotalSales());

    return 0;
}