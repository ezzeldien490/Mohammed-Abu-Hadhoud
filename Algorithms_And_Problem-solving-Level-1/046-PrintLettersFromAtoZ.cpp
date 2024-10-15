#include <iostream>

using namespace std;

void PrintUpperCaseLetters()
{
    for(int i = 65; i <= 90; i++)
        cout << char(i);
    
}

void PrintLowerCaseLetters()
{
    for(int i = 97; i <= 122; i++)
        cout << char(i);
}

int main()
{
    PrintUpperCaseLetters();
    cout << endl;
    PrintLowerCaseLetters();

    return 0;
}