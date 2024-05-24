#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, y = 0, z = 2;
    int a = 0;
    z = ((a = x++) * y == 0 || a < 0 && z);
    printf("z=%d\n", z); 
    getch();
}