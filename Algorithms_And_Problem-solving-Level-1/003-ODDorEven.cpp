#include <iostream>

using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    short Number;

    cout << "Please enter a number?\n";
    cin >> Number;
    return Number;
}

enNumberType CheckNumberType(short Number)
{
    if (Number % 2 == 0)
        return Even;
    
    else
        return Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType  == Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";

}


int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}