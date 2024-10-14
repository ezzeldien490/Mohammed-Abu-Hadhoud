#include <iostream>

using namespace std;

struct stDriverInfo
{
    unsigned short Age;
    bool DriverLicense;
};

void ReadDriverInfo(stDriverInfo &DriverInfo)
{
    cout << "Please enter your age?\n";
    cin >> DriverInfo.Age; cout << endl;

    cout << "Do you have a driver license(Yes = 1, No = 0)?\n";
    cin >> DriverInfo.DriverLicense; cout << endl;
}

string HiredOrRegected(stDriverInfo DriverInfo)
{
    if (DriverInfo.Age > 21 && DriverInfo.DriverLicense == true) 
    {
        return "Hired";
    }   
    else
    {
        return "Rejected";
    }
}

int main()
{
    stDriverInfo DriverInfo;

    ReadDriverInfo(DriverInfo);

    cout << HiredOrRegected(DriverInfo);
    return 0;
}



