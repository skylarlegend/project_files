#include <iostream>

using namespace std;

int main()
{
    int grade = 0;

    cout << "Enter your grade (between 0 - 100): " << endl;
    cin >> grade;

    if (grade == 100)
    {
        cout << "You've got a perfect score!" << endl;
    }

    else if (grade >= 90)
    {
        cout << "You've got an 'A' grade." << endl;
    }

    else if (grade >= 80)
    {
        cout << "You've got a 'B' grade." << endl;
    }

    else if (grade >= 70)
    {
        cout << "You've got a 'C' grade." << endl;
    }

    else if (grade >= 60)
    {
        cout << "You've got a 'D' grade." << endl;
    }

    else
    {
        cout << "I'm sorry but you have failed..." << endl;
    }

    return 0;
}
