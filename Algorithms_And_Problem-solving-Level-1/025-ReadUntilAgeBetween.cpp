#include <iostream>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "Please enter age between 18 and 45: ";
    cin >> Age; cout << endl;

    return Age;
}

bool ValidateNumberInRange(short Age, short From, short To)
{
    return (Age >= From && Age <= To);
}

short ReadAgeUntilAgeBetween(short From, short To)
{
   short Age = ReadAge();

   while (!ValidateNumberInRange(Age, From, To))
   {
        cout << " [Invalid Age].\n";
        Age = ReadAge();
   }

   return Age;
}

void PrintResult(short Age)
{
    cout << "   [Valid Age].";
}

int main()
{
    PrintResult(ReadAgeUntilAgeBetween(18, 45));
    return 0;
}