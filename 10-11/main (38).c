
#include <stdio.h>
#include <stdlib.h>

int main() {
    int magic;
    int guess; 
    magic = rand(); 
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if (guess == magic) 
        printf("** Virno **");
    return 0;
}
