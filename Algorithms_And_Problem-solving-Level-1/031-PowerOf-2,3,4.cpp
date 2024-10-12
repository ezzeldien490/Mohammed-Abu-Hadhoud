#include <iostream>
#include <cmath>

using namespace std;

float PowerOf234(float Number)
{
	cout << pow(Number,2) << "  round : " << round(pow(Number, 2)) << endl;
	cout << pow(Number, 3) << "  round : " << round(pow(Number, 3)) << endl;
	cout << pow(Number, 4) << "  round : " << round(pow(Number, 4)) << endl;
}
int main()
{
	float Number;

	cout << "Please Enter a number?\n";
	cin >> Number; cout << endl << endl;

	PowerOf234(Number);

	return 0;



}
