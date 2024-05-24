#include <stdio.h>
int main() {
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Введіть число для вгадування магічного числа: ");
    int guess, magic = 42;  // Магічне число - 42
    scanf("%d", &guess);
    if (guess == magic) {
        printf("**Вірно**\n");
        printf("Магічне число дорівнює %d\n", magic);
    } else {
        printf("Невірно\n");
        int m = 0;
        while (guess != magic) {
            m++;
            printf("Введіть число для повторного вгадування: ");
            scanf("%d", &guess);
            printf("Невірно\n");
            if (m > 9) {
                printf("Магічне число було %d\n", magic);
                break;
            }
        }
    }
    printf("\n\nГрадуси Цельсія Градуси Фаренгейта\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%10d\t%8d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
