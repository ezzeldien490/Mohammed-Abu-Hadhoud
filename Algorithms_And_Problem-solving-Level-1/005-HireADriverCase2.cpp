#include <iostream>
using namespace std;

struct enUserInfo
{
    unsigned short Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

enUserInfo ReadUserInfo()
{
    enUserInfo UserInfo;
    cout << "Enter your age?\n";
    cin >> UserInfo.Age; cout << endl;

    cout << "Are you have Driver License(yes = 1, no = 0)?\n";
    cin >> UserInfo.HasDriverLicense; cout << endl;

    cout << "Are you have a recommendation(yes = 1, no = 0)?\n";
    cin >> UserInfo.HasRecommendation; cout << endl;

    return UserInfo;
}

bool IsAccepted(enUserInfo UserInfo)
{
    return ((UserInfo.Age > 21 && UserInfo.HasDriverLicense == true) || UserInfo.HasRecommendation == true);
}

void PrintDirverStatus(enUserInfo UserInfo)
{
    if(IsAccepted(UserInfo))
        cout << "Hired.";
    else
        cout << "Rejected.";
}




int main()
{
    PrintDirverStatus(ReadUserInfo());
    return 0;
}