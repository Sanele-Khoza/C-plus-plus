#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string Text;
    fstream File;

    File.open("2.txt");
    while (getline(File, Text))
    {
        cout << Text << endl;
    }
    File.close();

    return 0;
}
