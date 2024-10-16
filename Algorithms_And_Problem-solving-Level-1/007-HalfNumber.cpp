#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please enter Number?\n";
	cin >> Number;  cout << endl;
	return Number;
}

float GetHalfOfNumber(int Number)
{
	 return (float) Number / 2;
}

void PrintHalfOfNumber(int Number)
{
	cout << "Half of " << Number << " is " << GetHalfOfNumber(Number);
}


int main()
{
	PrintHalfOfNumber(ReadNumber());
	return 0;
}