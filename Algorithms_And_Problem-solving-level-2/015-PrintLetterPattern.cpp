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

void PrintLetterPattern(short Number)
{
    for (short i = 65; i <= 64 + Number; i++)
    {
        for (short j = i; j > 64; j--)
            cout << char(i);
        
        cout << endl;
    }   
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Enter a Positive Number?"));

    return 0;
}