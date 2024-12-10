#include <iostream>
#include <cmath>
#include "E:\Mohammed-Abu-Hadhoud\MyLibrary\mylib.h"

using namespace std;

enum enPrimeOrNotPrime {Prime = 1, NotPrime = 2};


enPrimeOrNotPrime CheckNumberPrimality(int Number)
{
    int MedOfNumber = round(Number / 2);

    for(int Counter = 2; Counter <= MedOfNumber; Counter++)
    {
        if (Number % Counter == 0)
            {
                return NotPrime;
            }

    }

    return Prime;
}

void PrintPrimeOrNot(int Number)
{
    switch (CheckNumberPrimality(Number))
    {
    case Prime:
        cout << "Number is Prime";
        break;
    case NotPrime:
        cout << "Number is not Prime";
        break;
    }
}


int main()
{
    PrintPrimeOrNot(myread::ReadPositiveNumber("Enter the postive number you want to check of primality? "));
    return 0;
}
