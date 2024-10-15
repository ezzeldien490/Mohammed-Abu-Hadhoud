#include <iostream>

using namespace std;

void ReadGrade(float &Grade)
{
    cout << "Please enter your grade?\n";
    cin >> Grade; cout << endl;
}

string Rate(float Grade)
{
    if(Grade >= 90)
    {
        return "A";
    }
    else if(Grade >= 80)
    {
        return "B";
    }
    else if(Grade >= 70)
    {
        return "C";
    }
    else if(Grade >= 60)
    {
        return "D";
    }
    else if(Grade >= 50)
    {
        return "E";
    }
    else
    {
        return "F";
    }
}

int main()
{
    float Grade;

    ReadGrade(Grade);
    cout << Rate(Grade);

    return 0;
}