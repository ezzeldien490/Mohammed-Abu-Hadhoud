#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int RNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        RNumber *= 10;
        RNumber += Remainder;
    }

    return RNumber;
}

int main()
{
    cout << "\nReverse is:\n"
         << ReverseNumber(ReadPositiveNumber("Enter a Positive Number?"))
         << endl;

    return 0;
}