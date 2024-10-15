#include <iostream>

using namespace std;

int main()
{
    for (short i = 65; i <= 70; i++)
    {
        for (short j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
    return 0;
}