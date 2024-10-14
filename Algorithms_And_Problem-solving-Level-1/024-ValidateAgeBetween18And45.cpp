#include <iostream>

using namespace std;

void ReadAge(unsigned short &Age)
{
    cout << "Please enter your age?\n";
    cin >> Age; cout << endl;
}

string CheckValidate(unsigned short Age)
{
    if(Age >= 18 && Age <= 45)
    {
        return "Valid Age";
    }
    else
    {
        return "Invalid Age";
    }
}

int main()
{
    unsigned short Age;

    ReadAge(Age);
    cout << CheckValidate(Age);

    return 0;
}