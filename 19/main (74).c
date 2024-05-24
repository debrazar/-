#include <stdio.h>

int main() {
    int f1, f2, f3, f4, f5;
    FILE *fp;

    fp = fopen("C:\\temp\\sample.txt", "r"); 
    fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", &f1, &f2, &f3, &f4, &f5); 
    printf("The values are %d, %d, %d, %d, %d.\n", f1, f2, f3, f4, f5);
    fclose(fp); // закриття файлу

    return 0;
}