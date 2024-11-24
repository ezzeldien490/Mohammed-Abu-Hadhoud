#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;
enum enPrimeOrNot {PrimeNumber = 1, NotPrimeNumber = 2};

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number; cout << endl;
    }while(Number <= 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

enPrimeOrNot IsNumberPrime(int Number)
{
    if (Number <= 1)
    {
        return NotPrimeNumber;
    }

    int Mid = round(Number / 2);
    
    for(int Counter = 2; Counter <= Mid; Counter++)
    {
        if (Number % Counter == 0)
            return NotPrimeNumber;
    }

    return PrimeNumber;
}

void FillArrayWithRandomNumber(int Arr[100], int &ArrLength)
{
    ArrLength = ReadPositiveNumber("Enter the number of array element?\n");

    for (int i = 0; i <= ArrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int Arr[100], int ArrayLength)
{
    
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Arr[i] << " ";    
    }
    cout << endl;
}

void CopyPrimeNumberOnlyInArray(int Arr1[100], int Arr2[100], int Arr1Length, int &Arr2Length)
{
    for (int i = 0; i < Arr1Length; i++)
    {
        if (IsNumberPrime(Arr1[i]) == PrimeNumber)
        {
            Arr2[Arr2Length] = Arr1[i];
            Arr2Length++;
        }

    }
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr1[100], ArrLength;

    FillArrayWithRandomNumber(Arr1, ArrLength);
    cout << "\nArray 1 elements:\n"; PrintArrayElements(Arr1, ArrLength);

    int Arr2[100], Arr2Length = 0;
    CopyPrimeNumberOnlyInArray(Arr1, Arr2, ArrLength, Arr2Length);
    cout << "\nPrime Numbers in Array2:\n"; PrintArrayElements(Arr2, Arr2Length);
 
    return 0;
}