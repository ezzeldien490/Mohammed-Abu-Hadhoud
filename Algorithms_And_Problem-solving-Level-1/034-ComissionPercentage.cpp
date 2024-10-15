#include <iostream>

using namespace std;

void ReadTotalSales(float &TotalSales)
{
    cout << "Please enter total sales?\n";
    cin >> TotalSales;  cout << endl;
}

float CommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
    {
        return 0.01 * TotalSales;
    }
    else if (TotalSales >= 500000)
    {
        return 0.02 * TotalSales;
    }
    else if (TotalSales >= 100000)
    {
        return 0.03 * TotalSales;
    }
    else if (TotalSales >= 50000)
    {
        return 0.05 * TotalSales;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float TotalSales;

    ReadTotalSales(TotalSales);
    cout << "Your Commission is: " << CommissionPercentage(TotalSales);

    return 0;

}