#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "programming is fun";
    char c = 'X';
    int a = 75, b = 29;
    bool y = true, z = false;
    const double d = 1337.42;

    cout << c << " comes after W in the alphabet" << endl;
    cout << "The product of five and fifteen: " << a << endl;
    cout  << "The multiplication of fourteen and a half and two: " << b << endl;
    cout << "Learning " << str << endl;
    cout << y << "is the value of True" << endl;
    cout << z << "is the value of False" << endl;
    cout << "The constant has a value of " << d << endl;

    int A, B, C, D;
    A = 14;
    D = 31;
    B  = A * D;
    C = D / A;

    A += 1;
    D -= 2;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << D << endl;
    cout << B + C << endl;

    return 0;
}