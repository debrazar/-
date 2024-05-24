#include <stdio.h>

int main() {
    int x=2,z;
    float y = 2.1;
    z = x++*y + y/x*3;
    printf("x=%d z=%d\n",x,z);
}
