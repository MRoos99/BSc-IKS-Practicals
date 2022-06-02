#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    ifstream inFile;
    string line;
    int num = 0, count = 0, i = 0;
    int *array = nullptr;

    cout << "Enter the file name: ";
    getline(cin, filename);

    inFile.open(filename);
    if (!inFile)
    {
        cout << "File not found: " << filename << endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        getline(inFile, line);
        
        if (line == "stop")
        {
            cout << "File reading stopped!" << endl;
            break;
        }

        if (count == 0)
        {
            num = stoi(line);
            cout << num << endl;
        }
        else
        {
            num += stoi(line);
            cout << num << endl;
            num = stoi(line);
        }
        count++;
    }
    inFile.close();
    return 0;
}