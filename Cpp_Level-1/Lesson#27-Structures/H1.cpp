#include <iostream>
#include <string>

using namespace std;

struct communication
{
	string Email;
	string Phone;
};

struct customer
{
	string Name, City, Country;
	unsigned short Age;
	//char Gender;
	//bool Married;
	float MonthlySalary;
	communication Contact;

};

enum Status {Single, Married};
enum Gender {M, F};

int main()
{
	Gender G = Gender::M;
	Status M = Status::Married;
	customer Customer1;

	cout << "Please enter your name:\n";
	getline(cin, Customer1.Name); cout << endl;

 	
	cout << "Please enter your age:\n";
	cin >> Customer1.Age; cout << endl;


	cout << "Please enter your city:\n";
	cin >> Customer1.City; cout << endl;

	cout << "Please enter your country:\n";
	cin >> Customer1.Country; cout << endl;

	cout << "Please enter your monthly salary:\n";
	cin >> Customer1.MonthlySalary; cout << endl;

	float YearlySalary = Customer1.MonthlySalary * 12;

	//cout << "Please enter your gender (M/F):\n";
	//cin >> Customer1.Gender; cout << endl;
	

	//cout << "Please indicate if you are married (0/1):\n";
	//cin >> Customer1.Married; cout << endl;


	cout << "Please enter your email:\n";
	cin >> Customer1.Contact.Email; cout << endl;

	cout << "Please enter your phone number:\n";
	cin >> Customer1.Contact.Phone;  cout << endl << endl;

	cout << "***************************\n";
	cout << "Name: " << Customer1.Name << endl;
	cout << "Age:  " << Customer1.Age << " Years" << endl;
	cout << "City: " << Customer1.City << endl;
	cout << "Country: " << Customer1.Country << endl;
	cout << "Monthly salary: " << Customer1.MonthlySalary << endl;
	cout << "Yearly salary: " << YearlySalary << endl;
	cout << "Gender: " << G << endl;
	cout << "Married: " << M << endl;
	cout << "Email:  " << Customer1.Contact.Email << endl;
	cout << "Phone number: " << Customer1.Contact.Phone << endl;
	cout << "***************************";

	return 0;
}
