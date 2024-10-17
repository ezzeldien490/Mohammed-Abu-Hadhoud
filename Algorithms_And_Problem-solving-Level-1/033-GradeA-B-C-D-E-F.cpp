#include <iostream>

using namespace std;

float ReadNumberInRange(int From, int To)
{
    float Grade;
    do
    {
        cout << "Please enter number between " << From << " and " << To << ": ";
        cin >> Grade;  cout << endl;
    } while (Grade < From || Grade > To);
    
    return Grade;
}

char GetGradeLetter(float Grade)
{
    if(Grade >= 90)
        return 'A';
    else if(Grade >= 80)
        return 'B';
    else if(Grade >= 70)
        return 'C';
    else if(Grade >= 60)
        return 'D';
    else if(Grade >= 50)
        return 'E';
    else
        return 'F';
}
void PrintGradeLetter(float Grade)
{
    cout << "Your rate is: " << GetGradeLetter(Grade);
}

int main()
{
    PrintGradeLetter(ReadNumberInRange(0, 100));
    return 0;
}