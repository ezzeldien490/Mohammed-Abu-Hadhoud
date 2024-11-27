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

void AddArrayElement(int Arr[100], int Number, int &ArrLength)
{
    ArrLength++;
    Arr[ArrLength - 1] = Number;
}

void FillArrayWithRandomNumber(int Arr[100], int &ArrLength)
{
    ArrLength = ReadPositiveNumber("Enter the number of array element?\n");

    for (int i = 0; i <= ArrLength; i++)
        Arr[i] = RandomNumber(1, 100);
}

void PrintArrayElements(int Arr[100], int ArrayLength)
{
    
    for (int i = 0; i < ArrayLength; i++)
        cout << Arr[i] << " ";    

    cout << endl;
}

void CopyArray(int Arr1[100], int Arr2[100],int Arr1Length, int &Arr2Length)
{
    for (int i = 0; i < Arr1Length; i++)
        AddArrayElement(Arr2, Arr1[i], Arr2Length);
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr1[100], Arr1Length;

    FillArrayWithRandomNumber(Arr1, Arr1Length);
    cout << "\nArray 1 elements:\n"; PrintArrayElements(Arr1, Arr1Length);

    int Arr2[100], Arr2Length = 0;
    CopyArray(Arr1, Arr2, Arr1Length, Arr2Length);
    cout << "\nArray 2 elements after copy:\n"; PrintArrayElements(Arr2, Arr2Length);
 
    return 0;
}