#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber, inputNumber, counter = 1;

    srand (time(0));
    randomNumber = rand()%100;

    cout << "Pick a number between 1 and 100: ";
    cin >> inputNumber;

    while (inputNumber != randomNumber)
    {
        counter++;

        if (inputNumber > randomNumber)
        {
            cout << "\nToo big. Try again\t\t";
            cin >> inputNumber;
        }

        if (inputNumber < randomNumber)
        {
            cout << "\nToo small. Try again\t\t";
            cin >> inputNumber;
        }
    }

    cout << endl << endl;
    cout << "That was a lucky guess..." << endl;
    cout << "But it took you " << counter << " tries..." << endl;

    return 0;
}
