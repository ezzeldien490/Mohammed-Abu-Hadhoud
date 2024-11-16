#include <iostream>
#include <cmath>

using namespace std;

enum enPerfectOrNot {Perfect = 1, NotPerfect = 2};

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

enPerfectOrNot CheckPerfectOrNot(int Number)
{
    int Sum = 0;
    int medOfNumber = round(Number / 2);

    for(int Counter = 1; Counter <= medOfNumber; Counter++)
    {
        if (Number % Counter == 0)
            Sum += Counter;
    }

    if (Number == Sum)
        return Perfect;
    else
        return NotPerfect;

}

void PrintAllPerfectNumbersFrom1ToN(int Number)
{
    cout << "Perfect Numbers from 1 to " << Number << endl << "Are:\n";

    for (int Counter = 1; Counter <= Number; Counter++)
    {
        if (CheckPerfectOrNot(Counter) == Perfect)
            cout << Counter << endl;
    }
}

int main()
{
    PrintAllPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a Positive number to print all perfect number from one to it?"));
    return 0;
}