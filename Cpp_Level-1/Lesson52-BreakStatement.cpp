#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {10, 20, 44, 55, 33, 22, 99, 100};
    int SearchFor = 20;
    for (short i = 0; i < 10; i++)
    {
        if (arr[i] == SearchFor)
        {
            cout << "arr[" << i << "] = " << arr[i] << endl;
            break;
        }
    }
    return 0;
}