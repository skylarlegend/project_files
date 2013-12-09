#include <iostream>

using namespace std;

int main()
{
    int number;
    int counter = 1;

    while (number != 5 && counter < 11)
    {
        cout << "Enter a number that is not 5: ";
        cin >> number;

        counter++;
    }

    if (number == 5)
    {
        cout << "Hey! you weren't supposed to enter 5!" << endl;
    }

    else
    {
        cout << "Wow, you're more patient then I am, you win." << endl;
    }

    return 0;
}
