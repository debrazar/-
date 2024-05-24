#include <stdio.h>
#include <conio.h>

void main() {
    int a = 1, b = 0, c;
    c = b * 2 || (a >= 0) && (++b * a) == 0;
    printf("c=%d\n", c);
    getch();
}

