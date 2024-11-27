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

int MyCeil(float Number)
{
        int IntPart = (int)Number;
        float FractionPart = Number - IntPart;

        if(FractionPart <= 0)
                return IntPart;
        else
                return ++IntPart;
}


int main()
{
        float Number = ReadNumber();

        cout << "My MyCeil Result: " << MyCeil(Number) << endl;
        cout << "C++ ceil Result: " << ceil(Number) << endl;

        return 0;
}

