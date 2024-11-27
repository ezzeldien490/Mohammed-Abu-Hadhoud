#include <iostream>

using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number; cout << endl;
    
    return Number;
}

void AddArrayElement(int Arr[100], int Number, int &ArrLength)
{
    ArrLength++;
    Arr[ArrLength - 1] = Number;
}

void InputUserNumbersInArray(int Arr[100], int &ArrLength)
{
   bool AddMore = true;

    do
    {
        int Number = ReadNumber("\nPlease enter a number? ");
        AddArrayElement(Arr, Number, ArrLength);

        cout << "Do You Want To ADD more numbers? [0]: NO, [1]: Yes? ";
        cin >> AddMore; cout << endl;

    }while(AddMore);
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}


int main()
{
    int Arr[100], ArrLength = 0;
    InputUserNumbersInArray(Arr, ArrLength);

    cout << "Array Length: " << ArrLength << endl;
    cout << "Array elements: ";
    PrintArrayElements(Arr, ArrLength); cout << endl;

    return 0;
}