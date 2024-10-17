#include <iostream>

using namespace std;

void MyFunction()
{
	short N1, N2;
	
	cout << "Please enter Number1?\n";
	cin >> N1; cout << endl;

	cout << "Please enter Number2?\n";
	cin >> N2; cout << endl; 
	
	cout << "**************************\n";

	cout << N1 + N2;
}

int MySumFunction(int N1, int N2)
{	
	cout << "**************************\n";

	return N1 + N2;
}

int main()
{
	MyFunction();
	cout << endl << endl;

	short N1, N2;
	
	cout << "Please enter Number1?\n";
	cin >> N1; cout << endl;

	cout << "Please enter Number2?\n";
	cin >> N2; cout << endl; 
	
	int Result = MySumFunction(N1, N2);
			
	cout << Result;
	return 0;
}
