#include <stdio.h>
#include <conio.h>

void main() {
    int x = 2, z, y = 0;
    z = (x == 0) && (y = x) || (y > 0);
    printf("z=%d\n", z);
    getch();
}
