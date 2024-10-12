#include <iostream>
#include <cmath>

using namespace std;

void SecondsToDHMS(int Seconds)
{
	int Remainder;
	int SecondsOfDay = 24 * 60 * 60;
	unsigned short	SecondsOfHour = 60 * 60,
		SecondsOfMinute = 60;


	unsigned short Days = (Seconds / SecondsOfDay);
	Remainder = Seconds % SecondsOfDay;

	unsigned short Hours = (Remainder / SecondsOfHour);
	Remainder = Remainder % SecondsOfHour;

	unsigned short Minutes =  (Remainder / SecondsOfMinute);
	Remainder = Remainder % SecondsOfMinute;

	Seconds = Remainder;

	cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds;
}
int main()
{
	int Seconds;

	cout << "Please enter the number of seconds?\n";
	cin >> Seconds; cout << endl << endl;

	SecondsToDHMS(Seconds);
	return 0;



}
