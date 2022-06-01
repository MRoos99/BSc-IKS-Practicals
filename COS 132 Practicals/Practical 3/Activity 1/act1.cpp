#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x = 0.0;
    float ans = 0.0;

    cout << "Enter a value of x: ";
    cin >> x;

    ans = (cos(pow(x,3)))/(18 + (2 * M_PI));
    ans = (sin(pow(x,2)))/(19 + (3 * M_PI));
    ans = (tan(x))/(20 + (4 * M_PI));

    cout << fixed;
    cout << "The answer is: " << setprecision(7) << ans << endl;

    return 0;
}