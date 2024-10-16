#include <iostream>
using namespace std;

void ReadFromAndTo(short &From, short &To)
{
    cout << "Please enter the minimum and maximum ages for the range?\n [using numbers only].\n";
    cin  >> From;
    cin >> To; cout << endl;
}

void  PrintNumberBetween(short From, short To)
{
    short Age;

    cout << "Please enter a Age between " << From << " and " << To << "?" << endl;
    cin >> Age; cout << endl;

    while (Age < From || Age > To)
    {
        cout << "[Invalid Age].\n";
        cout << "Please enter a Age between " << From << " and " << To << "?"  << endl;
        cin >> Age; cout << endl;

    } 
    
    cout << "[Valid Age].";

}

int main()
{
    short From, To;

    ReadFromAndTo(From, To);
    PrintNumberBetween(From, To);
    return 0;
}