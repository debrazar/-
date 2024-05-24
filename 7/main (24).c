#include <stdio.h>
#include <conio.h>

int main() {
    int x = 2, z;
    float y;
    z = 0.5 * (y = 2.3 * x) + x++ / 3 * y;
    printf("z=%d\n", z);
    getch();
    return 0;
}
