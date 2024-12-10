#include <iostream>
#include "mylib.h"

using namespace std;

namespace myread
{
    int ReadPositiveNumber(string Message)
    {
        int Number;
        
        do
        {
            cout << Message;
            cin >> Number; cout << endl;

        }while(Number <= 0);

        return Number;
    }

    int ReadNumberInRange(int From, int To)
    {
        int Number;

        do
        {
            cout << "Enter number between " << From << " and " << To << " ?\n";
            cin >> Number; cout << endl;
        }while(Number < From || Number > To);

        return Number;
    }
}
