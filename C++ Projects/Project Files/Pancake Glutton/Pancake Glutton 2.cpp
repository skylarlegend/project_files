#include <iostream>

using namespace std;

int main()
{
    const int CUST_COUNT = 10;          // Why must I declare a constant?
    int pancakes[CUST_COUNT][2];

    for (int counter = 0; counter < CUST_COUNT; ++counter)
    {
        pancakes[counter][0] = counter + 1;

        cout << "Person " << counter + 1 << ", Enter the number of pancakes eaten: ";
        cin >> pancakes[counter][1];
    }

    for (int i = 1; i < CUST_COUNT; ++i)        // ++i or i++ is the same for this case, but ++i is preferred
    {
        int personTemp;
        int pancakeTemp;
        int j;

        j = i;

        while ((pancakes[j][1] > 0) && (pancakes[j - 1][1] < pancakes[j][1]))
        {
            personTemp = pancakes[j][0];
            pancakeTemp = pancakes[j][1];

            pancakes[j][0] = pancakes[j - 1][0];
            pancakes[j][1] = pancakes[j - 1][1];

            pancakes[j - 1][0] = personTemp;
            pancakes[j - 1][1] = pancakeTemp;

            --j;                                // Why must i decrement 'j'?
        }
    }

    cout << endl << endl;

    for (int h = 0; h < CUST_COUNT; ++h)
    {
        cout << "Customer " << pancakes[h][0] << " ate " << pancakes[h][1] << " pancakes." << endl;
    }

    return 0;
}
