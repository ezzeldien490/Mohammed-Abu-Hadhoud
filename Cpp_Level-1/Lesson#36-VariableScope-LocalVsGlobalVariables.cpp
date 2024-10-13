#include <iostream>

using namespace std;

int x = 500;
int y = 400;

void MyFunction()
{
        int x = 30;
        cout << x;
}

int main()
{
        int x = 70;
	cout << x << endl;

        MyFunction(); cout << endl;
        cout << ::x <<  " : " <<  ::y << endl;

        ::x += 300;
        ::y += 300;

        cout << ::x << " : " << ::y << endl;
        return 0;
}

