#include <iostream>

using namespace std;

int main()
{
    float myPi;

    //User Input
    //===============================
    cout << "Enter a float number: ";
    cin >> myPi;
    //===============================

    float* piPointer = &myPi;

    myPi += 10.3;

    cout << "Value of piPointer: " << *piPointer << endl;
    cout << "Value of myPi: " << myPi << endl;

    return 0;
}