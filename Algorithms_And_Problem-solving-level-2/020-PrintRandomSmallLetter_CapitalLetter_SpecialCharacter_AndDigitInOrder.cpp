#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum enRandomOrder {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter  = 3, Digit = 4};


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char GetRandomCharacter(enRandomOrder CharType)
{
    switch (CharType)
    {
        case SmallLetter:
            return char(RandomNumber(97, 122));
        case CapitalLetter:
            return char(RandomNumber(65, 90));
        case SpecialCharacter:
            return char(RandomNumber(33, 47));
        case Digit:
            return char(RandomNumber(48, 57));
        default:
            exit(0);
    }   
}


int main()
{
    srand((unsigned)time(__null));

    cout << GetRandomCharacter(SmallLetter) << endl;
    cout << GetRandomCharacter(CapitalLetter) << endl;
    cout << GetRandomCharacter(SpecialCharacter) << endl;
    cout << GetRandomCharacter(Digit) << endl;

    return 0;
}