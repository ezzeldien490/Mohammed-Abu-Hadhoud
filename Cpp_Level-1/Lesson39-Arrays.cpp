#include <iostream>

using namespace std;

void ReadGrades(float Grades[3])
{
	cout << "Please enter Grade1?\n";
	cin >> Grades[0]; cout << endl;

	cout << "Please enter Grade2?\n";
	cin >> Grades[1]; cout << endl;
	
	cout << "Please enter Grade3?\n";
	cin >> Grades[2]; cout << endl;

}

float AverageOf3Grades(float Grades[3])
{
	float Average = (Grades[0] + Grades[1] + Grades[2]) / 3;
	return Average;
}

int main()
{
	float Grades[3];
	ReadGrades(Grades);
	float Average = AverageOf3Grades(Grades);
	cout << "************************\n";
	cout << "This average of Grades is: " << Average;

	return 0;
	
}
