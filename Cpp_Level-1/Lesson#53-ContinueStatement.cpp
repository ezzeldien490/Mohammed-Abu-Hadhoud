#include <iostream>

using namespace std;

int main()
{
    int Number;
    int Sum = 0;
    for(short i = 1; i <=5; i++)
    {
        cout << "Please enter a number below 50?\n";
        cin >> Number; cout << endl;

        if ( Number > 50)
        {
            cout << "[The number is greater than 50 and won't be calculate]\n\n";
            continue;
        }
        Sum += Number;
    }

    cout << "Sum of 5 Numbers is = " << Sum;
    return 0;

}