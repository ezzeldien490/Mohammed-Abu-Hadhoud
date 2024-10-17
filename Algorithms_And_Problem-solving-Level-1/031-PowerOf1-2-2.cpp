#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
	float Number;

	cout << Message << endl;
	cin >> Number;
	return Number;
}

float PowerOf234(float Number)
{
	cout << pow(Number,2) << "  round : " << round(pow(Number, 2)) << endl;
	cout << pow(Number, 3) << "  round : " << round(pow(Number, 3)) << endl;
	cout << pow(Number, 4) << "  round : " << round(pow(Number, 4)) << endl;
}


int main()
{
	PowerOf234(ReadNumber("Please enter a number: "));

	return 0;
}