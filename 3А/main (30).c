#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, y = 2, z;
    z = (x / 2 * 7 <= 0) && (y < 0) || (y % x == 0);
    printf("z=%d\n", --z);
    getch();
}
