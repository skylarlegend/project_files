#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int stop = 0;
    string user_input;
    string file_name;

    cout << "This program stores your data in plain text." << endl;
    cout << "Enter your data, press 'Enter' to proceed to the next line." << endl;
    cout << "Once you are done entering your data, press 'Enter' and 'Ctrl' + 'z' to quit." << endl;

    cout << "Enter name for file: " << endl;
    cin >> file_name;

    ofstream custom_file (file_name.c_str());
    ofstream file_check ("file_check.txt");

    while ( getline (cin, user_input) )
    {
        custom_file << user_input << endl;
        file_check << user_input << endl;
    }

    custom_file.close();
    file_check.close();

    cin >> stop;

    return 0;
}
