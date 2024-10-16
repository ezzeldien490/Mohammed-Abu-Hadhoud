#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(int &Number)
{
    cout << "Enter the postive number you want to check of primality?\n";
    cin >> Number; cout << endl; 
}

string CheckNumberPrimality(int Number)
{
    if (Number <= 2)
    {
        return "[Prime].";
    }
    
    int MedOfNumber = round(Number / 2);

    for(int Counter = 2; Counter <= MedOfNumber; Counter++)
    {
        if (Number % Counter == 0)
            {
                return "[Not Prime].";
            }

    }

    return "[Prime].";
}

int main()
{
    int Number;

    ReadNumber(Number);
    cout << CheckNumberPrimality(Number);

    return 0;
}