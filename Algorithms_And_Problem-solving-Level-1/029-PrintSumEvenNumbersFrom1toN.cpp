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

int SumOfEvenNumbers(short N)
{
    int Sum = 0;

    for (unsigned short Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == Even)
        {
            Sum += Counter;
        }
    }

    return Sum;
}

void PrintSumOfEvenNumbers(short N)
{
    cout << "Sum of even numbers from 1 to " << N << " = " << SumOfEvenNumbers(N);
}

int main()
{
    PrintSumOfEvenNumbers(ReadN());

    return 0;
}