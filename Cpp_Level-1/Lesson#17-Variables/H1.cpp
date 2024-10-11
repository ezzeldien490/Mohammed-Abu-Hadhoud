#include <iostream>
using namespace std;

int main()
{
	string Name, City, Country;
	unsigned short Age;
	float MonthlySalary;
	char Gender;
	bool Married;

	cout << "Enter your Name:\n";
	cin >> Name; cout << endl;

	cout << "Enter your Age:\n";
	cin >> Age; cout << endl;

	cout << "Enter your City:\n";
	cin >> City; cout << endl;

	cout << "Enter your Country:\n"; 
	cin >> Country; cout << endl;

	cout << "Month Salary?\n";
	cin >> MonthlySalary; cout << endl;

	cout << "Gender? M/F ?\n";
	cin >> Gender; cout << endl;

	cout << "Are You Married? 1/0 ?\n";
	cin >> Married; cout << endl << endl;


	cout << "************************************\n";
	cout << "Name: " << Name << ".\n";
	cout << "Age: " << Age << " Years.\n";
	cout << "City: " << City << ".\n";
	cout << "Country: " << Country << ".\n";
	cout << "Monthly Salary: " << MonthlySalary << "\n";
	cout << "Yearly Salary: " << MonthlySalary * 12 << "\n";
	cout << "Gender: " << Gender << "\n";
	cout << "Married: " << Married << "\n";
	cout << "************************************" << endl;

	return 0;


}