#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Welcome: ";
    cout << setfill('*') << setw(8) << name << endl;

    return 0;
}