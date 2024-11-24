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

void FillArrayWithRandomNumber(int Arr[100], int ArrLength)
{
    
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

void SumOf2ArrayToAThirdOne(int Arr1[100], int Arr2[100], int ArrSum[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        ArrSum[i] = Arr1[i] + Arr2[i];
    }
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr1[100], ArrLength = ReadPositiveNumber("How many elements?\n");
    FillArrayWithRandomNumber(Arr1, ArrLength);
    
    int Arr2[100];
    FillArrayWithRandomNumber(Arr2, ArrLength);

    cout << "\nArray 1 elements:\n"; PrintArrayElements(Arr1, ArrLength);
    cout << "\nArray 2 elements:\n"; PrintArrayElements(Arr2, ArrLength);
 
    int ArrSum[100];
    SumOf2ArrayToAThirdOne(Arr1, Arr2, ArrSum, ArrLength);
    cout << "\nSum of array1 and array2 elements:\n"; PrintArrayElements(ArrSum, ArrLength);

    return 0;
}