#include <stdio.h>
int main(void) {
    char s[80], *str;
    int space;
    printf("Vvedit riadok: ");
    fgets(s, sizeof(s), stdin); // замість gets
    str = s;
    for (space = 0; *str; str++) {
        if (*str != ' ') continue;
        space++;
    }
    printf("%d probiliv\n", space);
    return 0;
}


