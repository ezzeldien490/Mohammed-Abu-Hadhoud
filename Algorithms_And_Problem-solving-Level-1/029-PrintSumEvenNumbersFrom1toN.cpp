#include <iostream>

using namespace std;

void ReadN(unsigned short &N)
{
    cout << "Enter a Number?\n";
    cin >> N; cout << endl;

}

int SumEnenNumbers(unsigned short N)
{
    int Sum = 0;

    for (unsigned short Counter = 1; Counter <= N; Counter++)
    {
        if (Counter % 2 == 0)
        {
            Sum += Counter;
        }
    }

    return Sum;
}

int main()
{
    unsigned short N;
    ReadN(N);
    cout << SumEnenNumbers(N);
    
    return 0;
}