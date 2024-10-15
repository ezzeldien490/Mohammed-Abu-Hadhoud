#include <iostream>

using namespace std;

void ReadNumber(short &Number)
{
    cout << "Enter a Postive number?\n";
    cin >> Number; cout << endl;
}

void CheckNumberValidate(short &Number)
{
    for (; Number  <= 0;)
    {
        cout << "Positive Number only" << endl;
        ReadNumber(Number);
    }
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

int main()
{
    short Number;

    ReadNumber(Number);
    CheckNumberValidate(Number);
    cout << GetFactorial(Number);

    return 0;
}