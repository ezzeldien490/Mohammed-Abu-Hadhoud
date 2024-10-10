#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Seconds, Remainder;
	int SecondsOfDay = 24 * 60 * 60;
	unsigned short	SecondsOfHour = 60 * 60,
		SecondsOfMinute = 60;

	cout << "Please enter the number of seconds?\n";
	cin >> Seconds; cout << endl << endl;

	unsigned short Days = (Seconds / SecondsOfDay);
	Remainder = Seconds % SecondsOfDay;

	unsigned short Hours = (Remainder / SecondsOfHour);
	Remainder = Remainder % SecondsOfHour;

	unsigned short Minutes =  (Remainder / SecondsOfMinute);
	Remainder = Remainder % SecondsOfMinute;

	Seconds = Remainder;

	cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds;

	return 0;



}
