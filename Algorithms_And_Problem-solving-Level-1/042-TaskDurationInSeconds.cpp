#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do 
    {   
        cout << Message << endl;
        cin >> Number; cout << endl; 
    }while (Number <= 0);
   
    return Number;
}

float CalculateTotalSeconds(float Days, float Hours, float Minutes, float Seconds)
{
	return Seconds + (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60);
}


int main()
{
	float Days = ReadPositiveNumber("Please enter the number of Days?");
	float Hours = ReadPositiveNumber("Please enter the number of Hours?");
	float Minutes = ReadPositiveNumber("Please enter the number of Minutes?");
	float Seconds = ReadPositiveNumber("Please enter the number of Seconds?");

	float TotalSeconds = CalculateTotalSeconds(Days, Hours, Minutes, Seconds);
	cout << round(TotalSeconds) << " Seconds.";

	return 0;

}
