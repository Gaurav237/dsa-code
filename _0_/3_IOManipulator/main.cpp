#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Bool values
//    bool a = true;
//    cout << a << "\n";
//
//    cout << std::boolalpha;
//    cout << a << "\n";
//
//    cout << std::noboolalpha;
//    cout << a;
//
//    cout << "\n";
//    // Integer Values
//    int b = 26, c= 20;
//    cout << b << " " << c << "\n";
//    cout << std::hex;
//    cout << b << " " << c << "\n";
//    cout << std::oct;
//    cout << b << " " << c << "\n";
//    cout << std::dec;
//    cout << b << " " << c << endl;
//
//    // more
//    int d = 26;
//    cout << std::showbase;   // noshowbase
//    cout << std::oct;
//    cout << a << "\n";
//    cout << std::hex;
//    cout << a << "\n";
//    cout << std::showpos;   // noshowpos
//    cout << a << "\n";
//    cout << std::uppercase;   // nouppercase
//    cout << a << "\n";

    cout << "\n";
    // Formatting Integers
    //    setw(n)
    //    setfill(c)
    //    std::left
    //    std::right
    // add <iomanip> header file
    int e = 12;
    cout << std::setw(5);    // use everytime, for setting width.
    cout << std::setfill('*');
    cout << e << "\n";

    cout << std::setw(5);
    cout << "Hi" << "\n";

    cout << std::left;
    cout << std::setw(5);
    cout << e << "\n";

    return 0;
}
