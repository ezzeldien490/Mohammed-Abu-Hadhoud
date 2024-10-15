#include <iostream>

using namespace std;

void ReadNumber(int &Number)
{
    cout << "Please enter a number to sum?\n[To stop enter (-99)]\n";
    cin >> Number; cout << endl;
}

int SumNumbers(int Number)
{
    int Sum = 0;
    while(Number != -99)
    {
        Sum += Number;
        ReadNumber(Number);
    }
    return Sum;
}

int main()
{
    int Number;

    ReadNumber(Number);
    cout << SumNumbers(Number);

    return 0;
}