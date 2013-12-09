#include <iostream>

using namespace std;

int main()
{
    const int FIRST = 2, SECOND = 10;
    int array [FIRST][SECOND] = { {1,2,3,4,5,6,7,8,9,10}, {5,6,7,8,9,10,1,2,3,4} };


    for (int counter = 0; counter < SECOND - 1; ++counter)
    {
        int first_temp;
        int second_temp;
        int j;

        j = counter;

        while ( (array [1][j + 1] > 0) && (array [1][j] > array [1][j + 1]) && (j >= 0) ) // Largest to smallest -> (array [1][j] > array [1][j - 1])
        {                                                                            // Smallest to largest -> (array [1][j] < array [1][j - 1])
            first_temp = array [0][j + 1];
            second_temp = array [1][j + 1];

            array [0][j + 1] = array [0][j];
            array [1][j + 1] = array [1][j];

            array [0][j] = first_temp;
            array [1][j] = second_temp;

            --j;
        }
    }


    for (int index = 0; index < SECOND; ++index)
    {
        cout << array [0][index] << "\t" << array [1][index] << endl;
    }

    return 0;
}
