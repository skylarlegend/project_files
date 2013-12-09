#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber, userInput;

    srand (time(0));
    randomNumber = rand() % 100 + 1;

    cout << "Think of a number between 1 - 100";
    cout << " and I will try to guess it." << endl << endl;
    cout << "If the number is too low, enter 1" << endl;
    cout << "If the number is too high, enter 2" << endl;
    cout << "But if the number is correct, enter 0" << endl;
    cout << "\nPress 5 to begin begin..." << endl;
    cin >> userInput;

    while (userInput != 0)
    {
        int lowerLimit = 0, upperLimit = 100, range = 0;

        cout << randomNumber << endl;
        cin >> userInput;

        if (userInput == 1)
        {
            randomNumber = (rand() % (upperLimit - randomNumber + 1)) + randomNumber;
            lowerLimit = randomNumber;
        }

        if (userInput == 2)
        {
            range = randomNumber - lowerLimit;
            randomNumber = (rand() % (range + 1)) + lowerLimit;     // errors here.
            upperLimit = randomNumber;
        }
    }

    cout << "Not bad aye..." << endl;


    return 0;
}
