#include <iostream>
#include <cstdlib>

using namespace std;

enum enScreenColor {Blue=1, Green=2, Red=3, Yellow=4};
void ReadColorChoice(int &c)
{
    cout << "************************\n";
    cout << "Please chose the number of your color?\n";
    cout << "(1) Blue\n";
    cout << "(2) Green\n";
    cout << "(3) Red\n";
    cout << "(4) Yellow\n";
    cout << "************************\n\n";
    cout << "Your choice?\n";
    cin >> c; cout << endl;
}

void DisplayScreenColor(int c)
{
    enScreenColor Color;
    Color = (enScreenColor) c;

    if (Color == enScreenColor::Blue)
    {
        system ("color 1F");
    }
    else if (Color == enScreenColor::Green)
    {
        system ("color 2F");
    }
    else if (Color == enScreenColor::Red)
    {
        system ("color 4F");
    }
    else if (Color == enScreenColor::Yellow)
    {
        system ("color 6F");
    }
    else
    {
        system ("color 1F");
    }
}

int main()
{
    int c;
    ReadColorChoice(c);
    DisplayScreenColor(c);

    return 0;
      
}