#include <stdio.h>
#include <conio.h>

void main() {
    char x = 255, y = 0177;
    printf("%u\n", x & y);
    x = '\0';
    y = 017;
    printf("%u\n", x & ~y);
    y = 127;
    printf("%u\n", x & y);
    y = 128;
    printf("%u\n", x | y); 
    getch();
}
