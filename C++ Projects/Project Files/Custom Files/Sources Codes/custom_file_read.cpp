#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int stop = 0;
    string data_holder;
    string file_name;

    cout << "Enter name of file to open: ";
    cin >> file_name;

    ifstream custom_file (file_name.c_str());

    if (custom_file.is_open())
    {
        while ( getline (custom_file, data_holder) )
        {
            cout << data_holder << endl;
        }

        custom_file.close();
    }

    else
    {
        cout << "Unable to open file.";
    }

    cin >> stop;

    return 0;
}
