
// Bubble Sort (2-dimensional array)

#include <iostream>

using namespace std;

int main()
{
    const int FIRST = 2, SECOND = 10;
    int array [FIRST][SECOND] = { {1,2,3,4,5,6,7,8,9,10}, {5,6,7,8,9,10,1,2,3,4} };

    for (int loop = 0; loop < SECOND; ++loop)                                       // Loops through the elements
    {
        for (int compare = 0; compare < SECOND - 1; ++compare)                      // Compares the nth and (n+1)th elements
        {
            int first_temp;
            int second_temp;

            if (array [1][compare] < array [1][compare + 1])                        // Exchanges the position of adjacent elements according to the condition
            {                                                                       // Largest to smallest -> (array [1][compare] < array [1][compare + 1])
                first_temp = array [0][compare + 1];                                // Smallest to largest -> (array [1][compare] > array [1][compare + 1])
                second_temp = array [1][compare + 1];

                array [0][compare + 1] = array [0][compare];
                array [1][compare + 1] = array [1][compare];

                array [0][compare] = first_temp;
                array [1][compare] = second_temp;
            }
        }
    }


    for (int index = 0; index < SECOND; ++index)
    {
        cout << array [0][index] << "\t" << array [1][index] << endl;
    }

    return 0;
}
