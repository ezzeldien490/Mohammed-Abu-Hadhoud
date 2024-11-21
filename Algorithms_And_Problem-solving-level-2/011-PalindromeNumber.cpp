#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number; cout << endl;
    }while(Number <= 0);

    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }

    return ReversedNumber;
}

bool CheckPalindromeOrNot(int Number)
{
    return ReverseNumber(Number) == Number;
}

void PrintPalindromeNumberOrNot(int Number)
{
    if(CheckPalindromeOrNot(Number))
        cout << "\nYes, it is a Palindrome Number.\n";
    else
        cout << "\nNo, it is NOT a Palindrome Number.\n";
}

int main()
{
    PrintPalindromeNumberOrNot(ReadPositiveNumber("Enter a Positive Number?"));

    return 0;
}