#include <stdio.h>

int main() {
    FILE *ff;
    int base;
    
    ff = fopen("sam", "r");
    fscanf(ff, "%d", &base);
    fclose(ff);

    ff = fopen("data", "a"); 
    fprintf(ff, "sam is %d.\n", base); 
    fclose(ff);

    return 0;
}
