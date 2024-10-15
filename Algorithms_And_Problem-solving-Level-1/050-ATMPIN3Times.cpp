#include <iostream>
#include <cstdlib>

using namespace std;

struct enUserInfo
{
    unsigned short PIN;
    int UserBalance;
};

void ReadUserInfo(enUserInfo &UserInofo)
{
    UserInofo.UserBalance =  7500;
    cout << "Please etner your PIN?\n";
    cin >> UserInofo.PIN; cout << endl;
}

void CheckUserPIN(enUserInfo UserInfo)
{
        short Counter = 1;
        while (UserInfo.PIN != 1234)
        {
            if (Counter > 2)
            {
                cout << "[Wrong PIN]\n";
                cout << "Card is locked!\n";
                exit(0);
            }

            cout << "[Wrong PIN]\n" << endl;
            ReadUserInfo(UserInfo);
            Counter++;
        }
        return;
}
        

int main()
{
    enUserInfo UserInfo;

    ReadUserInfo(UserInfo);
    CheckUserPIN(UserInfo);

    cout << "Your Balance is: " << UserInfo.UserBalance;
    return 0;
}