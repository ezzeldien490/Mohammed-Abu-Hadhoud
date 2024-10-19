#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do 
    {   
        cout << Message << endl;
        cin >> Number; cout << endl; 
    }while (Number <= 0);
   
    return Number;
}


float ConvertHoursToDays(float  NumberOfHours)
{
    return  NumberOfHours / 24;
}

float ConvertHoursToWeeks(float  NumberOfHours)
{
    return NumberOfHours / 24 / 7;
}

void PrintDaysAndHours(float NumberOfHours)
{
    cout << NumberOfHours << " Hours = " << endl;
    cout << ConvertHoursToDays(NumberOfHours) << " Days" << endl;
    cout << ConvertHoursToWeeks(NumberOfHours) << " Weeks";
}


int main()
{
    float NumberOfHours = ReadPositiveNumber("Please enter the number of Hours?");
    PrintDaysAndHours(NumberOfHours);

    return 0;
}

