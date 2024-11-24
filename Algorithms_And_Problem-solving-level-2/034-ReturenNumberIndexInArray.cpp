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

int NumberSearchInArray(int Arr[100], int Number, int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == Number)
            return i;
    }
    return -1;
}

void PrintNumberIndex(int Arr[100], int NumberForSearch, int ArrLength)
{
    int NumberIndex = NumberSearchInArray(Arr, NumberForSearch, ArrLength);
    cout << "Number you are looking for is: " << NumberForSearch << endl;
    if (NumberIndex == -1)
        cout << "The Number is not found :-(";
    else
    {
        cout << "The number found at position: "  << NumberIndex << endl;
        cout << "The number Found its order  : " << NumberIndex + 1 << endl;
    } 
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr[100], ArrLength;

    FillArrayWithRandomNumber(Arr, ArrLength);

    cout << "Array Elements: "; PrintArrayElements(Arr, ArrLength);

    int NumberForSearch = ReadPositiveNumber("\nPlease enter a number to search for?\n");
    PrintNumberIndex(Arr, NumberForSearch, ArrLength);
    

    return 0;
}
