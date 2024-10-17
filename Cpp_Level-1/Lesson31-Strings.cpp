#include <iostream>
#include <string>

using namespace std;

int main()
{
	string St1, St2, St3;


	cout << "Please enter String1?\n";
	getline(cin, St1); cout << endl;

	cout << "Please Enter String2?\n";
	cin >> St2; cout << endl;

	cout << "Please enter String3?\n";
	cin >> St3; cout << endl << endl;

	cout << "*******************************\n";

	cout << "The length of String1 is " << St1.length() << endl;
	cout << "Characcters at 0,2,4,7 are: " << St1[0] << " " << St1[2] << " " 
		<< St1[4] << " " << St1[7] << endl;
	
	string St4 = St2 + St3;

	cout << "Concatenating String2 and String3 = " << St4 << endl;
	
	int N1 = stoi(St2) * stoi(St3);

	cout << St2 << " * " << St3 << " = " << N1;

	return 0;
}
