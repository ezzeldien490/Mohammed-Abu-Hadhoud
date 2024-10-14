#include <iostream>

using namespace std;

struct stStudentMarks
{
    float Mark1, Mark2, Mark3;
};

void ReadMarks(stStudentMarks &Marks)
{
    cout << "Please enter mark1?\n";
    cin >> Marks.Mark1; cout << endl;

    cout << "Please enter mark2?\n";
    cin >> Marks.Mark2; cout << endl;

    cout << "Please enter mark3?\n";
    cin >> Marks.Mark3; cout << endl;
}

float AverageOfMarks(stStudentMarks Marks)
{
    return (Marks.Mark1 + Marks.Mark2 + Marks.Mark3) / 3;
}

string PassOrFail(float Average)
{
    if(Average >= 50)
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
    stStudentMarks Marks;

    ReadMarks(Marks);
    float Average = AverageOfMarks(Marks);
    cout << Average << endl;
    cout << PassOrFail(Average);

    return 0;
}