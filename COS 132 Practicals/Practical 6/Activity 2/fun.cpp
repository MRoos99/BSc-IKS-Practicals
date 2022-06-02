#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

string echo(string);
string echo(string, int);

int main()
{
    ifstream file;
    int count = 0;
    string line = "";

    file.open("values.txt");
    if (!file)
    {
        cout << "Error: Couldn't open values.txt" << endl;
        exit(1);
    }

    while (!file.eof())
    {
        getline(file, line);
        cout << echo(line) << endl;
        cout << echo(line, count) << endl;

        count++;
    }

    return 0;
}

string echo(string str = "echo")
{
    return str;
}

string echo(string str, int num)
{
    string out = "";

    if (num%2 == 0)
    {
        out.append(str);
        out.append(to_string(num));
    }

    if (num%2 == 1)
    {
        out.append(to_string(num));
        out.append(str);
    }

    return out;
}