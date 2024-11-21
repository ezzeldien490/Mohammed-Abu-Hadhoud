#include <iostream>

using namespace std;

short ReadPositiveNumber(string Message)
{
    short Number;
    do
    {
        cout << Message << endl;
        cin >> Number; cout << endl;
    }while(Number <= 0);

    return Number;
}

void PrintNumberPattern(short Number)
{
    for (short Counter1 = 1; Counter1 <= Number; Counter1++)
    {
        for (short Counter2 = Counter1; Counter2 > 0; Counter2--)
            cout << Counter1;

        cout << endl;
    }
}

int main()
{
    PrintNumberPattern(ReadPositiveNumber("Enter a Positive Number?"));

    return 0;
}