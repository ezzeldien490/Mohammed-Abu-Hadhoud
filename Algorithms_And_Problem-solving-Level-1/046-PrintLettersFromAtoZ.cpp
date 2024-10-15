#include <iostream>

using namespace std;

void PrintUpperCaseLetters()
{
    for(int i = 65; i <= 90; i++)
    {
        cout << char(i);
    }
}

int main()
{
    PrintUpperCaseLetters();

    return 0;
}