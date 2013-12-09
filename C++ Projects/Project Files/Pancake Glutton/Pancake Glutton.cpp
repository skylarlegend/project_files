#include <iostream>

using namespace std;

int main()
{
    int pancakes[10];
    int compare = 0;
    int track = 0;

    for (int counter = 0; counter < 10; counter++)
    {
        cout << "Person " << counter + 1 << ", Enter the number of pancakes eaten: ";
        cin >> pancakes[counter];

        if (pancakes[counter] > compare)
        {
            compare = pancakes[counter];
            track = counter + 1;
        }
    }

    cout << "The most number of pancakes was eaten by: Person " << track << endl;

    return 0;
}
