#include <iostream>

using namespace std;

short ReadN()
{
    short N;
    cout << "Enter the Number you want to print numbers from 1 to this number?\n";
    cin >> N; cout << endl;

    return N;
}

void PrintNumbers(short N)
{
    short Counter = 1;
    while (Counter <= N)
    {
        cout << Counter << endl;
        Counter++;
    }
}

int main()
{  
    PrintNumbers(ReadN());
    
    return 0;
}