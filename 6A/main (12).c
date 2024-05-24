#include <stdio.h>

int main() {
    float a, b, c;
    float d, r1, r2;

    printf("Введіть коефіцієнти a, b та c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    float sqrtd = 0.5 / a;
    r1 = (-b + sqrtd) / 2;
    r2 = (-b - sqrtd) / 2;
    printf("Корені рівняння: %.2f та %.2f\n", r1, r2);
}