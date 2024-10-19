
#include <iostream>
#include <cstdlib>

using namespace std;
enum enMonthsOfYear {
    Jenurary = 1, Febuary = 2, March = 3,
    April = 4, May = 5, June = 6,
    July = 7, August = 8, September = 9,
    October = 10, November = 11, December = 12
};

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

enMonthsOfYear ReadMonthOfYear()
{
    return (enMonthsOfYear) ReadNumberBetweenRange("Please enter number of month(1 to 12)?", 1, 12);
}

string WhatIsMonth(enMonthsOfYear Month)
{ 
        switch (Month)
        {
        case Jenurary:
            return "Its Jenurary";
        case Febuary:
            return "Its Febuary";
        case March:
            return "Its March";
        case April:
            return "Its April";
        case May:
            return "Its May";
        case June:
            return "Its June";
        case July:
            return "Its July";
        case August:
            return "Its August";
        case September:
            return "Its September";
        case October:
            return "Its October";
        case November:
            return "Its November";
        defaul:
            return "Its December";
        }           
}

int main()
{
    cout << WhatIsMonth(ReadMonthOfYear());

    return 0;
}