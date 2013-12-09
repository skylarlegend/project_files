#include <iostream>

using namespace std;

int main()
{
    int number;
    int counter = 0;

    while (number != counter)
    {
        cout << "Enter a number that is not " << counter + 1 << ": ";
        cin >> number;

        counter++;

        if (number == counter)
        {
            break;
        }


    }

    cout << "Hey! you weren't supposed to enter " << number << endl;


    return 0;
}
