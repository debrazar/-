#include <stdio.h>

int main() {
    double a = 1000;
    double b = 0.0001;
    double c, d, e, f, result;

    // Calculate auxiliary variables
    c = a * a * a;
    d = 3 * a * a * b;
    e = 3 * a * b * b;
    f = b * b * b;

    // Compute the expression
    result = ((a + b) * (a + b) * (a + b) - (c + d)) / (3 * a * b * b + f);

    printf("Result: %f\n", result);

    return 0;
}
