#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PINCode;
    cout << "Please enter your PIN Code?\n";
    cin >> PINCode;
    
    return PINCode;
}

bool LogIn()
{
    string PINCode;
    int Counter = 3;

    do
    {
        PINCode = ReadPinCode();
        Counter--;

        if(PINCode == "1234")
            return 1;
        else
        {
            system("color 4F");
            cout << "\nWrong PIN, You have " << Counter << " more tries " << endl;
        }

    } while (Counter >= 1 && PINCode != "1234");

    return 0;
}
 
int main()
{
    if(LogIn())
    {
        system("color 2F");
        cout << "\nYour Account balance is " << 7500 << endl;
    }
    else
    {
        system("color 4F");
        cout << "Your card is locked, contact with bank to more information." << endl;
    }

    return 0;
}