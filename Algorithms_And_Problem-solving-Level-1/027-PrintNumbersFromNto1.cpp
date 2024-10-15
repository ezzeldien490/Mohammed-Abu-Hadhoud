#include <iostream>

using namespace std;

void ReadN(unsigned short &N)
{
    cout << "Enter the Number you want to print numbers from this number down to number 1?\n";
    cin >> N; cout << endl;

}

void PrintNumbers(unsigned short N)
{
    
    while(N > 0)
    {
        cout << N << endl;
        N--;
    }
}

int main()
{
    unsigned short N;
    ReadN(N);
    PrintNumbers(N);
    
    return 0;
}