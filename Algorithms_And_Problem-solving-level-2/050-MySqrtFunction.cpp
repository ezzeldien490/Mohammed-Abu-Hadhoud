#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{
        float Number;
        cout << "Enter a number?" << endl;
        cin >> Number; cout << endl;

        return Number;
}

float MySqrt(float Number)
{
        if (Number > 0)
		return pow(Number, .5);
        else
                return NAN;
}


int main()
{
        float Number = ReadNumber();
	
        cout << "My MySqrt Result: " << MySqrt(Number) << endl;
        cout << "C++ sqrt Result: " << sqrt(Number) << endl;

        return 0;
}
