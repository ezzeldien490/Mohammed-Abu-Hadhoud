#include <iostream>

using namespace std;

int main()
{
    for (short i = 1; i <= 10; i++)
    {
        for (short j = i; j <= 10; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}