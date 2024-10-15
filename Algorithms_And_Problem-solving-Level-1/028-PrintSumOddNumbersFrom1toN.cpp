#include <iostream>

using namespace std;

void ReadN(unsigned short &N)
{
    cout << "Enter a Number?\n";
    cin >> N; cout << endl;

}

int SumOddNumbers(unsigned short N)
{
    int Sum = 0;
    unsigned short Counter = 1;
    while (Counter <= N)
    {
        if (Counter % 2 != 0)
        {
            Sum += Counter;
        }
        Counter++;
    }

    return Sum;
}

int main()
{
    unsigned short N;
    ReadN(N);
    cout << SumOddNumbers(N);
    
    return 0;
}