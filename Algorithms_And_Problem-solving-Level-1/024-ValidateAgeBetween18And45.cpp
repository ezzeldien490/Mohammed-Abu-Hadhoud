#include <iostream>

using namespace std;

enum enAgeStatus {ValidAge, InvalidAge};

short ReadAge()
{
    short Age;
    cout << "Please enter your age?\n";
    cin >> Age; cout << endl;

    return Age;
}

enAgeStatus CheckValidate(short Age)
{
    if(Age >= 18 && Age <= 45)
        return ValidAge;
    else
        return InvalidAge;
}

void PrintAgeStatus(short Age)
{
    if (CheckValidate(Age) == ValidAge)
        cout << "Vaild age.\n";
    else
        cout << "Invalid age.\n";
}

int main()
{
    PrintAgeStatus(ReadAge());
    return 0;
}