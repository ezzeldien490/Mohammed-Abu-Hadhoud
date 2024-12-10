#include <iostream>

using namespace std;


void ReadUntilAgeBetween(short From, short To)
{
   int Age = 0;
   do
   {
       cout << "Enter Age between " << From << " and " << To << " ?\n";
       cin >> Age; cout << endl;

       if (Age < From || Age > To)
        {
            cout << "\t[InVaild Age].";
            cout << endl;
        }
            

   }while (Age < From || Age > To);
    

   cout << "\t[Valid Age].";
}


int main()
{
    ReadUntilAgeBetween(18, 45);
    return 0;
}
