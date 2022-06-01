#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;

    cout << "Enter your student number:";
    cin >> num;

    if (num%2 == 0)
    {
        int r = rand() % 99 + 10;
        cout << r << " is ready to take on COS 132!" << endl;
    }
    else
    {
        cout << num << " is really excited for COS 132!" << endl;
    }

    return 0;
}