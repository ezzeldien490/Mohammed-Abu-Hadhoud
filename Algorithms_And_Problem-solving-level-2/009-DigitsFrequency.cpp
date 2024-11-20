#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do 
    {
        cout << Message << endl;
        cin >> Number;

    }while(Number <= 0);

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

void PrintDigitFrequency(short DigitForCheck, int DigitFrequency)
{
    cout << "Digit " << DigitForCheck << " Frequency is " << DigitFrequency << " Time(s)." << endl;
}

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int I = 0; I < 10; I++)
    {
        int DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(Number, I);

        if (DigitFrequency > 0)
            PrintDigitFrequency(I, DigitFrequency);

    }

}

int main()
{
    int Number = ReadPositiveNumber("Enter a positive Number?");
    PrintAllDigitsFrequency(Number);

    return 0;
}
