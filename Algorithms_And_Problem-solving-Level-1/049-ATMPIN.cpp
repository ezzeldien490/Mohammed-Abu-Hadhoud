#include <iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN Code? \n";
    cin >> PinCode;

    return PinCode;
}

bool LogIn()
{
    string PinCode;

    do
    {
        PinCode = ReadPinCode();

        if(PinCode == "1234")
            return 1;
        else
        {
            system("color 4F");
            cout  << "\n Wrong PIN" << endl;
        }

    }while (PinCode != "1234");

    return 0;

}

int main()
{
    if(LogIn())
    {
        system("color 2F");
        cout << "\n Your Account balance is " << 7500 << "$\n";
    }

    return 0;
}

