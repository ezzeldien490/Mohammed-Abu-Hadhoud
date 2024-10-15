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

    switch (Color)
    {
    case enScreenColor::Blue:
        system ("color 1F");
        break;
    case enScreenColor::Green:
        system ("color 2F");
        break;
    case enScreenColor::Red:
        system ("color 4F");
        break;
    case enScreenColor::Yellow:
        system ("color 6F");
        break;
    
    default:
        system ("color 5F");
        break;
    }
}

int main()
{
    int c;
    ReadColorChoice(c);
    DisplayScreenColor(c);

    return 0;
      
}