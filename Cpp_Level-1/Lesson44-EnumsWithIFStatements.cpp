#include <iostream>
#include <cstdlib>

using namespace std;

enum enScreenColor {Blue=1, Green=2, Red=3, Yellow=4};
void ShowColorChoices()
{
    cout << "************************\n";
    cout << "Please chose the number of your color?\n";
    cout << "(1) Blue\n";
    cout << "(2) Green\n";
    cout << "(3) Red\n";
    cout << "(4) Yellow\n";
    cout << "************************\n\n";
    cout << "Your choice?\n";
}

enScreenColor ReadChoice()
{
    int c;
    cin >> c;
    return (enScreenColor) c;
}

void DisplayScreenColor(enScreenColor Color)
{
    switch (Color)
    {
    case Blue:
        system ("color 1F");
        break;
    case Green:
        system ("color 2F");
        break;
    case Red:
        system ("color 4F");
        break;
    case Yellow:
        system ("color 6F");
        break;
    
    default:
        system ("color 5F");
        break;
    }
}

int main()
{
    ShowColorChoices();
    DisplayScreenColor(ReadChoice());

    return 0;
      
}