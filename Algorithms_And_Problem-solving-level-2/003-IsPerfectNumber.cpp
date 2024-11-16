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
    int Sum = 1;
    int medOfNumber = round(Number / 2);

    for(int Counter = 2; Counter <= medOfNumber; Counter++)
    {
        if (Number % Counter == 0)
            Sum += Counter;
    }

    if (Number == Sum)
        return Perfect;
    else
        return NotPerfect;

}

void IsTheNumberPerfect(int Number)
{
    if (CheckPerfectOrNot(Number) == Perfect)
        cout << Number << " is Perfect number." << endl;
    else
        cout << Number << " is not Perfect number." << endl;
}


int main()
{
    IsTheNumberPerfect(ReadPositiveNumber("Enter a positive number?"));
    return 0;
}