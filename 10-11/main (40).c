
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic) {
        printf("** Virno **");
        printf("Magichne chuslo rivne %d\n", magic);
    } else {
        printf("** Nevirno, ");
        if (guess > magic)
            printf("zanabto veluke\n");
        else
            printf("zanabto male\n");
    }
    return 0;
}
