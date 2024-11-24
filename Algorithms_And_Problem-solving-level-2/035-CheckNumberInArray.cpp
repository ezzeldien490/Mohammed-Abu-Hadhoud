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


bool CheckNumberInArray(int Arr[100], int NumberForSearch, int ArrLength)
{
    return NumberSearchInArray(Arr, NumberForSearch, ArrLength) != -1;
}

int main()
{
    srand((unsigned)time(__null));
    
    int Arr[100], ArrLength;
    FillArrayWithRandomNumber(Arr, ArrLength);

    cout << "Array Elements: ";
    PrintArrayElements(Arr, ArrLength);

    int NumberForSearch = ReadPositiveNumber("\nPlease enter a number to search for?\n");
    cout << "Number you are looking for is: " << NumberForSearch << endl;
    
    if(!CheckNumberInArray(Arr, NumberForSearch, ArrLength))
        cout << "No, The number is not foudn :-(";

    else
        cout << "Yes, The number is found :-)";
    

    return 0;
}
