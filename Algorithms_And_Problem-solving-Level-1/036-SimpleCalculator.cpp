#include <iostream>
#include <cstdlib>

using namespace std;

struct stEquation
{
    float Number1, Number2;
    char OperationType;
};

void ReadEquation(stEquation &Equation)
{
    cout << "Please enter number 1?\n";
    cin >> Equation.Number1; cout << endl;

    cout << "Please enter number 2?\n";
    cin >> Equation.Number2; cout << endl;

    cout << "Please enter Operation type?\n";
    cin >> Equation.OperationType; cout << endl;
}

float Calculator(stEquation Equation)
{
    switch (Equation.OperationType)
    {
    case '+':
        return Equation.Number1 + Equation.Number2;
        break;
    case '-':
        return Equation.Number1 - Equation.Number2;
        break;
    case '*':
        return Equation.Number1 * Equation.Number2;
        break;
    case '/':
        return Equation.Number1 / Equation.Number2;
        break;
    
    default:
        cout << "Avalible Operarotrs: [+, -, *, /]";
        exit(0);
    }
    
}

int main()
{
    stEquation Equation;

    ReadEquation(Equation);
    cout << Calculator(Equation);

    return 0;
}