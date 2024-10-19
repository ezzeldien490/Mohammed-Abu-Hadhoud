#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number; cout << endl;

    return Number;
}

int SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;
    do
    {
        Number = ReadNumber("Please enter the number " + to_string(Counter) + ": ");
        if (Number == -99)
                break;

        Sum += Number;
        Counter++;
    } while (Number != -99);

    return Sum;
}



int main()
{
    cout << "Sum of Numbers = " << SumNumbers();
    return 0;
}