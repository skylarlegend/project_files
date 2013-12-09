#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand (time(0));

    const int upperLimit = 50, lowerLimit = 30;
    int range = upperLimit - lowerLimit;

    for (int counter = 0; counter < 10; ++counter)
    {
        int randomNumber;
        randomNumber = (rand() % range + 1) + lowerLimit;

        cout << randomNumber << endl;
    }

    return 0;
}
