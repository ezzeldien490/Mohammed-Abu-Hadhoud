#include <iostream>
using namespace std;

struct stUserName
{
    string FirstName;
    string LastName;
};

stUserName ReadUserName()
{
    stUserName UserName;
    cout << "Please enter your first name?\n";
    getline(cin >> ws, UserName.FirstName); cout << endl;

    cout << "Please enter your last name?\n";
    getline(cin >>ws, UserName.LastName); cout << endl;

    return UserName;
}

string GetFullName(stUserName UserName)
{
    string FullName = "";
    FullName = UserName.FirstName + " " + UserName.LastName;
    return FullName;
}
void PringFullName(string FullName)
{
    cout << "Your full name is: " << FullName;
}


int main()
{
    PringFullName(GetFullName(ReadUserName()));
    return 0;
}