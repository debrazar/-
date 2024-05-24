#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, z, b = 0, y = 2;
    z = (x++ * y >= 0) || b++ || (x / y * 3 == 0);
    printf("z=%d\n", z);
    getch();
}
