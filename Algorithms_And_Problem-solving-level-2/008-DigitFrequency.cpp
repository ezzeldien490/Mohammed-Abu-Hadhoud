#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int CountDigitFrequency(int Number, short Digit)
{
    int DigitFrequency = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == Digit)
            DigitFrequency++;

    }
    return DigitFrequency;
}

int main()
{
    int Number = ReadPositiveNumber("Enter a Positive Number?");
    short Digit = ReadPositiveNumber("\nEneter a Digit to git Frequency of it in entered Number?");

    cout << "Digit " << Digit << " Frequency is "
         << CountDigitFrequency(Number, Digit) << " Time(s)."
         << endl;

    return 0;
}