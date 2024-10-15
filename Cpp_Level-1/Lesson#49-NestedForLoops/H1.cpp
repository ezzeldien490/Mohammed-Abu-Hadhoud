#include <iostream>

using namespace std;

int main()
{
    for (short i = 65; i <= 90; i++)
    {
        for (short j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << endl;
        }
    }

    return 0;
}