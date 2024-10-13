#include <iostream>
#include <string>

using namespace std;

enum enStatus {Single, Married};
enum enGender {Male, Female};

struct stAddress
{
	string StreetName;
	string BuildingNo;
};

struct stContactInfo
{
	string Email;
	string Phone;
	stAddress Address;
};

struct stPerson
{
	string Name, City, Country;
	unsigned short Age;
	float MonthlySalary, YearlySalary;
	stContactInfo ContactInfo;
	enStatus Status;
	enGender Gender;

};

void ReadInfo(stPerson &Person)
{

	int G, M;

	cout << "Please enter your name:\n";
	getline(cin, Person.Name); cout << endl;

 	
	cout << "Please enter your age:\n";
	cin >> Person.Age; cout << endl;


	cout << "Please enter your city:\n";
	getline(cin >> ws, Person.City); cout << endl;

	cout << "Please enter your country:\n";
	getline(cin >> ws, Person.Country); cout << endl;

	cout << "Please enter your monthly salary:\n";
	cin >> Person.MonthlySalary; cout << endl;

	Person.YearlySalary = Person.MonthlySalary * 12;

	cout << "Please enter your marital status(Single = 0/ Married = 1)?\n";
	cin >> M; cout << endl;

	cout << "Please enter your Gender(M = 0/ F = 1)?\n";
	cin >> G; cout << endl;

	Person.Gender = enGender(G);
	Person.Status = enStatus(M);
	

	cout << "Please enter your email:\n";
	cin >> Person.ContactInfo.Email; cout << endl;

	cout << "Please enter your phone number:\n";
	cin >> Person.ContactInfo.Phone;  cin.ignore(); cout << endl;


	cout << "Please enter your Street name:\n";
	getline(cin, Person.ContactInfo.Address.StreetName); cout << endl;

	cout << "Please enter your building number:\n";
	getline(cin, Person.ContactInfo.Address.BuildingNo); cout << endl << endl;
}


void PrintInfo(stPerson Person)
{

	cout << "***************************\n";
	cout << "Name: " << Person.Name << endl;
	cout << "Age:  " << Person.Age << " Years" << endl;
	cout << "City: " << Person.City << endl;
	cout << "Country: " << Person.Country << endl;
	cout << "Monthly salary: " << Person.MonthlySalary << endl;
	cout << "Yearly salary: " << Person.YearlySalary << endl;
	cout << "Gender: " << Person.Gender << endl;
	cout << "Married: " << Person.Status << endl;
	cout << "Email:  " << Person.ContactInfo.Email << endl;
	cout << "Phone number: " << Person.ContactInfo.Phone << endl;
	cout << "Street name: " << Person.ContactInfo.Address.StreetName << endl;
	cout << "Building number: " << Person.ContactInfo.Address.BuildingNo << endl;
	cout << "***************************";
}
int main()
{
	stPerson Person;
	ReadInfo(Person);
	PrintInfo(Person);


	return 0;
}
