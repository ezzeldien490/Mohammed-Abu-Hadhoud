#include <iostream>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do 
    {   
        cout << Message << endl;
        cin >> Number; cout << endl; 
    }while (Number <= 0);
   
    return Number;
}

void ConvertSecondsToDHMS(int Seconds)
{
	int Remainder= 0;
	const int SecondsOfDay = 24 * 60 * 60;
	const unsigned short	SecondsOfHour = 60 * 60, SecondsOfMinute = 60;


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
	int Seconds = ReadPositiveNumber("Please enter the number of Seconds?");
	ConvertSecondsToDHMS(Seconds);
	return 0;



}
