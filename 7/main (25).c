#include <stdio.h>
#include <conio.h>

int main() {
    int x, y = 3;
    float z;
    z = 1.1 * (x = ++y / 2.0) + 0.3 * x;
    printf("z=%4.1f\n", z);
    getch();
    return 0;
}
