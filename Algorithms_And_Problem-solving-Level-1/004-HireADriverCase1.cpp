#include <iostream>

using namespace std;

struct stDriverInfo
{
    unsigned short Age;
    bool DriverLicense;
};

stDriverInfo ReadDriverInfo()
{
    stDriverInfo DriverInfo;
    cout << "Please enter your age?\n";
    cin >> DriverInfo.Age; cout << endl;

    cout << "Do you have a driver license(Yes = 1, No = 0)?\n";
    cin >> DriverInfo.DriverLicense; cout << endl;

    return DriverInfo;
}

bool IsAccepted(stDriverInfo DriverInfo)
{
    return (DriverInfo.Age > 21 && DriverInfo.DriverLicense == true);
    
}

void PrintDriverStatus(stDriverInfo DriverInfo)
{
    if(IsAccepted(DriverInfo))
        cout << "Hired.";
    else
        cout << "Rejected.";
}


int main()
{

    PrintDriverStatus(ReadDriverInfo());
    return 0;
}



