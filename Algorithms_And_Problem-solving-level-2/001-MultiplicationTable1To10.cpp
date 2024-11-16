#include <iostream>
#include <cmath>

using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\tMultipliacation Table From 1 to 10\n\n";
    cout << "\t";

    for (unsigned short i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << "\n__________________________________________________________________________________\n";
}

string PrintColumSperator(unsigned short i)
{
    if (i < 10)
        return  "   |";
    else
        return  "  |";
}

void PrintMultiplicationTable1To10()
{
    PrintTableHeader();

    for (unsigned short N = 1; N <= 10; N++)
    {
        cout << " " << N << PrintColumSperator(N) << "\t";   
        for (unsigned short Z = 1; Z <= 10; Z++)
        {
            cout << N * Z << "\t";
        }
        cout << endl;
    }
}


int main()
{
    PrintMultiplicationTable1To10();
    return 0;
}