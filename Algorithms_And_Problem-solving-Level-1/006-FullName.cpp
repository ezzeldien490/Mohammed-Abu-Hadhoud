#include <iostream>
using namespace std;

struct enUserName
{
    string FirstName;
    string LastName;
};

void ReadUserName(enUserName &UserName)
{
    cout << "Please enter your first name?\n";
    getline(cin >> ws, UserName.FirstName); cout << endl;

    cout << "Please enter your last name?\n";
    getline(cin >>ws, UserName.LastName); cout << endl;
}

int main()
{
    enUserName UserName;

    ReadUserName(UserName);
    cout << UserName.FirstName << " " << UserName.LastName;

    return 0;
}