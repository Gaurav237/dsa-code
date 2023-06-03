// Fixed and Scientific
/*
 * A} fixed => No Power(or e) use.
 * b} scientific => uses e.
 *
 * 1) In both, precision means digits after decimal.
 * 2) If these are not enough digits, then trailing zeros are shown in both.
 * 3) We can set back to default using 'defaultfloat'.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 1.23, y = 1122456.4537;
    cout << std::fixed;
    cout << x << "\n" << y << "\n\n";   // default precision is 6.
    cout << std::setprecision(2);
    cout << x << "\n" << y << "\n\n";
    // double z = 1.2e+7;
    // cout << z << "\n";

    // cout << "************************" << endl;
    // cout << std::scientific;
    // cout << x << "\n" << y << "\n\n";   // default precision is 6.
    // cout << std::setprecision(2);
    // cout << x << "\n" << y << "\n\n";
    // cout << z;

    return 0;
}
