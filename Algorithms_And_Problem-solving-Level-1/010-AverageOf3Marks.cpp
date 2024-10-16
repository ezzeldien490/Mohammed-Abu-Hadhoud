#include <iostream>
using namespace std;

struct stNumbers
{
	float Number1, Number2, Number3;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter first Number?\n";
	cin >> Numbers.Number1; cout << endl;

	cout << "Please enter second Number?\n";
	cin >> Numbers.Number2; cout << endl;

	cout << "Please enter third Number?\n";
	cin >> Numbers.Number3; cout << endl << endl;

	return Numbers;
}

float AverageOf3Numbers(stNumbers Numbers)
{
	return (float) (Numbers.Number1 + Numbers.Number2 + Numbers.Number3) / 3;
}

void PrintResult(stNumbers Numbers)
{
	cout << "The Average of numbers = " << AverageOf3Numbers(Numbers);
}


int main()
{
	PrintResult(ReadNumbers());
	return 0;
}