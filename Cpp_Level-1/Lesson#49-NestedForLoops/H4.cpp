#include <iostream>

using namespace std;

int main()
{
    for (short i = 10; i >= 1; i--)
    {
        for (short j = 1; j <= i; j++)
        {
            cout << j << " ";
        }        
        cout << endl;
    }
    return 0;
}