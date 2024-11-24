#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enRandomOrder {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter  = 3, Digit = 4};

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

char GetRandomCharacter(enRandomOrder CharType)
{
    switch (CharType)
    {
        case SmallLetter:
            return char(RandomNumber(97, 122));
        case CapitalLetter:
            return char(RandomNumber(65, 90));
        case SpecialCharacter:
            return char(RandomNumber(33, 47));
        case Digit:
            return char(RandomNumber(48, 57));
        default:
            exit(0);
    }
}

string Generateword(enRandomOrder CharType, int Lenght)
{
    string Word = "";
    for (int i = 1; i <= Lenght; i++)
    {
        Word += GetRandomCharacter(CharType);
    }

    return Word;
}

string GenerateKey()
{
    string Key = "";

    Key += Generateword(CapitalLetter, 4) + "-";
    Key += Generateword(CapitalLetter, 4) + "-";
    Key += Generateword(CapitalLetter, 4) + "-";
    Key += Generateword(CapitalLetter, 4);

    return Key;
}

void FillArrayWithKeys(string Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = GenerateKey();
}

void PrintStringArray(string Arr[100], int ArrLength)
{
    cout << "Array Elements: \n\n";

    for (int i = 0; i < ArrLength; i++)
        cout << "Array[" << i << "] : " << Arr[i] << endl;
}

int main()
{
    srand((unsigned)time(__null));

    string Arr[100];
    int ArrLength = ReadPositiveNumber("Enter the number of keys you need?\n");

    FillArrayWithKeys(Arr, ArrLength);
    PrintStringArray(Arr, ArrLength);
    
    return 0;
}