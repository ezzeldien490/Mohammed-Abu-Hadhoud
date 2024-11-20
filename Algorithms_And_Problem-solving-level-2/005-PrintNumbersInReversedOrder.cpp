#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

void PrintNumberInReversedOrder(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintNumberInReversedOrder(ReadPositiveNumber("Enter a Positive Number?"));

    return 0;
}