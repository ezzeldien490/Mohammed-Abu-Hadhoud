#include <iostream>

using namespace std;

void AddArrayElement(int Arr[100], int Number, int &ArrLength)
{
    ArrLength++;
    Arr[ArrLength - 1] = Number;
}

int NumberSearchInArray(int Arr[100], int Number, int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == Number)
            return i;
    }
    return -1;
}

bool CheckNumberInArray(int Arr[100], int NumberForSearch, int ArrLength)
{
    return NumberSearchInArray(Arr, NumberForSearch, ArrLength) != -1;
}

void CopyDistinctNumbersOnly(int Arr1[100], int Arr2[100], int Arr1Length, int &Arr2Length)
{
    for (int i = 0; i < Arr1Length; i++)
    {
        if(!CheckNumberInArray(Arr2, Arr1[i], Arr2Length))
            AddArrayElement(Arr2, Arr1[i], Arr2Length);
    }
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}


int main()
{
    int Arr1[10] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
    int Arr2[100], Arr2Length = 0;

    CopyDistinctNumbersOnly(Arr1, Arr2, 10, Arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArrayElements(Arr1, 10); cout << endl;

    cout << "\nArray 2 distinct elemetns:\n";
    PrintArrayElements(Arr2, Arr2Length);

    return 0;
}