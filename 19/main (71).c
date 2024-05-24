#include <stdio.h>

int main() {
    FILE *in; 
    int ch;
    if ((in = fopen("proba", "r")) != NULL) { 
        while ((ch = getc(in)) != EOF) { 
            putc(ch, stdout);
        }
        fclose(in);
    } else {
        printf("Файл proba не відкривається \n");
    }
    return 0;
}