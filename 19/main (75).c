#include <stdio.h>
int main() {
    FILE *pf;
    int k;

    if ((pf = fopen("proba.txt", "w")) == NULL) {
        perror("proba.txt");
        return 1;
    }

    for (k = 0; k <= 5; k++) {
        fprintf(pf, "%d %d\n", k, k * k * k);
    }

    fclose(pf);

    if ((pf = fopen("proba.txt", "r")) == NULL) {
        perror("proba.txt");
        return 1;
    }

    int n, cube;
    while (fscanf(pf, "%d %d", &n, &cube) == 2) {
        printf("Число: %d, Куб: %d\n", n, cube);
    }

    fclose(pf);

    return 0;
}
