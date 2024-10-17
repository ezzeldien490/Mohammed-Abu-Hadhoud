#include <iostream>

using namespace std;

short ReadN()
{
    short N;
    cout << "Enter the Number you want to print numbers from this number down to number 1?\n";
    cin >> N; cout << endl;

    return N;
}

void PrintNumbers(short N)
{
    
    while(N > 0)
    {
        cout << N << endl;
        N--;
    }
}

int main()
{
    PrintNumbers(ReadN());
    
    return 0;
}