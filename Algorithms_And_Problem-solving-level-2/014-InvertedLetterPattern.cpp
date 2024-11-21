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

void PrintInvertedLetterPattern(short Number)
{
    for (short Counter1 = Number; Counter1 > 0; Counter1--)
    {
        for (int Counter2 = Counter1; Counter2 > 0; Counter2--)
            cout << char(Counter1 + 64);
       
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a positive number?"));

    return 0;
}