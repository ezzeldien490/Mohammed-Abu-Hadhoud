#include <iostream>
#include <string> 

using namespace std;

int main()
{
	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;


	double Num_double = stod(st1);
	float Num_float = stof(st1);
	int Num_int = stoi(st1);


	string st2 = to_string(N1);
	string st3 = to_string(N2);
	string st4 = to_string(N3);


	int N4 = N3;
	int N5 = (int) N3;
	int N6 = int(N3);


	cout << "string to double, float, int: " << endl << Num_double << "  " << Num_float << "  " << Num_int << endl << endl;

	cout << "integer to sring: " << endl << st2 << endl << endl;
	cout << "double to string: " << endl << st3 << endl << endl;
	cout << "float to string: " << endl << st4 << endl << endl;

	cout << "float to ineger: " << endl << N4 << "  " << N5 << "  " << N6;

	return 0;
}
