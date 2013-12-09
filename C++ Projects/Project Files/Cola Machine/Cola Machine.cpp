#include <iostream>

using namespace std;

int main()
{
    unsigned int choice = 0;

    cout << "Please select a beverage from the following list: \n\n" << endl;
    cout << "Coke           [1]" << endl;
    cout << "Sprite         [2]" << endl;
    cout << "F&N Orange     [3]" << endl;
    cout << "F&N Grape      [4]" << endl;
    cout << "Mineral Water  [5]" << endl;
    cout << endl << endl;

    cin >> choice;
    cout << endl << endl;

    switch (choice)
    {
        case 1:
        {
            cout << "You have chosen Coke!" << endl;
            break;
        }

        case 2:
        {
            cout << "You have chosen Sprite!" << endl;
            break;
        }

        case 3:
        {
            cout << "You have chosen F&N Orange!" << endl;
            break;
        }

        case 4:
        {
            cout << "You have chosen F&N Grape!" << endl;
            break;
        }

        case 5:
        {
            cout << "You have chosen Mineral Water!" << endl;
            break;
        }

        default:
        {
            cout << "Error. choice was not valid, here is your money back." << endl;
            break;
        }
    }

    return 0;
}
