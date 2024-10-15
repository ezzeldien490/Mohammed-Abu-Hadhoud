
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
    else if (Month == 1)
    {
        return "Its January";
    }
    else if (Month == 2)
    {
        return "Its February";
    }
    else if (Month == 3)
    {
        return "Its March";
    }
    else if (Month == 4)
    {
        return "Its April";
    }
    else if (Month == 5)
    {
        return "Its May";
    }
    else if (Month == 6)
    {
        return "Its June";
    }
    else if (Month == 7)
    {
        return "Its July";
    }
    else if (Month == 8)
    {
        return "Its August";
    }
    else if (Month == 9)
    {
        return "Its Seprember";
    }
    else if (Month == 10)
    {
        return "Its October";
    }
    else if (Month == 11)
    {
        return "Its November";
    }
    else
    {
        return "Its December";
    }
}

int main()
{
    unsigned short Month;

    ReadMonth(Month);
    cout << WhatIsMonth(Month);
    return 0;
}