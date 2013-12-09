#include <iostream>

using namespace std;

int main()
{
                                                    // Why must I declare a constant?
    int pancakes[10][2];

    for (int counter = 0; counter < 10; ++counter)
    {
        pancakes[counter][0] = counter + 1;

        cout << "Person " << counter + 1 << ", Enter the number of pancakes eaten: ";
        cin >> pancakes[counter][1];
    }

    for (int i = 1; i < 10; ++i)        // ++i or i++ is the same for this case, but ++i is preferred
    {
        int personTemp;
        int pancakeTemp;
        int j;

        j = i;

        while ((pancakes[j][1] > 0) && (pancakes[j - 1][1] < pancakes[j][1])&& j>0)
        {
            personTemp = pancakes[j][0];
            pancakeTemp = pancakes[j][1];

            pancakes[j][0] = pancakes[j - 1][0];
            pancakes[j][1] = pancakes[j - 1][1];

            pancakes[j - 1][0] = personTemp;
            pancakes[j - 1][1] = pancakeTemp;

            --j;                                        // Why must i decrement 'j'?
        }
    }

    cout << endl << endl;

    for (int h = 0; h < 10; ++h)
    {
        cout << "Customer " << pancakes[h][0] << " ate " << pancakes[h][1] << " pancakes." << endl;
    }
   cin >> pancakes[0][0];
    return 0;
}
