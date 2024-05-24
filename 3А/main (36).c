#include <stdio.h>
#include <conio.h>

void main() {
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;
    printf("%u\n", x & y | z); 
    x = y = z = 2;
    printf("%u\n", x | y & z); 
    x = 3;
    y = 0;
    z = 1;
    printf("x^y|~z=%u\n", x ^ y | ~z); 
    getch();
}
