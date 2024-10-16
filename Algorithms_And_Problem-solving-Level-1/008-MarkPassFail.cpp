#include <iostream>

using namespace std;
enum enStudentStatus {Pass = 1, Fail = 2};
float ReadMark()
{
    float Mark;
    cout << "Please enter your mark?\n";
    cin >> Mark;    cout << endl;
    return Mark;
}

enStudentStatus PassOrFail(float Mark)
{
    if (Mark >= 50)
        return Pass;
    else
        return Fail;
}

void PrintStudentStatus(int Mark)
{
    if (PassOrFail(Mark) == Pass)
        cout << "Pass.\n";
    else
        cout << "Fail.\n";
}


int main()
{
   PrintStudentStatus(ReadMark());
   return 0;
}