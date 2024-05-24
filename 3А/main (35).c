#include <stdio.h>
#include <conio.h>

void main() {
    int x = 0, y = 3, z;
    z = (++x > y || y-- && y > 0);
    printf("z=%d\n", z);
    getch();
}
