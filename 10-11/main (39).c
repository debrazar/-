#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic)
        printf("** Virno **");
    else
        printf("Nevirno");
    return 0;
}
