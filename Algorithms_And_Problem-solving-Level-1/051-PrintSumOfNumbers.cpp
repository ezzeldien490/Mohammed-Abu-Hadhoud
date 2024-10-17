#include <iostream>
#include <cmath>
using namespace std;

enum enOddOrEvenOrAll {Odd = 1, Even = 2, All = 3};

int SumOfOddNumbers(short N)
{
   int Count = (N + 1) / 2;
   return Count * Count;
}
int SumOfEvenNumbers(short N)
{
    int Count = N / 2;
    return Count * (Count + 1);
}
int SumOfNumbers(short Number)
{
    return Number * (Number + 1) / 2;
}
void PrintSumOptions()
{
  
    cout << "**************************************************\n";
    cout << "Please enter the type of sum you want to calculate?\n";
    cout << "(1) Odd numbers only.\n";
    cout << "(2) Even numbers only.\n";
    cout << "(3) All numbers.\n";
    cout << "**************************************************\n\n";
    cout << "Enter Your choice (1, 2, or 3): ";

}
enOddOrEvenOrAll ReadChoice()
{
    short Choice;
    cin >> Choice; cout << endl;

    return (enOddOrEvenOrAll) Choice;
}
short ReadNumber(string Message)
{
    short N;
    cout << Message << endl;
    cin >> N; cout << endl;

    return N;
}
int ResultOfSum(enOddOrEvenOrAll Choice)
{
    int Number = ReadNumber("Enter the number up to which you want to sum numbers: ");
    int Sum;
    switch (Choice)
    {
    case Odd:
        return SumOfOddNumbers(Number);
        break;
    case Even:
        return SumOfEvenNumbers(Number);
        break;
    case All:
    default:
        return SumOfNumbers(Number);
        break;
    }
}
void PrintResultOfSum(int Result)
{
    cout << "Sum of numbers =  " << Result;
}


int main() 
{
    PrintSumOptions();
    PrintResultOfSum(ResultOfSum(ReadChoice()));
    return 0;
}