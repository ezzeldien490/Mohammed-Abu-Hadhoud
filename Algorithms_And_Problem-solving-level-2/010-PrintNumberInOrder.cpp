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

void PrintNumberInOrder(int Number)
{
    int RNumber = ReverseNumber(Number);
    int Remainder = 0;
    while (RNumber > 0)
    {
        Remainder = RNumber % 10;
        RNumber /= 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintNumberInOrder(ReadPositiveNumber("Enter a positive number?"));

    return 0;
}