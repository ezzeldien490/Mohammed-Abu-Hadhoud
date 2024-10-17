#include <iostream>

using namespace std;

struct stPersonInfo
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;
};

void ReadPersonInfo(stPersonInfo &Person)
{
    cout << "Please enter the first name?\n";
    getline(cin >> ws, Person.FirstName); cout << endl;

    cout << "Please enter the last name?\n";
    getline(cin >> ws, Person.LastName); cout << endl;

    cout << "Please enter your age?\n";
    cin >> Person.Age; cout << endl;

    cout << "Please enter your phone number?\n";
    cin >> Person.Phone; cout << endl;
}

void PrintPersonInfo(stPersonInfo Person)
{
    cout << "******************************\n";
    
    cout << "First name: " << Person.FirstName << endl;
    cout << "Last name: " <<  Person.LastName << endl;
    cout << "Age: " << Person.Age << " Years." << endl;
    cout << "Phone: " << Person.Phone << endl;

    cout << "******************************\n\n";
}

void ReadAllPersonInfo(stPersonInfo Persons[100], unsigned short &Lenght)
{
    cout << "Please enter number of persons?\n";
    cin >> Lenght; cout << endl;

    for (short Counter = 0; Counter < Lenght; Counter++)
    {
        cout << "Person" << Counter + 1 << "Info:\n";
        ReadPersonInfo(Persons[Counter]);
    }
}

void PrintAllPersonInfo(stPersonInfo Persons[100], unsigned short Lenght)
{
    for (short Counter = 0; Counter < Lenght; Counter++)
    {
        cout << "Person" << Counter + 1 << "Info:\n";
        PrintPersonInfo(Persons[Counter]);
    }
 
}



int main()
{
    unsigned short Length;
    stPersonInfo Persons[100];

    ReadAllPersonInfo(Persons, Length);
    PrintAllPersonInfo(Persons, Length);

    return 0;
}