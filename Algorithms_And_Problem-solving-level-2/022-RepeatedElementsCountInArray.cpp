#include <iostream>

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

void ReadArrayElements(int Arr[], int NumberOfElements)
{
    
    cout << "Enter Array elements:\n";

    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> Arr[i]; cout << endl;
    }
}

int TimesRepeated(int Number, int Arr[], int NumberOfElements)
{
    int NumberRepeatedTime = 0;
    for (int i = 0; i < NumberOfElements; i++)
    {
        if (Number == Arr[i])
            NumberRepeatedTime++;
    }

    return NumberRepeatedTime;
}

void PrintArrayElements(int Arr[], int ArrayLength)
{
    
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Arr[i] << " ";    
    }
    cout << endl;
}


int main()
{
    int NumberOfElements = ReadPositiveNumber("Enter number of elements in array?");
    int Arr[NumberOfElements];
    ReadArrayElements(Arr, NumberOfElements);

    int NumberForCheck = ReadPositiveNumber("Enter the number you want to check: ");

    cout << "\nOriginal array: "; PrintArrayElements(Arr, NumberOfElements);
    cout << NumberForCheck << " is repeated " << TimesRepeated(NumberForCheck, Arr, NumberOfElements)
         << " time(s).";

    return 0;
}
