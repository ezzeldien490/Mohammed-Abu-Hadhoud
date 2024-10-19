#include <iostream>
#include <cstdlib>

using namespace std;

enum enOperationType  {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOperationType ReadOperationType()
{
    char OT = '+';
    cout << "Enter opertion type (+, -, *, /)?\n";
    cin >> OT;

    return (enOperationType) OT;
}

float Calculate(float Number1, float Number2, enOperationType OT)
{
    switch (OT)
    {
    case Add:
        return Number1 + Number2;
    case Subtract:
        return Number1 - Number2;
    case Multiply:
        return Number1 * Number2;
    case Divide:
        return Number1 / Number2;
    
    default:
        cout << "\n Avalible Operarotrs: [+, -, *, /] \n";
        exit(0);
    }
}


void PrintResult(float Result)
{
    cout << "Answer is: " << Result;
}

int main()
{
    float Number1 = ReadNumber("Please enter the first number?");
    float Number2 = ReadNumber("Please entet the second number?");
    PrintResult(Calculate(Number1, Number2, ReadOperationType()));
    return 0;
}