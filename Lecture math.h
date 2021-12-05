#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    cout << "Enter number to find the square root and cube root of it: " << endl;
    int x;
    cin >> x;

    cout << "The square root of " << x << " is " << sqrt(x) << endl;
    cout << "The cube root of " << x << " is " << cbrt(x) << endl;
}
