#include <stdio.h>

int main() {
    int n = 1;
    int m = 1;
    int res1, res2;

    res1 = n-- - m;
    printf("res1=%d\n", res1);

    res2 = m-- * n;
    printf("res2=%d\n", res2); 

    return 0;
}
