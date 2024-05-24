#include <stdio.h>
#include <math.h>
int main() 
    {
    int i;
    double y, max_y, min_y;
    max_y = -INFINITY;
    min_y = INFINITY; 
    printf("i\t|\ty\n");
    for (i = 0; i <= 31; i++) {
        y = i * exp(i) / 100 * sin(i); 
        printf("%d\t|\t%.2f\n", i, y); 
        if (y > max_y) {
            max_y = y;
        }
        if (y < min_y) {
            min_y = y;
        }
    }
    printf("\nНайбільше значення: %.2f\n", max_y);
    printf("Найменше значення: %.2f\n", min_y);
    return 0;
}