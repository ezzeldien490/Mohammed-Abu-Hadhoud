#include <iostream>

using namespace std;

void ReadNumber(short &Number)
{
    cout << "Please enter a number?\n";
    cin >> Number; cout << endl;
}

string ODDorEvenNumber(short Number)
{
    if (Number % 2 == 0)
        return "Even";
    
    else
        return "ODD";
}


int main()
{
    short Number;
    ReadNumber(Number);
    cout << "Number is " << ODDorEvenNumber(Number);

    return 0;

}