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

void PrintArrayElements(int Arr[], int ArrayLength)
{
    
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Arr[i] << " ";    
    }
    cout << endl;
}

int FindMaxNumberOfArray(int Arr[100], int ArrLength)
{
    int MaxNumber = 0;
    for (int i = 0; i < ArrLength; i++)
    {
       if (Arr[i] > MaxNumber)
            MaxNumber = Arr[i];
    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr[100], ArrLength;

    FillArrayWithRandomNumber(Arr, ArrLength);

    cout << "Array Elements: "; PrintArrayElements(Arr, ArrLength);

    cout << "\nMax Number is : " << FindMaxNumberOfArray(Arr, ArrLength) << endl;

    return 0;
}
