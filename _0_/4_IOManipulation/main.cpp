// Floating Point Values :: float, double, long double
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*
     * Default printing format ::
     * 1) No trailing zeros after decimal
     * 2) Precision means total digit including before and after decimal.
     * (excluding the digits used after e)
     * 3) Default precision value is 6.
     * 4) When value before decimal point does not fit in 6 digits, power format is used.
     *
     */

//    double x = 1.2300;
//    cout << "x " << x << "\n";
//    double y = 1567.56732;
//    cout << "y " << y << "\n";
//    double z = 1244567.45;
//    cout << "z " << z << "\n";
//    double w = 124456.67;    // *
//    cout << "w " << w << "\n";
//    double u = 123e+2;
//    cout << "u " << u << "\n";

    /*
     * Manipulating default Format ::
     * 1) setprecision(n) => changes the default precision.
     * 2) showpoint       => shows trailing zeros.
     *    noshowpoint     => reverts it.
     * 3) showpos         => show + sign for positive values.
     *    noshowpos       => reverts it.
     * 4) uppercase       => prints 'e' as 'E'.
     *    nouppercase     => reverts it.
     */
    cout << std::setprecision(4);
    // double a = 15.5683, b = 34267.1;
    // cout << a << " " << b << "\n";
    double c = 1.23;
    // // these flags remain set until changed.
    cout << std::showpoint << c << "\n";
    // cout << std::showpos << c << "\n";
    // cout << std::uppercase << b << "\n";


    return 0;
}
