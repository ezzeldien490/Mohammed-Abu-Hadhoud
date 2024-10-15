#include <iostream>
#include <cstdlib>

using namespace std;

void ReadDay(unsigned short &Day)
{
    cout << "Please enter day number?\n";
    cin >> Day; cout << endl;
}

string WhatIsDay(unsigned short Day)
{
    if (Day <= 0 || Day > 7)
    {
        cout << "Wrong Day";
        exit(0);
    }
    else if (Day == 1)
    {
        return "Its Sunday";
    }
    else if (Day == 2)
    {
        return "Its Monday";
    }
    else if (Day == 3)
    {
        return "Its Tuesday";
    }
    else if (Day == 4)
    {
        return "Its Wednesday";
    }
    else if (Day == 5)
    {
        return "Its Thursday";
    }
    else if (Day == 6)
    {
        return "Its Friday";
    }
    else
    {
        return "Its Saturday";
    }
}

int main()
{
    unsigned short Day;

    ReadDay(Day);
    cout << WhatIsDay(Day);
    return 0;
}