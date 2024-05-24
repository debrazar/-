#include <stdio.h>

int main() {
    int a = 1000;
    float b = 0.0001;
    float c = (a + b) * (a + b) * (a + b);
    float z = (a * a);
    float p = (b * b);
    float r = (c - ((z * a) + (3 * z * b)) / ((3 * a * p) + (p * b)));
    printf("Результат виразу %f", r);
}