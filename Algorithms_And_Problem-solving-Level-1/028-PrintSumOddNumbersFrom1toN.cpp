#include <iostream>

using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

short ReadN()
{
    short N;
    cout << "Enter a Number?\n";
    cin >> N; cout << endl;

    return N;
}

enOddOrEven CheckOddOrEven(short N)
{
    if (N % 2 != 0)
        return Odd;
    else
        return Even;
}

int SumOfOddNumbers(short N)
{
    int Sum = 0;
    short Counter = 1;
    while (Counter <= N)
    {
        if (CheckOddOrEven(Counter) == Odd)
        {
            Sum += Counter;
        }
        Counter++;
    }

    return Sum;
}

void PrintSumOfOddNumbers(short N)
{
    cout << "Sum of Odd Numbers from 1 to " << N << " = " << SumOfOddNumbers(N);
}

int main()
{    
    PrintSumOfOddNumbers(ReadN());

    return 0;
}