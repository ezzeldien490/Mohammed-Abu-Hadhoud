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

    cout << "******************************\n";
}

void ReadAllPersonInfo(stPersonInfo Persons[2])
{
    ReadPersonInfo(Persons[0]);

    cout << "Person 2 Info:\n";
    ReadPersonInfo(Persons[1]);
}

void PrintAllPersonInfo(stPersonInfo Persons[2])
{
    PrintPersonInfo(Persons[0]);
    PrintPersonInfo(Persons[1]);
}



int main()
{
    stPersonInfo Persons[2];

    ReadAllPersonInfo(Persons);
    PrintAllPersonInfo(Persons);

    return 0;
}