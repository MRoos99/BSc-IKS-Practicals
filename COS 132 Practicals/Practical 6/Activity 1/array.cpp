#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    int bins[3] = {0,0,0};
    ifstream file;
    string line;

    file.open("values.txt");

    if(!file)
    {
        cout << "Error: Couldn't open values.txt" << endl;
        exit(1);
    }

    while(!file.eof())
    {
        getline(file, line);
        stringstream ss(line);
        int count = 0;

        while(ss.good())
        {
            string str;

            getline(ss, str, ',');
            bins[count] += stoi(str);
            count++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << bins[i] << endl;
    }

    return 0;
}