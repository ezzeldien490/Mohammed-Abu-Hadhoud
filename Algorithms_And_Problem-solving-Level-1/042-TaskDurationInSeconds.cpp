#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float Days, Hours, Minutes, Seconds;

	cout << "Please enter the number of days?\n";
	cin >> Days; cout << endl;

	cout << "Please enter the number of Hours?\n";
	cin >> Hours; cout << endl;

	cout << "Please enter the number of Minutes?\n";
	cin >> Minutes; cout << endl;

	cout << "Please enter the number of seconds?\n";
	cin >> Seconds; cout << endl << endl;

	float TotalSeconds = Seconds + (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60);

	cout << round(TotalSeconds) << " Seconds.";

	return 0;

}
