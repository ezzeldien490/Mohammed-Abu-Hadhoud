#include <iostream>
using namespace std;

void ReadNumbers(int arr[10], short &Length)
{
    cout << "enter the number of numbers you want compare?\n";
    cin >> Length; cout << endl;

    for (short i = 0; i < Length; i++)
    {
        cout << "Please enter number " << i + 1 << ": ";
        cin >> arr[i];
        cout << endl;
    }
}

int MaxNumber(int arr[10], short Length)
{
    for (short i = 0; i < Length; i++)
    {
        for (short j = i + 1; j < Length; j++)
        {
            if(arr[i] < arr[j])
            {
                break;
            }
            else if(j == Length - 1)
            {
                return arr[i];
            }
        }
    }
}

void PrintMaxNumber(int MaxNumber)
{
    cout  << "The Max number is: " << MaxNumber;
}


int main()
{
    int arr[10];
    short Length;

    ReadNumbers(arr, Length);
    PrintMaxNumber(MaxNumber(arr, Length));
    return 0;
}