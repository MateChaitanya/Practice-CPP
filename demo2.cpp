

#include <iostream>
#include <cstdio> // For scanf and printf
using namespace std;

float P(int x, int y); // Function prototype

int main() {           // Corrected 'void main()' to 'int main()'
    int x, y;
    cout << "Enter two integers (base and exponent): ";
    scanf("%d %d", &x, &y); // Fixed spacing and format

    float result = P(x, y); // Correctly call the function P

    printf("Base: %d, Exponent: %d, Result: %.2f\n", x, y, result); // Proper format for float
    return 0;
}

float P(int x, int y) {
    float d = 1.0;
    if (y >= 0) {
        while (y--) {
            d = d * x;
        }
    } else {
        while (y++) {
            d = d / x;
        }
    }
    return d;
}
