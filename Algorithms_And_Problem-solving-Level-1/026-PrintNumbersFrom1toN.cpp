#include <iostream>

using namespace std;

void ReadN(unsigned short &N)
{
    cout << "Enter the Number you want to print numbers from 1 to this number?\n";
    cin >> N; cout << endl;

}

void PrintNumbers(unsigned short N)
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
    unsigned short N;
    ReadN(N);
    PrintNumbers(N);
    
    return 0;
}