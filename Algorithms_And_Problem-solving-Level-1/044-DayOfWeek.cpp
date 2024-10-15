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
    else
    {
        switch (Day)
        {
        case 1:
            cout << "Its Sunday";
            break;
        case 2:
            cout << "Its Monday";
            break;
        case 3:
            cout << "Its Tuesday";
            break;
        case 4:
            cout << "Its Wednesday";
            break;
        case 5:
            cout << "Its Thursday";
            break;
        case 6:
            cout << "Its Friday";
            break;
        default:
            cout << "Its Saturday";
            break;
        }

    }
    
}

int main()
{
    unsigned short Day;

    ReadDay(Day);
    cout << WhatIsDay(Day);
    return 0;
}