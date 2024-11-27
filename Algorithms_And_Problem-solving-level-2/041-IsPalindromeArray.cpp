#include <iostream>
#include <cmath>

using namespace std;

bool IsPalindromArray(int Arr[100], int ArrLength)
{
    int MidArray = ceil(ArrLength / 2);

    for (int i = 0, j = ArrLength - 1; i < MidArray; i++, j--)
    {
        if(Arr[i] != Arr[j])
            return false;
    }
    return true;
}

void PrintArrayElements(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";

    cout << endl;
}


int main()
{
    int Arr[6] = {10, 20, 30, 30, 20, 10};

    cout << "\nArray Elements: \n";
    PrintArrayElements(Arr, 6);


    if(IsPalindromArray(Arr, 6))
        cout << "\nYes Array is Palindrome.";
    else
        cout << "\nNo Array is not Palindrome.";
}