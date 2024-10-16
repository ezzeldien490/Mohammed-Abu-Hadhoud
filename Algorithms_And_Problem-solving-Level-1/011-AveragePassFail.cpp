#include <iostream>

using namespace std;

enum enStudentStatus {Pass, Fail};
struct stStudentMarks
{
    float Mark1, Mark2, Mark3;
};

stStudentMarks ReadMarks()
{
    stStudentMarks Marks;

    cout << "Please enter mark1?\n";
    cin >> Marks.Mark1; cout << endl;

    cout << "Please enter mark2?\n";
    cin >> Marks.Mark2; cout << endl;

    cout << "Please enter mark3?\n";
    cin >> Marks.Mark3; cout << endl;

    return Marks;
}

float AverageOf3Marks(stStudentMarks Marks)
{
    return (float) (Marks.Mark1 + Marks.Mark2 + Marks.Mark3) / 3;
}

enStudentStatus PassOrFail(float Average)
{
    if(Average >= 50)  
        return Pass;
    else 
        return Fail;
}

void PrintStudentStatus(float Average)
{
    cout << "Your Average is: " << Average << endl;

    if (PassOrFail(Average) == Pass)
        cout << "You Passed.";
    else
        cout << "You Failed.";
}


int main()
{
    PrintStudentStatus(AverageOf3Marks(ReadMarks()));
    return 0;
}