#include <stdio.h>
#define PI 3.14

int main() {
    float r;
    printf("Введіть радіус круга: ");
    scanf("%f", &r);

    float dw = 2 * PI * r;
    float pl = PI * r * r; 

    printf("Довжина кола з радіусом %.2f: %.2f\n", r, dw);
    printf("Площа круга з радіусом %.2f: %.2f\n", r, pl);
}