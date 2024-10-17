#include <iostream>

using namespace std;

short ReadPositiveNumber(string Message)
{
    short Number;
    do
    {
        cout << Message << endl;
        cin >> Number; cout << endl;

    } while (Number <= 0);
    
    return Number;
}

int GetFactorial(short Number)
{
    int Factorial = 1;
    for(short Counter = Number; Counter >= 2; Counter--)
    {
        Factorial *= Counter;
    }

    return Factorial;
}

void PrintFactorialOfNumber(short Number)
{
    cout << "Factorial of Number " << Number << " = " << GetFactorial(Number);
}

int main()
{
    PrintFactorialOfNumber(ReadPositiveNumber("Enter a Postive number?"));

    return 0;
}