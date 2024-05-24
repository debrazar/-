#include <stdio.h>
float distance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    return (float)(dx * dx + dy * dy);
}
int main() {
    int Ax = 1, Ay = 1;
    int Bx = 2 * 14, By = 2 * 14 - 1;
    int Cx = -2 * 14, Cy = 14 + 2;
    float AB_squared = distance(Ax, Ay, Bx, By);
    float BC_squared = distance(Bx, By, Cx, Cy);
    float AC_squared = distance(Ax, Ay, Cx, Cy);
    float p = (AB_squared + BC_squared + AC_squared) * 0.5;
    float area = p * ((p - AB_squared) * (p - BC_squared) * (p - AC_squared));
    float radius = area / p;

    printf("Периметр трикутника: %.2f\n", (AB_squared*0.5) + (BC_squared*0.5) + (AC_squared*0.5));
    printf("Площа трикутника: %.2f\n", (area*0.5));
    printf("Радіус вписаного кола: %.2f\n", radius); 
}