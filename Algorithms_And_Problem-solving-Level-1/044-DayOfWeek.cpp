#include <iostream>
#include <cstdlib>

using namespace std;

enum enDaysOfWeek {Sun = 1, Mon = 2, Tues = 3, Wednes = 4, Thurs = 5, Fri = 6, Satur = 7};

int ReadNumberBetweenRange(string Message, int From, int To)
{
    int Number;
    do 
    {   
        cout << Message << endl;
        cin >> Number; cout << endl; 
    }while (Number < From || Number > To);
 
    return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
    return (enDaysOfWeek) ReadNumberBetweenRange("Please enter the number of day(Sun = 1, Mon = 2, Tues = 3, Wednes = 4, Thurs = 5, Fri = 6, Satur = 7)?", 1, 7);
}

string WhatIsDay(enDaysOfWeek Day)
{
    
        switch (Day)
        {
        case Sun:
            return "Its Sunday";
        case Mon:
            return "Its Monday";
        case Tues:
            return "Its Tuesday";
        case Wednes:
            return "Its Wednesday";
        case Thurs:
            return "Its Thursday";
        case Fri:
            return "Its Friday";
        defaul:
            return "Its Saturday";
        }
    
}


int main()
{
    cout << WhatIsDay(ReadDayOfWeek());
    return 0;
}