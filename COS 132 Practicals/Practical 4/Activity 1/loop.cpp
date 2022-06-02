#include <iostream>

using namespace std;

int  main()
{
    int num = 0;
    int countOdd = 0;
    int i = 0;

    cout << "Enter an int: ";
    cin >> num;

    while (i <= num)
    {
        if (i % 2 == 1)
        {
            countOdd++;
        }

        i++;
    }

    cout << "Number of Odds: " << countOdd << endl;

    return 0;
}