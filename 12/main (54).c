#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int magic;
    int guess;
    int m = 1;

    magic = rand();
    printf("Вгадай число: ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("**Вірно**\n");
        printf("Магічне число рівне %d", magic);
    } else {
        printf("Невірно\n");
        printf("m = %d\n", m);
        while (guess != magic) {
            m++;
            printf("Вгадай число: ");
            scanf("%d", &guess);
            printf("Невірно\n");
            printf("m = %d\n", m);
            if (m > 9) {
                printf("magic = %d\n", magic);
                break;
            }
        }
    }

    return 0;
}
