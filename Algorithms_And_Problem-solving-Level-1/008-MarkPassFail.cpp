#include <iostream>

using namespace std;

void ReadMark(float &Mark)
{
    cout << "Please enter your mark?\n";
    cin >> Mark;    cout << endl;
}

string PassOrFail(float Mark)
{
    if (Mark >= 50)
    {
        return "PASS";
    }
    else
    {
        return "Fail";
    }
        
}
int main()
{
    float Mark;
   ReadMark(Mark);
   cout << PassOrFail(Mark);

   return 0;
}