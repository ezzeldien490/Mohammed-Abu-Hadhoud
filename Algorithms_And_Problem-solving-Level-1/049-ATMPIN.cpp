#include <iostream>

using namespace std;

struct stUserInfo
{
    int PIN;
    float UserBalance;
};

void ReadUserInfo(stUserInfo &UserInfo)
{
    UserInfo.UserBalance = 7500;
    cout << "Please enter PIN code?\n";
    cin >> UserInfo.PIN; cout << endl;
}

string CheckPIN(stUserInfo UserInfo)
{
    if(UserInfo.PIN == 1234)
    {
        cout << "Your Balacne is: " << UserInfo.UserBalance;
    }
    else 
    {
        cout << "Wrong PIN";
    }
}

int main()
{
    stUserInfo UserInfo;

    ReadUserInfo(UserInfo);
    CheckPIN(UserInfo);
    return 0;

}