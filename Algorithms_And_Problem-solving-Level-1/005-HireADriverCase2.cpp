#include <iostream>
using namespace std;

struct enUserInfo
{
    unsigned short Age;
    bool DriverLicense;
    bool HasRecommendation;
};

void ReadUserInfo(enUserInfo &UserInfo)
{
    cout << "Enter your age?\n";
    cin >> UserInfo.Age; cout << endl;

    cout << "Are you have Driver License(yes = 1, no = 0)?\n";
    cin >> UserInfo.DriverLicense; cout << endl;

    cout << "Are you have a recommendation(yes = 1, no = 0)?\n";
    cin >> UserInfo.HasRecommendation; cout << endl;
}

string HiredOrRejected(enUserInfo UserInfo)
{
    if ((UserInfo.Age > 21 && UserInfo.DriverLicense == true) || UserInfo.HasRecommendation == true)
        return "Hired";

    else
        return "Rejected";
    
}

int main()
{
    enUserInfo UserInfo;

    ReadUserInfo(UserInfo);
    cout << "You are " << HiredOrRejected(UserInfo);

    return 0;
}