#include <iostream>
using namespace std;

struct stNumbers
{
	float Number1, Number2;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter first Number?\n";
	cin >> Numbers.Number1; cout << endl;

	cout << "Please enter second Number?\n";
	cin >> Numbers.Number2; cout << endl << endl;

	return Numbers;
}


void SwapNumbers(stNumbers &Numbers)
{
	float Temp = Numbers.Number1;
	Numbers.Number1 = Numbers.Number2;
	Numbers.Number2 = Temp;
}

void PrintResult(stNumbers Numbers)
{
	cout << "Number1 = " << Numbers.Number1 << endl;
	cout << "Number2 = " << Numbers.Number2 << endl;
	cout << endl;

	SwapNumbers(Numbers);
	cout << "\n After Numbers swaped:\n";
	cout << "Number1 = " << Numbers.Number1 << endl;
	cout << "Number2 = " << Numbers.Number2 << endl;
}

int main()
{
	PrintResult(ReadNumbers());
	return 0;
}