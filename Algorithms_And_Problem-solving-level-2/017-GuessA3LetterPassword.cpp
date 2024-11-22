#include <iostream>

using namespace std;

string ReadString(string Message)
{
    string Password;
    cout << Message << endl;
    cin >> Password; cout << endl;

    return Password;
}

void Guess3LetterPassword(string Password)
{
    string word = "";
    int Counter = 1;
    for (short i = 65; i <= 90; i++)
    {
        for(short j = 65; j <= 90; j++)
        {
            for (short k = 65; k <= 90; k++,Counter++)
               {
                    word = word + char(i);
                    word = word + char(j);
                    word = word + char(k);

                    cout << "Trial [" << Counter << "]: " << word;
                    cout << endl;

                    if (word == Password)
                    {
                        cout << "\n\n";
                        cout << "Password is " << word << endl;
                        cout << "Found after " << Counter << " Trial(s).";
                        exit(0);
                    }

                    word = "";
               }

        }
    }
}

int main()
{
    Guess3LetterPassword(ReadString("Enter Password in 3 Capital Letter like (AAA)?"));

    return 0;
}