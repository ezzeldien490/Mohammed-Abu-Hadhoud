#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

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

void CopyArrayInReverseOrder(int Arr1[100], int Arr2[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        Arr2[i] = Arr1[ArrLength - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr1[100], Arr2[100], ArrLength;

    FillArrayWithRandomNumber(Arr1, ArrLength);
    cout << "\nArray 1 elements:\n"; PrintArrayElements(Arr1, ArrLength);

    CopyArrayInReverseOrder(Arr1, Arr2, ArrLength);
    cout << "\nArray 2 elements after copying array 1 in reversed order:\n"; PrintArrayElements(Arr2, ArrLength);
 
    return 0;
}