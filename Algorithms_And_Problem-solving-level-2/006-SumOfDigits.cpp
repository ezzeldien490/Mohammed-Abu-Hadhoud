#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int SumOfDigits(int Number)
{
    int Remainder = 0, Sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder;
        Number = Number / 10;
    }
    return Sum;
}

int main()
{
    int Sum = SumOfDigits(ReadPositiveNumber("Enter a Positive Number?"));
    cout << "Sum of Digits = " << Sum << endl;

    return 0;
}