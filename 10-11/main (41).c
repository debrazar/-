
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magiche chyslo : ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("** Virno ** ");
        printf("Magichne chyslo rivne %d\n", magic);
    } else if (guess > magic) {
        printf("Nevirno, zanabto veluke");
    } else {
        printf("Nevirno, zanabto male");
    }
    return 0;
}
