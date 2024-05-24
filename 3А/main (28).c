#include <stdio.h>
#include <conio.h>

void main() {
    int a = 0, b = 3, c;
    c = b % 2 || (a >= 0) && (++b / 2 * a) == 0;
    printf("a=%d, c=%d\n", a, c);
    getch();
}

