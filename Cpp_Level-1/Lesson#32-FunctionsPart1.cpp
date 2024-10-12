#include <iostream>

using namespace std;

void DisplayMyCardInfo()
{
	cout << "*************************\n";
	cout << "Name : MOhammed Abu-Hadhoud.\n";
	cout << "Age  : 44 Years.\n";
	cout << "City : Amman.\n";
	cout << "Coutnry: Jordan.\n";
	cout << "************************" << endl;

}

void PrintSquareStars()
{
	cout << "************\n";
	cout << "************\n";
	cout << "************\n";
	cout << "************" << endl;
}

void PrintILoveProgramming()
{
	cout << "I love Programming!\n\n";
	cout << "I promise to be the best developer ever!\n\n";
	cout << "I know it will take some time to practice, but I will achiceve my goal.\n\n";
	cout << "Best Regards.\n";
	cout << "Mohammed Abu-Hadhoud" << endl;
}

void PrintH()
{
	cout << "*       *\n";
	cout << "*       *\n";
	cout << "* * * * *\n";
	cout << "*       *\n";
	cout << "*       *" << endl;
}

int main()
{

	DisplayMyCardInfo();
	cout << endl;

	PrintSquareStars();
	cout << endl;

	PrintILoveProgramming();
	cout << endl;

	PrintH();
	cout << endl;

	return 0;
}
