#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeOrNot {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number; cout << endl;
    } while (Number <= 0);
    
    return Number;
}

enPrimeOrNot CheckPrimeOrNot(int Number)
{
    int Counter = 2;
    int MedOfNumber = round(Number / 2);

        while (Counter <= MedOfNumber)
        {
            if (Number % Counter == 0)
                return NotPrime;

            Counter++;
        }
        return Prime;
}

void PrintAllPrimeNumbersFrom1ToN()
{
    int N = ReadPositiveNumber("Enter Positive Number To Print Prime Numbers to it?");

    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckPrimeOrNot(Counter) == Prime)
            cout << Counter << endl;
    }
}

int main()
{
    PrintAllPrimeNumbersFrom1ToN();
    return 0;
}