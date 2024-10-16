#include <iostream>
using namespace std;

enum enAgeStatus {ValidAge = 1, InvalidAge = 0 };
struct stFromToAge
{
    short From, To, Age;
};

void ReadFromAndTo(stFromToAge &FromToAge)
{
   
    cout << "Please enter the minimum and maximum ages for the range?\n [using numbers only].\n";
    cin  >> FromToAge.From;
    cin >> FromToAge.To; cout << endl;

}

void ReadAge(stFromToAge &FromToAge)
{
    cout << "Please enter a Age between " << FromToAge.From << " and " << FromToAge.To << "?" << endl;
    cin >> FromToAge.Age; cout << endl;
}

enAgeStatus CheckAgeValidate(stFromToAge FromToAge)
{
    if(FromToAge.Age >= FromToAge.From && FromToAge.Age <= FromToAge.To)
        return ValidAge;
    else
        return InvalidAge;
}

void  PrintNumber(stFromToAge FromToAge)
{
    while (CheckAgeValidate(FromToAge) == InvalidAge)
    {
        cout << "[Invalid Age].\n";
        ReadAge(FromToAge);
    } 
    
    cout << "[Valid Age].";
}

int main()
{
    stFromToAge FromToAge;

    ReadFromAndTo(FromToAge);
    ReadAge(FromToAge);
    PrintNumber(FromToAge);

    return 0;
}