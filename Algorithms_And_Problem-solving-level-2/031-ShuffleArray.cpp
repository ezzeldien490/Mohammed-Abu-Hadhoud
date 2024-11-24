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

void Swap(int &A, int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

void FillArrayFrom1ToN(int Arr[100], int N)
{
    for (int i = 0; i < N; i++)
        Arr[i] = i + 1;
}

void ShuffleArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        swap(Arr[RandomNumber(0, ArrLength - 1)], Arr[RandomNumber(0, ArrLength - 1)]);
}

void PrintArrayElements(int Arr[100], int ArrayLength)
{
    
    for (int i = 0; i < ArrayLength; i++)
        cout << Arr[i] << " ";  

    cout << endl;
}

int main()
{
    srand((unsigned)time(__null));

    int Arr[100], ArrLength = ReadPositiveNumber("Enter a top nubmer of array?\n");

    FillArrayFrom1ToN(Arr, ArrLength);
    cout << "Array elements before shuffle:\n"; PrintArrayElements(Arr, ArrLength);

    ShuffleArray(Arr, ArrLength);
    cout << "Array elements after shuffle:\n"; PrintArrayElements(Arr, ArrLength);

    return 0;

}