#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, rem;
    
    cout << "Enter any binary number: ";
    cin >> binary;
    
    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }
    
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
