
#include <iostream>
#include <cstdlib>

using namespace std;

void ReadMonth(unsigned short &Month)
{
    cout << "Please enter Month number?\n";
    cin >> Month; cout << endl;
}

string WhatIsMonth(unsigned short Month)
{
    if (Month <= 0 || Month > 12)
    {
        cout << "Wrong Month";
        exit(0);
    }
    else
    {  
        switch (Month)
        {
        case 1:
            cout << "Its Jenurary";
            break;
        case 2:
            cout << "Its Febuary";
            break;
        case 3:
            cout << "Its March";
            break;
        case 4:
            cout << "Its April";
            break;
        case 5:
            cout << "Its May";
            break;
        case 6:
            cout << "Its June";
            break;
        case 7:
            cout << "Its July";
            break;
        case 8:
            cout << "Its August";
            break;
        case 9:
            cout << "Its September";
            break;
        case 10:
            cout << "Its October";
            break;
        case 11:
            cout << "Its November";
            break;
        default:
            cout << "Its December";
            break;
        }           
    }
}

int main()
{
    unsigned short Month;

    ReadMonth(Month);
    cout << WhatIsMonth(Month);
    return 0;
}