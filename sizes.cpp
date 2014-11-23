#include<iostream>
using namespace std;

#include<climits>

int main(){

    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defined in limits.h file
    long long n_long = LONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes.\n";
    cout << "short is " << sizeof n_short << " bytes.\n";
    cout << "long is " << sizeof n_long << " bytes.\n\n";

    cout << "Maximum values:\n";
    cout << "int: " << n_int << '\n';
    cout << "short: " << n_short << '\n';
    cout << "long: " << n_long << "\n\n";

    cout << "Minimum int value = " << INT_MIN << '\n';
    cout << "Bits per byte = " << CHAR_BIT << '\n';
    return 0;
}