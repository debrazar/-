#include <stdio.h>

#define LINE 80

int main() {
    FILE *ff;
    char string[LINE];

    ff = fopen("opus", "r"); 
    while (fgets(string, LINE, ff) != NULL) { 
        puts(string); 
    }

    return 0;
}