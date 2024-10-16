#include <iostream>
using namespace std;

void ReadNumberOfHours(float  &NumberOfHours)
{
    cout << "Please enter number of hours?\n";
    cin >> NumberOfHours; cout << endl;
}

float ConvertHoursToDays(float  NumberOfHours)
{
    float NumberOfDays =  NumberOfHours / 24;
    return NumberOfDays;
}
float ConvertHoursToWeeks(float  NumberOfHours)
{
    float NumberOfWeeks =  NumberOfHours / 24 / 7;
    return NumberOfWeeks;
}

int main()
{
    float NumberOfHours;

    ReadNumberOfHours(NumberOfHours);
    cout << ConvertHoursToDays(NumberOfHours) << " Days" << endl;
    cout << ConvertHoursToWeeks(NumberOfHours) << " Weeks";

    return 0;
}

