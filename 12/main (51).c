#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int magic;
    int guess;
    magic = rand();
    printf("Вгадай число: ");
    scanf("%d", &guess);
    if (guess == magic) {
        printf("**Вірно**\n");
        printf("Магічне число рівне %d\n", magic);
    } else {
        printf("Невірно\n");
        while (guess != magic) {
            printf("Вгадай число: ");
            scanf("%d", &guess);
            printf("Невірно\n");
        }
    }
    return 0;
}
